#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data {
  Sales_data() = default;
  Sales_data(const std::string& s) : bookNo(s){};  //这个冒号！！！！！！
  Sales_data(const std::string& s, unsigned int n, double p)
      : bookNo(s), units_sold(n), revenue(n * p){};
  Sales_data(std::istream&);  //这块一看就没定义
  std::string isbn() const { return bookNo; }
  Sales_data& combine(const Sales_data&);
  double avg_price() const;

  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0;
};

//接下来的三个非成员函数如果在访问的参数属于私有变量的时候，就得友元了
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&,
                    const Sales_data&);  //传ostream引用是因为ostream不能复制
std::istream& read(std::istream&, Sales_data&);
Sales_data::Sales_data(std::istream& is) {
  read(is, *this);
}  //构造函数不需要反复构造所以不存在返回*this
//不加定义域，这个函数里的revenue都不知道是谁的

inline double Sales_data::avg_price() const {
  if (units_sold) {
    return revenue / units_sold;
  } else
    return 0;
}

Sales_data& Sales_data::combine(const Sales_data& rth) {
  this->units_sold += rth.units_sold;
  this->revenue += rth.revenue;
  return *this;  //返回this的原因是模仿赋值运算符
}

std::istream& read(std::istream& is, Sales_data& item) {
  double price = 0;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = price * item.units_sold;
  return is;
}

std::ostream& print(std::ostream& os, const Sales_data& item) {
  os << item.isbn() << " " << item.units_sold << " " << item.revenue << " "
     << item.avg_price();
  return os;
}

Sales_data add(Sales_data& a, Sales_data& b) {
  Sales_data sum = a;
  sum.combine(b);
  return sum;
}

#endif  // !
> 指令和内容之间要有一个空格！

## 6.1实参是形参的初始值


## 6.2  
- a）返回值类型不匹配（先创建s的副本然后返回副本）
- b）无返回值类型 
- c）少个括号没有返回值 
- d）函数定义必须要有大括号

## 6.6
- 形参域只在函数内
- 局部变量，定义的时候没有初始值，返回的时候函数创建变量副本
- 静态局部变量首次调用的时候初始化，声明周期贯穿程序

## 6.7
- 这里面每次进来都会找num的定义
 ```cpp
 size_t staticTest(void){
   static size_t num = 0;
   return num++;
 }
```

## 6.14
- 需要改变值的都是传引用
- 但是比如说传入迭代器遍历的时候需要传值进去 Page95 说了我们不清楚不在意迭代器的准确类型

```cpp
void print(auto begin,auto end){
  for(auto it = begin; it != end; ++it){
    std::cout<<*it<<std::endl;
  }
}
```

## 6.15
- c是可以用字面值初始化的
- s是普通引用没什么影响
- occurs常量引用没法改变值了

## 6.16
```cpp
bool is_empty(const string& s){return s.empty();}
```

## 6.18
```cpp
bool compare(matrix &,matrix &);
vector<int> change_val(int, vector<int>::iterator);
```

<<<<<<< HEAD
## 6.25
```cpp
int main(int argc,char **argv){
  string prompt(" ");
  for(auto i=0; i<argc; ++i){
    prompt += std::string(argv[i]);
  }
}
```

## 6.28
- 不用想，肯定是const string&

## 6.29
- 取决于传入的类型→POD开销不大无所谓，自定义类型const &省空间

## 6.31
-确保函数返回正确，就是要问，函数之前这个对象就已经存在了

## 6.32
- 返回值原来是int，现在改成int&就能locate
- 前提是传入的是已经存在的

## 6.35
- val--是val的值，--val还差不多

## 6.36 & 6.37
```cpp
string(&func(string(&val)[10]))[10]

using stringTen = string[10];
stringTen& func(stringTen&);

auto string(string*)->string(&)[10];

decltype(string[10])& func (string*);
```

## 6.38
```cpp
decltype(arrStr)& arrPtr(int i){
          return (i % 2) ? odd : even;
}
```

## 6.39
- 顶级const将被省略，重复申明
- 编译一下就知道，返回值不算是重载
- 没问题

## 6.40
- 没问题
- 默认参数往后放

## 6.41
- ht没有默认值
- ok
- 是合法的，只是匹配会有隐形转化

## 6.46
- 返回值并不能在编译时确定，所以不行

## 6.48
- 和初始的想法不契合

## 6.49
- 可行函数时候选函数的子集
- 候选函数是指没匹配之前

## 6.53
- 前两个ok，都是底层const并不重复
- 第三个时顶层const会重复定义

=======
>>>>>>> fdec3e2798ee0aac40e2c095be4087ca0105a113

#include <iostream>
#include <string>
#include <vector>
double fact(int val) {
  if (val >= 0) {
    return val == 1 ? 1 : val * fact(val - 1);
  } else {
    std::cout << "value is invaild" << std::endl;
    return -1;
  }
}

void interactive_fun(void) {
  std::string const prompt = "Enter a number within [1,13]";
  std::string const rangeError = "Out of number, try again";
  for (size_t i = 0; std::cout << prompt && std::cin; std::cin >> i) {
    if (i >= 1 || i <= 12) {
      std::cout << fact(i) << std::endl;
    } else {
      std::cout << rangeError << std::endl;
      continue;
    }
  }
}

template <typename T>
T abs(T val) {
  return val < 0 ? -val : val;
}

template <typename T>
void swapPointer(T* a, T* b) {
  T temp = *a;
  *a = *b;
  *b = temp;
}
template <typename T>
void swapRef(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
}
template <typename T>
void resetRef(T& val) {
  val = 0;
}
// ex 6.17
void to_lowercase(std::string& str) {
  for (auto& ch : str) {
    ch = tolower(ch);
  }
}
bool anyUpper(const std::string& str) {
  for (auto ch : str) {
    if (isupper(ch)) {
      return true;
    } else {
      return false;
    }
  }
}

// ex 6.21
int biggerOne(int const a, const int* b) { return a > *b ? a : *b; }
<<<<<<< HEAD

// ex 6.22
void swapAddress(int** a, int** b) {
  int* temp = *b;
  *b = *a;
  *a = temp;
=======

// ex 6.22
void swapAddress(int** a, int** b) {
  int* temp = *b;
  *b = *a;
  *a = temp;
}

int main() {
  int a = 0, b = 2;
  int* c = &a;
  int* d = &b;
  swapAddress(&c, &d);

  std::cout << *c << " " << *d << std::endl;
  system("pause");
>>>>>>> fdec3e2798ee0aac40e2c095be4087ca0105a113
}
void swapAddress(int*& lft, int*& rht) {
  auto temp = lft;
  lft = rht;
  rht = temp;
}

// ex 6.33
template <class T>
void print_vector(T first, T end) {
  if (first != end) {
    std::cout << *first << " ";
    print_vector(++first, end);
  }
}

// ex 6.42
std::string make_plural(size_t ctr, const std::string& word,
                        const std::string& ending = "s") {
  return (ctr > 1) ? word + ending : word;
}

// ex 6.54
int func(int a, int b);
using pFunc1 = decltype(func)*;
using pFunc2 = decltype(func);
using pFunc3 = int (*)(int a, int b);
std::vector<pFunc1> vec1;
std::vector<pFunc2*> vec2;
std::vector<pFunc3> vec3;

// ex 6.55
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }

// ex 6.56
std::vector<decltype(func)*> vec{add, subtract, multiply, divide};
for (auto f : vec) {
  std::cout << f(2, 2) << std::endl;
}

int main() {}

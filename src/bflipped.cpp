#include <iostream>
#include <string>

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

int main() {
  int a = 0, b = 2;
  swapRef(a, b);
  std::cout << a << " " << b << std::endl;
  system("pause");
}

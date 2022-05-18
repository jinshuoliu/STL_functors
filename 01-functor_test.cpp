#include <iostream>
#include <functional>
using namespace std;

int main()
{
  // 仿函数的两种使用方式
  greater<int> ig;
  // boolapha是一种操控器，来控制输入/出设备的状态，boolapha将后面改为对bool的输出
  cout << boolalpha << ig(4, 6) << endl; // false

  cout << greater<int>()(6, 4) << endl; // true
}
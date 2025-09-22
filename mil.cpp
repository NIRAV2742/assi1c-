#include <iostream>
using namespace std;
class mil
{
  int num;

public:
  mil(int num1) : num(num1) {}
  void dis()
  {
    cout << "num : " << num;
  }
};
int main()
{
  mil m(4);
  m.dis();
  return 0;
}
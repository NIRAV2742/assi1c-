#include <iostream>
using namespace std;
class con_mbrFun
{
private:
  int num = 2;

public:
  void fun() const;
};
void con_mbrFun::fun() const
{
  cout << "this is a constant member function";
  cout << num;
}
int main()
{
  con_mbrFun cm;
  cm.fun();
}

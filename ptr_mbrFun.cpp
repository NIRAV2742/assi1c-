#include <iostream>
using namespace std;
class huh
{
public:
  int l;
  void fun(int a)
  {
    cout << "\na=" << a;
  }
};
int main()
{
  void (huh::*ptr_var_fun)(int) = &huh::fun;
  huh obj;
  // call via object
  (obj.*ptr_var_fun)(10);
  // call via pointer to object
  huh *p = &obj;
  (p->*ptr_var_fun)(20);
  return 0;
}
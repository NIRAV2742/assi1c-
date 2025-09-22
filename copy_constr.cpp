#include <iostream>
using namespace std;
class copy_constr
{
private:
  int a, b;

public:
  copy_constr(int n, int n1)
  {
    a = n, b = n1;
  }
  copy_constr(copy_constr &m)
  {
    a = m.a, b = m.b;
  }
  void show()
  {
    cout << a << "\n"
         << b;
  }
};
int main()
{
  copy_constr cc(5, 6);
  copy_constr c(cc);
  cc.show();
  cout << "\n";
  c.show();
  return 0;
}
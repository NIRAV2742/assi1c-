#include <iostream>
using namespace std;
class qqq
{
public:
  int z = 9;

public:
  int fun()
  {
    cout << "\nz=" << z;
    return z;
  }
};
int display(qqq q)
{
  cout << "Inside function : ";
  cout << q.fun();
  return 0;
}
int main()
{
  qqq w;
  w.fun();
  display(w);
  return 0;
}
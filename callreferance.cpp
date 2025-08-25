#include <iostream>
using namespace std;
void referance(int &q, int &w)
{
  int e;
  e = q;
  q = w;
  w = e;
}
int main()
{
  int a, b;
  cout << "Enter Two Value:";
  cin >> a >> b;
  cout << "\nBefore Fuction calling:\n";
  cout << "a=" << a << "\tb=" << b;
  referance(a, b);
  cout << "\nAfter Calling:\n";
  cout << "a=" << a << " \tb = " << b;
  return 0;
}
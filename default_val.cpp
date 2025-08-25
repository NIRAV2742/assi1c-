#include <iostream>
using namespace std;
int defaultt(int a = 10, int b = 12, int c = 14, int d = 16)
{
  return a + b + c + d;
}
int main()
{
  cout << "2 value Pass" << defaultt(12, 39);
  cout << "\n0 value Pass" << defaultt();
  cout << "\nAll value Pass" << defaultt(9, 34, 1, 4);
  cout << "\n1 value Pass" << defaultt(7);
  return 0;
}
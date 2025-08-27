#include <iostream>
using namespace std;
int overLoading(int a)
{
  return a;
}
int overLoading(int a, int b)
{
  return a + b;
  //  cout << "\nA=" << a << "\tB=" << b;
}
int main()
{
  cout << "First function call -> \n\t\t" << overLoading(2);
  cout << "\nsecond function call -> \n\t\t" << overLoading(2, 4);
  return 0;
}
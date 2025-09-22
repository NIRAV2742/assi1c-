#include <iostream>
using namespace std;
class data
{
public:
  int num;
};
int main()
{
  int data::*q = &data::num;
  data d;
  d.num = 2;
  cout << "using object\t" << d.* q;
  return 0;
}
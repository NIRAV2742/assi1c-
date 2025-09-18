#include <iostream>
using namespace std;
class outer
{
public:
  void out()
  {
    cout << "this is a outer class\n";
  }
  class inner
  {
  public:
    void inr()
    {
      cout << "this is a nested class";
    }
  };
};
int main()
{
  outer orr;
  orr.out();
  outer::inner ir;
  ir.inr();
  return 0;
}
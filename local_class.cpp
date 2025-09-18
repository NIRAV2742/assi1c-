#include <iostream>
using namespace std;
void demo()
{
  class local_class
  {
  public:
    void local()
    {
      cout << "This is a local class inside the block";
    }
  };
  local_class lc;
  lc.local();
}
int main()
{
  demo();
  return 0;
}
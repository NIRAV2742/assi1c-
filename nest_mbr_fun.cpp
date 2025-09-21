#include <iostream>
using namespace std;
class clas
{
private:
  int x, y;
  int set()
  {
    return x, y;
  }

public:
  void getData()
  {
    x = 1, y = 9;
  }

  void display()
  {
    set();
    cout
        << "X==" << x << "\nY==" << y;
  }
};
int main()
{
  clas c;
  c.getData();
  c.display();
  return 0;
}
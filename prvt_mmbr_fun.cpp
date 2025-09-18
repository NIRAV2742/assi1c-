#include <iostream>
using namespace std;
class prvt_mmbr_fun
{
private:
  void pri()
  {
    cout << "This is a Private member function";
  }

public:
  void pub()
  {
    cout << "This is a Public class\n";
    pri();
  }
};
int main()
{
  prvt_mmbr_fun pm;
  pm.pub();
  return 0;
}

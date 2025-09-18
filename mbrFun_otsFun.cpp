#include <iostream>
using namespace std;
class mbrFun_otsFun
{
private:
  /* data */
public:
  void first(/* args */);
  void sec();
};

void mbrFun_otsFun::first(/* args */)
{
  cout << "This is a first outside function\n";
}

void mbrFun_otsFun::sec()
{
  cout << "This is a Second outside function";
}
int main()
{
  mbrFun_otsFun mo;
  mo.first();
  mo.sec();
  return 0;
}
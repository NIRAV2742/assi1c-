#include <iostream>
using namespace std;
class stt_mmbrFun
{
private:
public:
  static int mmbr();
};
int stt_mmbrFun::mmbr()
{
  cout << "This is a static member function";
}
int main()
{
  stt_mmbrFun sm;
  stt_mmbrFun::mmbr();
  return 0;
}

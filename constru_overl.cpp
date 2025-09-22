#include <iostream>
using namespace std;
class constru_overl
{
private:
  int num1, num2;

public:
  constru_overl(int num)
  {
    num1 = num;
    cout << "one value pass in constructor : " << num1;
  }
  constru_overl(int num3, int num4)
  {
    num1 = num3, num2 = num4;
    cout << "\nMultiple value pass in constructor:" << num1 << "&\t" << num2;
  }
};
int main()
{
  constru_overl co(4);
  constru_overl coo(4, 7);
  return 0;
}

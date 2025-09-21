#include <iostream>
using namespace std;
class fri_fun
{
private:
  int f = 5;
  friend void fri(fri_fun ff);
};

void fri(fri_fun ff)
{
  cout << "this is friend fonction : \n"
       << ff.f;
}
int main()
{
  fri_fun fr;
  fri(fr);
  return 0;
}

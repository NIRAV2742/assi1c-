#include <iostream>
using namespace std;
class array
{
private:
  int num[3];

public:
  void get()
  {
    cout << "enter your 3 subjects marks\n";
    for (int i = 0; i < 3; i++)
    {
      cin >> num[i];
    }
  }
  void set()
  {
    for (int i = 0; i < 3; i++)
    {
      cout << "\n\n"
           << num[i] << "\t";
    }
  }
};
int main()
{
  array ar;
  ar.get();
  ar.set();
  return 0;
}
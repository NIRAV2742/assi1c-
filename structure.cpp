#include <iostream>
using namespace std;
struct structure
{
  int id;
  char name[10];
  char add[10];
};
int main()
{
  structure s1;
  cout << "Enter your id number : ";
  cin >> s1.id;
  cout << "Enter your name : ";
  cin >> s1.name;
  cout << "enter your Address : ";
  cin >> s1.add;
  cout << "\n\nYour ID number is => " << s1.id;
  cout << "\nYour NAME is =>" << s1.name;
  cout << "\nYour ADDRESS is => " << s1.add;

  return 0;
}
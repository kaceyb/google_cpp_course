// hello.cpp: Kacey Bennett
// Description: a program that prints the immortal saying "hello world"
// a few times

#include <iostream>
// need the following for setw() in some c++ implementations
#include <iomanip>

using namespace std;

int main()
{
  for (int i = 0; i < 6; i++)
  {
    for (int r = 0; r < 4; r++)
    {
      cout << setw(17) << std::left << "Hello World! ";
    }
    cout << endl;
  }

  //cout << "Hello World!" << endl;
  return 0;
}
// hello.cpp: Kacey Bennett
// Description: a program that prints the immortal saying "hello world"

#include <iostream>

using namespace std;

int main()
{
  for (int i = 6; i > 0; --i)
  {
    for (int r = 4; r > 0; --r)
    {
      cout.width(17);
      cout << "Hello World!";
    }
    cout << endl;
  }
  return 0;
}
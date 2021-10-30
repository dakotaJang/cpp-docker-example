#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  cout << "Hello Docker container!" << endl;
  cout << argc << endl;

  for (int i = 1; i < argc; i++)
  {
    printf("%d:%s\n", i, argv[i]);
  }
  return 0;
}
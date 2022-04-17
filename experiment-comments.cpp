#include <iostream>

int main()
{
  std::cout << "/*";
  std::cout << "*/";
//invalid  std::cout << /* "*/" */
//invalid  std::cout << /* "*/" /* "/*";
  return 0;
}

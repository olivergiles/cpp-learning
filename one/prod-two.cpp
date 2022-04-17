#include <iostream>
int main()
{
  std::cout << "Enter two numbers to get the product" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The product of " << v1
            << " and " << v2 << std::endl;
  std::cout << "Is " << v1 * v2 << std::endl;
}

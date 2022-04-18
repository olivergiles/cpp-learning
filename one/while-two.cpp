#include <iostream>

int main()
{
  int val1=0, val2=0, sum=0;
  std::cout << "Enter two digits to get the sum of integers between them"
            << std::endl;
  std::cin >> val1 >> val2;
  while (val1 <= val2)
  {
    sum += val1;
    ++val1;
  }
  std::cout << "The sum between them is " << sum;
}

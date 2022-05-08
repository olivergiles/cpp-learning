#include <iostream>

int dontGiveMeFive(int start, int end)
{
  int count = 0;
  for (start; start < end; start++){
    if ((start % 5) != 0);
      count++;
  }
  return count;
}
int main()
{
  std::cout << dontGiveMeFive(1,9);
  return 0;
}

#include <iostream>

int dontGiveMeFive(int start, int end)
{
  int count = 0;
  for (start; start != end + 1; start++){
    std::cout << start << "\n";
    if (start % 5){
      count++;
    }
  }
  return count;
}
int main()
{
  std::cout << dontGiveMeFive(1,9) << "\n";
  std::cout << dontGiveMeFive(4, 17);
  std::cout << dontGiveMeFive(-8, 2);
  return 0;
}

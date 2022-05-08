#include <iostream>

int dontGiveMeFive(int start, int end)
{
  int count = 0;
  for (start; start != end + 1; start++){
    if ((start % 5) != 0){
      count++;
    }
  }
  return count;
}
int main()
{
  std::cout << dontGiveMeFive(1,9);
  return 0;
}

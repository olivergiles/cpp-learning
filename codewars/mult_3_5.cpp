#include <iostream>

int solution(int number)
{
  if (number <= 0){
    return 0;
  }
  int value = 0;
  for (int i = 0; i <= number; i++){
    if ((i % 3) == 0)
      value += i;
    if else ((i % 5) == 0)
      value += i;
  }
  return value;
}
int main()
{
  std::cout << solution(-5) << std::endl;
  std::cout << solution(10) << std::endl;
  return 0;
}

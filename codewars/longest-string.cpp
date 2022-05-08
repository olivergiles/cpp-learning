#include <string>
#include <vector>
#include <iostream>

class LongestConsec
{
public:
    static std::string longestConsec(std::vector<std::string> &strarr, int k);
};
int main()
{
  std::vector<std::string> arr = {"zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail"};
  int k = 2;
  std::cout << LongestConsec::longestConsec(arr, k);
  return 0;
}

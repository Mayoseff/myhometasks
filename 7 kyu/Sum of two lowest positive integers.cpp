#include <vector>
#include<algorithm>

long sumTwoSmallestNumbers(std::vector<int> nums)
{
  std::sort(nums.begin(),nums.end());
  return nums[0]+nums[1];
}

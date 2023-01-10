#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(const vector<int> &nums, int target)
    {
        map<int, int> hash;
        int key = 0;
        vector<int> arr;
        if (nums.empty())
            return arr;

        for (int i = 0; i < nums.size(); i++)
        {
            key = target - nums[i];
            if (hash.count(key) == 0) // Key exists in HashMap
                hash[nums[i]] = i;    // Stores index at Hash value
            else
            {
                arr.push_back(hash[key]);
                arr.push_back(i);
                break;
            }
        }
        return arr;
    }
};

int main(void)
{
    Solution _solution;
    vector<int> nums1 = {3, 3}; //{8, 7, 2, 5, 3, 1};

    vector<int> arr = _solution.twoSum(nums1, 6);
    for (auto x : arr)
        cout << x << ",";
    cout << endl;

    return 0;
}
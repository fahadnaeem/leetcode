// Given an integer x, return true if x is a palindrome, and false otherwise.
// Constraints: - 231 <= x <= 231 - 1

#include <iostream>
#include <iomanip>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        uint32_t res = 0;
        int tempX;
        tempX = x;
        int reminder = 0;
        while (tempX)
        {
            reminder = tempX % 10;
            res = res * 10 + reminder;
            tempX = tempX / 10;
        }
        if (x == res)
            return true;
        else
            return false;
    }
};

int main(void)
{
    Solution _solution;
    int x = 121;

    bool result = _solution.isPalindrome(x);
    cout << std::boolalpha;
    cout << result << endl;

    return 0;
}
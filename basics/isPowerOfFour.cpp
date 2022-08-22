// Given an integer n, return true if it is a power of four. Otherwise, return false.
// An integer n is a power of four, if there exists an integer x such that n == 4x.

#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n < 0)
            return false;
        else
            return ((n & (n - 1)) == 0 && (n & 0x55555555));
    }
};

int main(void)
{
    Solution _solution;
    cout << _solution.isPowerOfFour(16) << endl;
    cout << _solution.isPowerOfFour(5) << endl;
    cout << _solution.isPowerOfFour(1) << endl;
    cout << _solution.isPowerOfFour(4) << endl;
    cout << _solution.isPowerOfFour(2) << endl;

    return 0;
}
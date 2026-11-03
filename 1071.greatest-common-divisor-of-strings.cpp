/*
 * @lc app=leetcode id=1071 lang=cpp
 *
 * [1071] Greatest Common Divisor of Strings
 */

// @lc code=start

// Check de la divisibilté de la premiere string par la deuxieme
// check si on peut trouver le motif
class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        string result = "";
        if (str1 + str2 == str2 + str1)
        {
            result = str1.substr(0, gcd(str1.size(), str2.size()));
            return result;
        }

        return result;
    }
};
// @lc code=end

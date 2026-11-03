/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */
using namespace std;
// @lc code=start
class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string result = "";
        for (int i = 0; i < word1.size() || i < word2.size(); i++)
        {
            if (i < word1.size())
            {
                result += word1[i];
            }
            if (i < word2.size())
            {
                result += word2[i];
            }
        }
        return result;
    }
};
// @lc code=end

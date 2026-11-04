/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
class Solution
{
public:
    string reverseVowels(string s)
    {
        string temp;
        string verif = "aeiouAEIOU";
        int j = 0;
        for (char i : s)
        {
            for (char g : verif)
            {
                if (i == g)
                {
                    temp += i;
                }
            }
        }
        reverse(temp.begin(), temp.end());
        for (int i = 0; i < s.size(); i++)
        {
            for (int g = 0; g < verif.size(); g++)
            {
                if (s[i] == verif[g])
                {
                    s[i] = temp[j];
                    j++;
                    break;
                }
            }
        }
        return s;
    }
};
// @lc code=end

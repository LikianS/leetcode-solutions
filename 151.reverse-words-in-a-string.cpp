/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution
{
public:
    string reverseWords(string s)
    {
        bool t = false;
        string scorrected;
        string temp;
        string result;
        while (!s.empty() && s[0] == ' ')
        {
            s.erase(0, 1);
        }

        while (!s.empty() && s[s.size() - 1] == ' ')
        {
            s.pop_back();
        }

        for (char c : s)
        {

            if (c == ' ' && t == false)
            {
                t = true;
                scorrected += c;
            }
            if (c != ' ')
            {
                t = false;
                scorrected += c;
            }
        }

        for (char g : scorrected)
        {
            if (g != ' ')
            {
                temp += g;
            }
            else
            {
                result = ' ' + temp + result;
                temp = "";
            }
        }
        if (!temp.empty())
        {
            result = temp + result;
        }
        return result;
    }
};
// @lc code=end

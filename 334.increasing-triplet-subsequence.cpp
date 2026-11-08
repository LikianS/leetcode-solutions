/*
 * @lc app=leetcode id=334 lang=cpp
 *
 * [334] Increasing Triplet Subsequence
 */

// @lc code=start
class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int premier = INT_MAX;
        int deuxieme = INT_MAX;

        for (int valeur : nums)
        {
            if (valeur <= premier)
                premier = valeur;
            else if (valeur <= deuxieme)
                deuxieme = valeur;
            else
                return true;
        }

        return false;
    }
};
// @lc code=end

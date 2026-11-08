/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> result(nums.size());
        int produit = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            result[i] = produit;
            produit *= nums[i];
        }
        produit = 1;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            result[i] *= produit;
            produit *= nums[i];
        }
        return result;
    }
};
// @lc code=end

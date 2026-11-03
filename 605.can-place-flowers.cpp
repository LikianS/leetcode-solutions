
/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

// @lc code=start
class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int result = 0;
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (flowerbed.size() == 1 && i == 0 && flowerbed[0] == 0)
            {
                result++;
            }
            else if (i == 0 && flowerbed[0] == 0 && flowerbed.size() > 1 && flowerbed[1] == 0)
            {
                result = result + 1;
                flowerbed[0] = 1;
            }
            else if (i == flowerbed.size() - 1 && flowerbed[i] == 0 && flowerbed[i - 1] == 0)
            {
                result = result + 1;
                flowerbed[i] = 1;
            }
            else if (i > 0 && i < flowerbed.size() - 1 && flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0)
            {
                result = result + 1;
                flowerbed[i] = 1;
            }
        }
        if (result >= n)
        {
            return true;
        }
        return false;
    }
};
// @lc code=end

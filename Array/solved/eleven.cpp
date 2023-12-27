class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        map<int, bool> mapping;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mapping[nums[i]])
            {
                return nums[i];
            }
            mapping[nums[i]] = 1;
        }
        return nums[0];
    }
};
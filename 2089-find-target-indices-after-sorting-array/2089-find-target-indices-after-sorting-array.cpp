class Solution 
{
public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
        vector<int> v;
        map<int,int> m;
        for(int i:nums)
        {
            m[i]++;
        }
        nums.clear();
        for(auto p:m)
        {
            for(int i=0;i<p.second;i++)
            {
                nums.push_back(p.first);
            }
        }

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                v.push_back(i);
        }
        return v;
    }
};
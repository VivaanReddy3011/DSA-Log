class Solution 
{
public:
    int minMoves(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int j=nums[0];
        int s=0;
        int m=0;
        for(int i=1;i<nums.size();i++)
        {
            m=m+nums[i]-j;
            s=s+m;
            j=nums[i];
        }
        return s;
    }
};
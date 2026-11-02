class Solution 
{
public:
    int minMoves2(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int x=nums[nums.size()/2];

        int s=0;
        for(int &i:nums)
            s=s+abs(i-x);
        return s;
    }
};
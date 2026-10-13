class Solution 
{
public:
    long long maxAlternatingSum(vector<int>& nums) 
    {
        long long s=0;
        for(int &i:nums)
            if(i<0)
                i*=-1;
        sort(nums.begin(),nums.end());

        int n=nums.size();

        for(int i=0;i<n/2;i++)
            s-=(nums[i]*nums[i]);
        for(int i=n/2;i<n;i++)
            s+=(nums[i]*nums[i]);
            
        return s;
    }
};
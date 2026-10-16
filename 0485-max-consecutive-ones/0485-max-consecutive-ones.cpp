class Solution 
{
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int mx=0;
        int s=0;
        for(int i:nums)
        {
            if(i==1)
                s++;
            else
            {
                mx=max(mx,s);
                s=0;
            }
        }
        mx=max(mx,s);
        return mx;
    }
};
class Solution 
{
public:
    int longestMonotonicSubarray(vector<int>& nums) 
    {
        int f=0;
        int m=1;
        int s=1;
        for(int i=1;i<nums.size();i++)
        {
            cout<<f<<" "<<s<<"\n";
            if(nums[i-1]<nums[i] && f==0)
            {
                f=1;
                s++;
            }
            else if(nums[i-1]>nums[i] && f==0)
            {
                f=-1;
                s++;
            }
            else if(nums[i-1]<nums[i] && f==-1)
            {
                m=max(m,s);
                s=2;
                f=1;
            }
            else if(nums[i-1]>nums[i] && f==1)
            {
                m=max(m,s);
                s=2;
                f=-1;
            }
            else if(nums[i-1] == nums[i])
            {
                m=max(m,s);
                s=1;
                f=0;
            }
            else if((nums[i-1]>nums[i] && f==-1) || (nums[i-1]<nums[i] && f==1))
            {
                s++;
            }
        }
        m=max(m,s);
        return m;
    }
};
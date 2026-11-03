class Solution 
{
public:
    int minMoves(vector<int>& nums) 
    {
        int s=0;
        int mx=0;
        for(int i:nums)
            mx=max(mx,i);
        for(int i:nums)
            s+=(mx-i);
        return s;
    }
};
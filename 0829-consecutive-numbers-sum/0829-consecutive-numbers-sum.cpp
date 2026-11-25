class Solution 
{
public:
    int consecutiveNumbersSum(int n) 
    {
        int a=1;
        int k=2;
        while(true)
        {
            long long sum=k*(k-1)/2;
            if(sum>=n)
                break;
            if((n-sum)%k==0) 
                a++;
            k++;
        }
        return a;
    }
};
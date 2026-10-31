class Solution 
{
public:
    int bulbSwitch(int n) 
    {
        int s=0;
        for(long long i=1;i<=n;i++)
        {
            if(i*i<=n)
                s++;
            else
                break;
        }
        return s;
    }
};
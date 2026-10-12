class Solution 
{
public:
    long long removeZeros(long long n) 
    {
        long long s=0;
        while(n!=0)
        {
            
            if(n%10!=0)
            {
                s*=10;
                s+=(n%10);
            }
            n/=10;
        }
        string s1=to_string(s);
        reverse(s1.begin(),s1.end());
        s=stoll(s1);
        return s;
    }
};
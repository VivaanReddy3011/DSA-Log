class Solution 
{
public:
    bool canAliceWin(int n) 
    {
        int s=10;
        int f=0;
        while(n!=0)
        {
            if(n<s)
            {
                if(f==0)
                    return false;
                else
                    return true;
            }
            if(f==0)
                f=1;
            else
                f=0;
            n-=s;
            s--;
        }
        return false;
    }
};
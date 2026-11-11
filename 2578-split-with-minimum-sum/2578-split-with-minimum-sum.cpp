class Solution 
{
public:
    int splitNum(int num) 
    {
        int n1=0;
        int n2=0;

        string s=to_string(num);
        sort(s.begin(),s.end());
        int f=0;
        for(int i=0;i<s.size();i++)
        {
            if(f==0)
            {
                n1=(n1*10)+(s[i]-'0');
                f=1;
            }
            else
            {
                n2=(n2*10)+(s[i]-'0');
                f=0;
            }
        }
        return n1+n2;
    }
};
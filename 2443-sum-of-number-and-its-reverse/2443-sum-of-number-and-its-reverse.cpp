class Solution 
{
public:
    bool sumOfNumberAndReverse(int num) 
    {
        for(int i=0;i<=num;i++)
        {
            int n=i;
            string s1=to_string(n);
            string s2=s1;
            reverse(s2.begin(),s2.end());
            int n1=stoi(s1);
            int n2=stoi(s2);
            if(n1+n2==num)
                return true;
        }
        return false;
    }
};
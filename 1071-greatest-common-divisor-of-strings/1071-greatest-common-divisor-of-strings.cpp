class Solution 
{
public:
    string gcdOfStrings(string str1, string str2) 
    {
        int l=str2.size();
        int l1=str1.size();
        string s="";
        for(int i=1;i<=l;i++)
        {
            string s1=str2.substr(0,i);
            int f=0;
            for(int j=0;j<l;j+=i)
            {
                string s2=str2.substr(j,i);
                if(s1!=s2)
                    f=1;
            }
        
            int g=0;
            for(int k=0;k<l1;k+=i)
            {
                string s3=str1.substr(k,i);
                if(s1!=s3)
                    f=1;
            }
            if(f==0 && g==0)
            {
                s=s1;
            }
        }

        return s;
    }
};
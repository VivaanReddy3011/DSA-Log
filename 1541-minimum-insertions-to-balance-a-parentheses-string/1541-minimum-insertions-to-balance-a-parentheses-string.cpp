class Solution 
{
public:
    int minInsertions(string s) 
    {
        int m=0;
        int o=0;
  
        for(char b:s)
        {
            if(b=='(')
            {
                o+=2;
                if(o%2!=0)
                {
                    m++;
                    o--;
                }
            }
            else
            {
                o--;
                if(o<0)
                {
                    m++;
                    o=1;
                }
            }
        }
        
        return m+o;
    }
};
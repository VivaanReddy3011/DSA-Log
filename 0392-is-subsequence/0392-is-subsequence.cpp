class Solution 
{
public:
    bool isSubsequence(string s, string t)
    {
        int v1=0;
        int v2=0;
        while(true)
        {
            char pt1=*(t.begin()+v1);
            char pt2=*(s.begin()+v2);
            
            if(pt1==*t.end())
                if(pt2==*s.end())
                    return true;
                else 
                    return false;
            if(pt1==pt2)
                v2++;
            v1++;
        }
    }
};


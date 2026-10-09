class Solution 
{
public:
    bool isSubsequence(string s, string t, int v1=0, int v2=0)
    {
        if(v2 == s.size())
            return true;

        if(v1 == t.size())
            return false;

        if(t[v1] == s[v2])
        {
            return isSubsequence(s,t,v1+1,v2+1);
        }

        return isSubsequence(s,t,v1+1,v2);
        
    }
};
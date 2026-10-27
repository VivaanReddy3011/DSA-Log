class Solution 
{
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids)
    {
        sort(asteroids.begin(),asteroids.end());
        long s=mass;
        for(int x:asteroids)
        {
            if(s>=x)
                s=s+x;
            else
                return false;
        }
        return true;
    }
};
class Solution 
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> m;
        priority_queue<pair<int,int>> h;
        for(int i:nums)
            m[i]++;
        
        for(auto p:m)
        {
            h.push({p.second,p.first});
        }

        vector<int> v;
        while(k>0)
        {
            int c=h.top().second;
            h.pop();
            v.push_back(c);
            k--;
        }
        return v;
    }
};
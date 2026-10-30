class Solution 
{
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) 
    {
        int m=matrix.size();
        int n=matrix[0].size();

        vector<int> v;
        for(int i=0;i<m;i++)
        {
            int mn=INT_MAX;
            for(int j=0;j<n;j++)
            {
                mn=min(matrix[i][j],mn);
            }

            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==mn)
                {
                    int f=0;
                    for(int k=0;k<m;k++)
                    {   
                        if(matrix[k][j]>matrix[i][j])
                            f=1;
                    }
                    if(f==0)
                        v.push_back(mn);
                }
            }
        }
        return v;
    }
};
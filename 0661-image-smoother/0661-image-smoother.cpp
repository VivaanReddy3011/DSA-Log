class Solution 
{
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) 
    {
        int m=img.size();
        int n=img[0].size();

        if(m*n==1)
            return img;
        vector<vector<int>> v(m,vector<int>(n,0));
        if(m==1)
        {  
            for(int j=0;j<n;j++)
            {
                int t=0;
                if(j==0)
                    t=(img[0][j]+img[0][j+1])/2;
                else if(j==n-1)
                    t=(img[0][j]+img[0][j-1])/2;
                else
                    t=(img[0][j-1]+img[0][j]+img[0][j+1])/3;
                v[0][j]=t;
            }
            return v;
        }

        if(n==1)
        {  
            for(int i=0;i<m;i++)
            {
                int t=0;
                if(i==0)
                    t=(img[i][0]+img[i+1][0])/2;
                else if(i==m-1)
                    t=(img[i][0]+img[i-1][0])/2;
                else
                    t=(img[i][0]+img[i-1][0]+img[i+1][0])/3;
                v[i][0]=t;
            }
            return v;
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                long long t=0;
                if(i==0 && j==0)
                    t=(img[i][j]+img[i+1][j]+img[i][j+1]+img[i+1][j+1])/4;
                else if(i==0 && j==n-1)
                    t=(img[i][j]+img[i+1][j-1]+img[i][j-1]+img[i+1][j])/4;
                else if(i==m-1 && j==0)
                    t=(img[i][j]+img[i-1][j]+img[i-1][j+1]+img[i][j+1])/4;
                else if(i==m-1 && j==n-1)
                    t=(img[i][j]+img[i-1][j-1]+img[i-1][j]+img[i][j-1])/4;
                else if(i==0)
                    t=(img[i][j]+img[i][j-1]+img[i][j+1]+img[i+1][j-1]+img[i+1][j]+img[i+1][j+1])/6;
                else if(i==m-1)
                    t=(img[i][j]+img[i][j-1]+img[i][j+1]+img[i-1][j-1]+img[i-1][j]+img[i-1][j+1])/6;
                else if(j==0)
                    t=(img[i][j]+img[i-1][j]+img[i+1][j]+img[i-1][j+1]+img[i][j+1]+img[i+1][j+1])/6;
                else if(j==n-1)
                    t=(img[i][j]+img[i-1][j]+img[i+1][j]+img[i-1][j-1]+img[i][j-1]+img[i+1][j-1])/6;
                else
                    t=(img[i][j]+img[i-1][j]+img[i+1][j]+img[i][j-1]+img[i][j+1]+img[i-1][j-1]+img[i-1][j+1]+img[i+1][j-1]+img[i+1][j+1])/9;
                v[i][j]=t;
            }
        }
        return v;
    }
};
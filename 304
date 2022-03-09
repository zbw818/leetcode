class NumMatrix {
public:
    vector<vector<int> >prenum;
    NumMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size()+1;
        int n=matrix[0].size()+1;
        prenum.resize(m);
        for(int i=0;i<m;i++)
        {
            prenum[i].resize(n);
        }

        for(int i = 1; i < prenum.size(); i++ )
        {
            for(int j = 1; j < prenum[0].size(); j++ )
            {
                prenum[i][j]=prenum[i][j-1]+prenum[i-1][j]+matrix[i-1][j-1]-prenum[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return prenum[row2+1][col2+1]-prenum[row1][col2+1]-prenum[row2+1][col1]+prenum[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */

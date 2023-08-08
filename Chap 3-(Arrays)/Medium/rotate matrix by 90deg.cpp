/* Aim is to rotate the matrix by 90 degrees */

/*BRUTE FORCE:
  TC is O(N2) and SC is O(N2) */

#include<vector>
vector<vector<int>> rotatedMatrix(vector<vector<int>> &mat){
	int n=mat.size();
	vector<vector<int>>ans(n,vector<int>(n,0));
	for(int i=0;i<n;i++)
	{
	        for(int j=0;j<n;j++)
		{
			ans[j][n-i-1]=mat[i][j];
		}
	}
	return ans;	
}

void rotateMatrix(vector<vector<int>> &mat){
	mat=rotatedMatrix(mat);
}

/*OPTIMAL SOL:
TC is O(N*N) + O(N*N).One O(N*N) is for transposing the matrix and the other is for reversing the matrix.
SC is O(1) */

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int j=0;j<n;j++)
        {
            reverse(matrix[j].begin(),matrix[j].end());
        }
    }
};

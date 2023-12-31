/* Aim is to print a matrix in a spiral manner like this:
  1->2->3->4
           |
11 ->12    5
  |        |
  10<-8<-7<-6 */

/*TC is O(n*m) */

vector<int> spiralMatrix(vector<vector<int>>&mat) {
    vector<int>ans;
    int n=mat.size();
    int m=mat[0].size();
    int top=0,right=m-1,bottom=n-1,left=0;

    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            ans.push_back(mat[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            ans.push_back(mat[i][right]);
        }
        right--;
        if(top<=bottom){
            for (int i = right; i >= left; i--) {
              ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for (int i = bottom; i >= top; i--) {
              ans.push_back(mat[i][left]);
            }
            left ++;
        }
    }
    return ans;
}

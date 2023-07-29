/* Aim is to rearrange elements of an array in order to have alternating positive and negative elements */

/* BRUTE FORCE:
  TC is O(n)+O(n/2) and SC is 0(n) */

vector<int> alternateNumbers(vector<int>&a) {
    vector<int>pos;
    vector<int>neg;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
           pos.push_back(a[i]);
        }
        else{
            neg.push_back(a[i]);
        }
    }
    for(int i=0;i<n/2;i++)
    {
        a[2*i]=pos[i];
        a[2*i+1]=neg[i];
    }
    return a;
}

/*OPTIMAL SOL:
TC is O(N) and SC is 0(n) */

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int pos=0,neg=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                ans[pos]=nums[i];
                pos+=2;
            }
            else
            {
                ans[neg]=nums[i];
                neg+=2;
            }
        }
        return ans;
    }
};


/* SECOND VARIANT */

/* The positive and negatives should be placed alternatively and the remaining should be placed at the end */


/*O(2*N) { The worst case complexity is O(2*N) which is a combination of O(N) of traversing the array to segregate
into neg and pos array and O(N) for adding the elements alternatively to the main array} and SC is  O(N/2 + N/2) = O(N) */


 vector<int> RearrangebySign(vector<int>A, int n){
    
  // Define 2 vectors, one for storing positive 
  // and other for negative elements of the array.
  vector<int> pos;
  vector<int> neg;
  
  // Segregate the array into positives and negatives.
  for(int i=0;i<n;i++){
      
      if(A[i]>0) pos.push_back(A[i]);
      else neg.push_back(A[i]);
  }
  
  // If positives are lesser than the negatives.
  if(pos.size() < neg.size()){
      
    // First, fill array alternatively till the point 
    // where positives and negatives ar equal in number.
    for(int i=0;i<pos.size();i++){
      
      A[2*i] = pos[i];
      A[2*i+1] = neg[i];
    }
    
    // Fill the remaining negatives at the end of the array.
    int index = pos.size()*2;
    for(int i = pos.size();i<neg.size();i++){
        
        A[index] = neg[i];
        index++;
    }
  }
  
  // If negatives are lesser than the positives.
  else{
      
      // First, fill array alternatively till the point 
      // where positives and negatives ar equal in number.
      for(int i=0;i<neg.size();i++){
      
      A[2*i] = pos[i];
      A[2*i+1] = neg[i];
  }
    
    // Fill the remaining positives at the end of the array.
    int index = neg.size()*2;
    for(int i = neg.size();i<pos.size();i++){
        
        A[index] = pos[i];
        index++;
    }
  }
  return A;
    
}


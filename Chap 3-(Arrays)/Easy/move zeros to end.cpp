/* Aim is to move the zeros present in the array to the end */
/* BRUTE FORCE:
TC is O(N+K) and SC is 0(N) */

vector<int> moveZeros(int n, vector<int> a) {
    vector<int>temp;
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            temp.push_back(a[i]);      
        }
        else{
            k++;
        }
    }
     for(int i=0;i<k;i++)
     {
         temp.push_back(0);
     }
     return temp;
}

/* OPTIMAL SOL:
TC is O(n) as even though we have used 2 loops we r traversing the array only once and SC is O(1) */

vector<int> moveZeros(int n, vector<int> a) {
    int j=-1;
   for(int i=0;i<n;i++)
   {
     if (a[i] == 0) {
       j = i;
       break;
     }
   }
   if(j==-1) return a;
   for(int i=j+1;i<n;i++)
   {
       if(a[i]!=0)
       {
           swap(a[i],a[j]);
           j++;
       }
   }
   return a;
}

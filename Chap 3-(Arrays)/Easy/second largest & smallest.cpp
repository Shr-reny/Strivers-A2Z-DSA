/* Aim is to get second largest and smallest element from an array using optimal method which gives O(2n) complexity */

vector<int> getSecondOrderElements(int n, vector<int> a) {
   int l=INT_MIN,sl=INT_MIN;
   for(int i=0;i<n;i++)
   {
       if(a[i]>l)
       {
            sl=l;
           l=a[i];
       }
       else if(a[i]>sl && a[i]!=l)
       {
           sl=a[i];
       }
   }
   int s=INT_MAX,ss=INT_MAX;
   for(int i=0;i<n;i++)
   {
       if(a[i]<s)
       {
            ss=s;
           s=a[i];
       }
       else if(a[i]<ss &&a[i]!=s)
       {
           ss=a[i];
       }
   }
   return {sl,ss};
}

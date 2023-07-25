

vector<int> rotateArray(vector<int>& arr, int n) {
   vector<int>temp;
   for(int i=1;i<n;i++)
   {
       temp.push_back(arr[i]);
   }
    temp.push_back(arr[0]);
   return temp;
}


#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}

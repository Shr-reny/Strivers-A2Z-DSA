/* Aim is to find union of 2 sorted arrays */

/* Using SET:
TC is (m+n)O(log(m+n)) and SC is O(m+n) if space of union vector is considered else O(1) */

#include<bits/stdc++.h>
set<int>s;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // set<int>s;
    int n=a.size();
    int m=b.size();
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        s.insert(b[i]);
    }
    vector<int>temp;
    for(auto it:s )
    {
        temp.push_back(it);
    }
    return temp;
}

/* Using MAPS:
TC is (m+n)O(log(m+n)) and SC is O(m+n) if space of union vector is considered else O(1) */

vector < int > sortedArray(vector < int > a, vector < int > b) {
    map<int,int>fq;
    int n=a.size();
    int m=b.size();
    for(int i=0;i<n;i++)
    {
        fq[a[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        fq[b[i]]++;
    }
    vector<int>temp;
    for(auto &it:fq )
    {
        temp.push_back(it.first);
    }
    return temp;
}

/*Using POINTERS:
The above 2 works well in case of unsorted arrays. Since arrays are sorted TC can be reduced to O(m+n) and SC remains same */

vector < int > sortedArray(vector < int > arr1, vector < int > arr2) {
    int n=arr1.size();
    int m=arr2.size();
     int i = 0, j = 0; // pointers
  vector < int > Union; // Uninon vector
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j]) // Case 1 and 2
    {
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
      i++;
    } else // case 3
    {
      if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n) // IF any element left in arr1
  {
    if (Union.back() != arr1[i])
      Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) // If any elements left in arr2
  {
    if (Union.back() != arr2[j])
      Union.push_back(arr2[j]);
    j++;
  }
  return Union;
}


/*NOTE:
Insertion in set or map for one element takes O(logn) TC where n is the number of elements and for insertion of n elements it
will take nlog(n) */

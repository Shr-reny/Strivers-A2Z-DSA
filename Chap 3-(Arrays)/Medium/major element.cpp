

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        for(int i=0;i<size;i++)
        {
            int k=0;
            for(int j=0;j<size;j++)
            {
                if(a[j]==a[i])
                {
                    k++;
                }
            }
             if(k>(size/2)) return a[i];
        }
        return -1;
        
    }
};


class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
       map<int,int>mp;
       for(int i=0;i<size;i++)
       {
           mp[a[i]]++;
       }
       for(auto it:mp)
       {
           if(it.second>size/2)
           {
               return it.first;
           }
       }
       return -1;
        
    }
};


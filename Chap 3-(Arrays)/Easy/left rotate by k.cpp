/* Aim is to rotate an array to left by k steps */
/* BRUTE FORCE:
  TC is O(N) and SC is O(K) */
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

void rol(int arr[],int n,int k)
{
    if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;
  int temp[k];
  for (int i = 0; i < k; i++)
  {
    temp[i] = arr[i];
  }
  for (int i = 0; i < n - k; i++)
  {
    arr[i] = arr[i + k];
  }
  for (int i = n - k; i < n; i++)
  {
    arr[i] = temp[i - n + k];
  }
    
}
int main() {
    int n;
    cin>>n;
    int arr[n];    
    for (int i = 0; i < n; i++) {
    cin>>arr[i];
    }
    int k;
    cin>>k;
    rol(arr,n,k);
    for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
    return 0;
}

/*OPTIMAL SOL:
TC is O(N) and SC is O(1) since no extra space is used. Also, k=k%n is done to avoid repetetive rotations in case of large rotations*/

void Reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void Rotatetoleft(int arr[], int n, int k)
{
  Reverse(arr, 0, n - 1);
  Reverse(arr, 0, k - 1);
  Reverse(arr, k, n - 1);
}

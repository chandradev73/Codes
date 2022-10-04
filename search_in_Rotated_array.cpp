#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int find_pivot(int arr[],int size)
{
  int s = 0,e = size-1;
  int mid = s + (e-s)/2;
  while(s<=e)
    {
      //cout<<mid<<endl;
      if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]) 
      {
        return mid;
      }
      else if(arr[mid]>=arr[0])
      {
        s = mid+1;
      }
      else
      {
        e = mid;
      }
      mid = s + (e-s)/2;
    }
}
int binary_search(int arr[],int s, int e, int key)
{
    int mid = s+ (s-e)/2;
    while(s<=e)
    {
        if(arr[mid]==key) return mid;
        else if (arr[mid]>key) e = mid-1;
        else s = mid+1;
        mid = s + (s-e)/2;
    }
    return -1;
}

int main()
{
  int n = 6;
  int arr[6] = {7,8,2,4,5,6};
  int k = 4;
  int piv = find_pivot(arr, n);
  cout<<piv<<endl;
  int ans = -1;
  if(k >= arr[piv] && k<= arr[n-1]) 
    {
      ans = binary_search(arr,piv,n-1,k);
      cout<< ans<<endl;
    }
    else
    {
      ans = binary_search(arr,0,piv-1,k);
      cout<< ans<<endl;
    }
  return 0;
}

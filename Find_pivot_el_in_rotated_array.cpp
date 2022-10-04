#include <iostream>
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
    return -1;
}
int main()
{
  int arr[6] ={7,8,1,2,5,6};
  cout<<"Index of Pivot:"<<find_pivot(arr,6)<<endl;
  return 0;
}

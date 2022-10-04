#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int sqr_root(int n)
{
    int s = 0;
    int e = n;
    int mid = s+ ((e-s)/2);
    int ans = -1;
    while(s<=e)
    {
        int sq = mid*mid;
        if(sq == n) return mid;
        if(sq < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid-1;
        }
        mid = s+ ((e-s)/2);
    }
    return ans;
}
double more_precision(int n, int temp_sol, int precision)
{
  double factor = 1;
  double answer = temp_sol;
  for(int i = 0;i<precision;i++)
    {
      factor = factor/10;
      for(double j = answer;j*j< n;j=j+factor)
        {
          answer = j;
        }
    }
  return answer;
}
int main() {
  long int n;
  cin>>n;
  int temp_sol = sqr_root(n);
  cout<<"precise sqr root is :"<<more_precision(n,temp_sol,3)<<endl;
    return 0;
}

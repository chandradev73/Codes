#include <bits/stdc++.h> 
long long int binary_search(long long int n)
{
    long int s = 0;
    long long int e = n;
    unsigned long long int mid = s+ ((e-s)/2);
    int ans = -1;
    while(s<=e)
    {
        long long int sq = mid*mid;
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
int sqrtN(long long int N)
{
    return binary_search(N);
}

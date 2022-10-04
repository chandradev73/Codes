//leetcode problem 724
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int arr_sum  = 0;
        int left_sum = 0;
        for(int i = 0;i<nums.size();i++)
        {
            arr_sum +=nums[i];
        }
        int i=0;
        for(int i = 0;i<nums.size();i++)
        {
            if(left_sum == (arr_sum - left_sum - nums[i])) return i;
            left_sum = left_sum + nums[i];
        }
        return -1;
    }
};

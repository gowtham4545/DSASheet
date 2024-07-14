// Find the Duplicate Number

/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int ind=abs(nums[i])-1;
            if(nums[ind]<0){
                return abs(nums[i]);
            }
            else nums[ind]=-nums[ind];
        }
        return -1;
    }
};

int main()
{
    Solution s;
    
    return 0;
}
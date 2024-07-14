// Sort Colors

/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> mp;
        for(auto i:nums)mp[i]++;
        int i=0;
        for(auto it:mp){
            int t=it.second;
            while(t--)nums[i++]=it.first;
        }
    }
};

int main()
{
    Solution s;
    
    return 0;
}
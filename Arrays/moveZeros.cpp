// Move Zeroes

/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0;
        vector<int> v;
        for(auto i:nums){
            if(i==0)cnt++;
            else v.push_back(i);
        }
        while(cnt--)v.push_back(0);
        nums=v;
    }
};

int main()
{
    Solution s;
    
    return 0;
}
// Set Matrix Zeroes

/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void func(vector<vector<int>> &v,int n,int m,int i,int j){
        for(int k=0;k<n;k++)v[k][j]=0;
        for(int k=0;k<m;k++)v[i][k]=0;
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> v=matrix;
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                if(matrix[i][j]==0)
                    func(v,n,m,i,j);
        }
        matrix=v;
    }
};

int main()
{
    Solution s;
    
    return 0;
}
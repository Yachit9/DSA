#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

//Kadane's algorithm
// class Solution {
// public:
//     int maxSubArray(vector<int>& a) {
//         int max_so_far = INT_MIN, max_ending_here = 0;
//         int size=a.size();

//     for (int i = 0; i < size; i++) {
//         max_ending_here = max_ending_here + a[i];
//         if (max_so_far < max_ending_here)
//             max_so_far = max_ending_here;

//         if (max_ending_here < 0)
//             max_ending_here = 0;
//     }
//     return max_so_far;
//     }
// };

//Dynamic Programming Approach
class Solution {
public:
int maxsub(int l,int r,vector<int>& nums){
    if(l> r) return INT_MIN;
    int mid=(l+r)/2;
    int cursum=0,leftsum=0,rightsum=0;
    for(int i=mid-1,cursum=0;i>=l;i--){
        cursum+=nums[i];
        leftsum=max(leftsum,cursum);
    }
    for(int i=mid+1,cursum=0;i<=r;i++){
        cursum+=nums[i];
        rightsum=max(rightsum,cursum);
    }
    return max({maxsub(l,mid-1,nums),maxsub(mid+1,r,nums),leftsum+nums[mid]+rightsum});

}
    int maxSubArray(vector<int>& nums) {
        return maxsub(0,nums.size()-1,nums);
    }
};

int main(){
    vector<int>arr = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int n = arr.size();
    Solution s;
    // Function Call
    int max_sum = s.maxSubArray(arr);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;
//1st approach

// vector<int>minmax(vector<int>arr){
//     sort(arr.begin(),arr.end());
//     int n=arr.size();
//     vector<int>pans;

//     pans={arr[0],arr[n-1]};

//     return pans;
// }

//2nd approach

vector<int>minmax(vector<int>arr){
    int mini=INT16_MAX;
    int maxi=INT16_MIN;
    vector<int>ans;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    ans.push_back(maxi);
    ans.push_back(mini);

    return ans;
}


int main(){
    vector<int>arr;
    arr={3,5,6,7,8,1,9};

    vector<int>ans;

    ans=minmax(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}


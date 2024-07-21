#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>arr){
    vector<int>ans;
    for(int i=arr.size()-1;i>=0;i--){
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    
}
int main(){
    vector<int>arr;

    arr={1,2,3,4,5,6,7};
    reverse(arr);
    return 0;
}
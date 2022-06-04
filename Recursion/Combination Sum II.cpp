#include<bits/stdc++.h>
void help(int i,vector<int>&arr,int n,vector<int>&subset,vector<vector<int>>&ans,int sum,int target){
    if(sum==target){
        ans.push_back(subset);
        return;
    }
    if(sum>target)return;
    if(i>=arr.size())return;
     sum+=arr[i];
    subset.push_back(arr[i]);
    help(i+1,arr,n,subset,ans,sum,target);
    sum-=arr[i];
    subset.pop_back();
    while(i+1<arr.size() && arr[i]==arr[i+1])i++;
    help(i+1,arr,n,subset,ans,sum,target);
    
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	 int sum=0;
    vector<vector<int>>ans;
    vector<int>subset;
    sort(arr.begin(),arr.end());
    help(0,arr,n,subset,ans,sum,target);
    return ans;
}

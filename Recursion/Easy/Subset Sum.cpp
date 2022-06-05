#include<bits/stdc++.h>
void solve(vector<int>&num,vector<int>&sumArr,int sum,int ind){
    if(ind<0){
        sumArr.push_back(sum);
        return;
    }
    solve(num,sumArr,sum,ind-1);
    solve(num,sumArr,sum+num[ind],ind-1);
}

vector<int> subsetSum(vector<int> &num)
{
   vector<int>sumArr;
    solve(num,sumArr,0,num.size()-1);
    sort(sumArr.begin(),sumArr.end());
    return sumArr;
}

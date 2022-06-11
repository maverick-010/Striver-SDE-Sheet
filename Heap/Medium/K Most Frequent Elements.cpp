#include<bits/stdc++.h>
using namespace std;
vector<int> KMostFrequent(int n, int k, vector<int> &nums)
{
   unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[nums[i]]++;
    }
    // create min heap
  priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(auto i=mp.begin();i!=mp.end();i++)
    {
        pq.push({i->second,i->first});
        
        if(pq.size()>k)
        {
            pq.pop();
        }
    }
     vector<int>ans;
    while(!pq.empty())
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    
    return ans;
}

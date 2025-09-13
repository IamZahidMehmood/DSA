class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end(),[](auto &a, auto &b){
            if(a.first==b.first) return a.second<b.second;
            return a.first>b.first;
        });
        vector<pair<int,int>> chosen(v.begin(),v.begin()+k);
        sort(chosen.begin(),chosen.end(),[](auto &a, auto &b){
            return a.second<b.second;
        });
        vector<int> ans;
        for(auto &p:chosen) ans.push_back(p.first);
        return ans;
    }
};

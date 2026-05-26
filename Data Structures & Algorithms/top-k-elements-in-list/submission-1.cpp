class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> maps;
        int n=nums.size();
        for(int i=0;i<n;i++){
            maps[nums[i]]++;
        }
        vector<pair<int, int>> v;
        for(auto& p:maps){
            v.push_back({p.second,p.first});
        }
        sort(v.rbegin(),v.rend());
        vector<int> res;
        for(int i = 0; i < k; i++){
           res.push_back(v[i].second);
        }
        return res;

    }
};

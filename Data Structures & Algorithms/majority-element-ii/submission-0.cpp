class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>res;
        vector<int>out;
        for(int n:nums){
            res[n]++;
        }
        int n=nums.size();
        for(auto& p:res){
            if(p.second>n/3){
                out.push_back(p.first);
            }
        }
        return out;
        

        
    }
};
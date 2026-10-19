class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> m1;
        for(int i:nums){
            m1[i]++;
        }
        
        for(auto pair:m1){
            if(pair.second>1){
                return true;
            }
        }
        return false;
        
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]=i;
        // }
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(mp.find(diff)!=mp.end()){
                return {mp[diff],i};
            }  
            mp[nums[i]]=i; //we are adding elements in map after finding diff bcoz if we add them before find diff and see the element in map then we will use same element twice which is not allowed we will return {i,i}     
        }
        return {};
        
    }
};

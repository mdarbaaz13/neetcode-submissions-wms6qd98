class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> result;
        for(int ele:nums){
            
            if(ele!=val){
                result.push_back(ele);
                
            }
        }
        for(int i=0;i<result.size();i++){
            nums[i]=result[i];
        }
        return result.size();
        
    }
};
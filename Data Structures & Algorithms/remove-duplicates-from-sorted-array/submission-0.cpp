class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int ,int> res;
        for(int i=0;i<nums.size();i++){
                res[nums[i]]++;

        }
        int i=0;
        for(auto& p:res){
                nums[i]=p.first;
                i++;
        }
        return res.size();
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> res;
        set<int> dup;
        for(int i=0;i<nums.size();i++){
            dup.insert(nums[i]);
        }
        int longest=0,curr=0,prev=INT_MIN;
        for(int x:dup){
            if(x==prev+1){
                curr++;
            }else{
                curr=1;
            }
            longest=max(longest,curr);
            prev=x;
        }
        return longest;
    }
};

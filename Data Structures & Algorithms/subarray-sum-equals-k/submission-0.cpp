class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res=0;
        int n=nums.size();
        for(int st=0;st<n;st++){
            int sum=0;
            for(int end=st;end<n;end++){
                sum+=nums[end];
                if(sum==k) res++;

            }
        }

        return res;
    }
};
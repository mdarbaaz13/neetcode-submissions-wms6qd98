class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prod;
        int n=nums.size();
        for(int i=0;i<n;i++){
            long int ans=1;
            for(int j=0;j<n;j++){
                if(i!=j){
                    ans*=nums[j];
                }
            }
            prod.push_back(ans);
        }
        return prod;

    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int l=0,r=num.size()-1;
        
        while(l<r){
                int sum=num[l]+num[r];
                if(sum>target){
                        r--;
                }else if(sum<target){
                        l++;
                }else{
                        return {l+1,r+1};//it accepts 1 based indexing so +1
                }

        }
        return {};
        
    }
};

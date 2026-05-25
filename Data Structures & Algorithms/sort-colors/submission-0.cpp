class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,mid=0;//dutch national flag algorithm of dividing arrayn/vector into 4 parts 
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[l]);
                l++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        
    }
};
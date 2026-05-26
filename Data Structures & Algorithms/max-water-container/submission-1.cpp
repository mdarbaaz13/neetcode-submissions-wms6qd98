class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0 ,j=n-1;
        
        int maxwater=0;
        while(i<=j){
            int heights=min(height[i],height[j]);
            int width=j-i;
            int currwater=width*heights;
            maxwater=max(currwater,maxwater);

            if(height[i]<height[j]){
                i++;

            }else{
                j--;
            }
            
        }
        return maxwater;
        
    }
};

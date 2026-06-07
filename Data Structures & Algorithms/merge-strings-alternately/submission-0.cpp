class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int largest=0;
        int m=word1.size();
        int n=word2.size();
        largest=max(m,n);
        for(int i=0;i<largest;i++){
                if(i<m){
                        ans+=word1[i];
                }
                if(i<n){
                        ans+=word2[i];
                }
        }
        return ans;
        
        
    }
};
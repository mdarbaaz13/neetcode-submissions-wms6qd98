class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length(),count=0,i=n-1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        while(i >= 0 &&s[i]!=' '){
            count++;
            i--;
            
        
        }
        return count;
        
    }
};
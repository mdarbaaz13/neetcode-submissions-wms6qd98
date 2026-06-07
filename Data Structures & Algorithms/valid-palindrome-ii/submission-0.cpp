class Solution {
public:
bool isPallindrome(string s){
        int i=0;
        int n=s.length();
        int j=n-1;
        while(i<j){
                if(s[i]!=s[j]){
                     return false;
                }
                i++;
                j--;

        }
        return true;
        
    }

    bool validPalindrome(string s) {
        if(isPallindrome(s)){
                return true;
        }
        for(int i=0;i<s.size();i++){
                string news=s.substr(0,i)+s.substr(i+1);
                if(isPallindrome(news)){
                        return true;
                }
        }
        return false;
    }
};

        
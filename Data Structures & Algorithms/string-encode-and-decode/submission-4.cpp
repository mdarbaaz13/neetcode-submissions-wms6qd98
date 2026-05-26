class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        int n=strs.size();
        for(int i=0;i<n;i++){
            s+=strs[i];
            s+='~';
        }
        s+='`';
        return s;

    }

    vector<string> decode(string s) {
        int n=s.length();
        vector<string> res;
        int i=0;
        while(s[i]!='`'){
            string cur="";
            while(s[i]!='~'){
                cur+=s[i];
                i++;
            }
            res.push_back(cur);
            i++;
        }
        return res;


    }
};

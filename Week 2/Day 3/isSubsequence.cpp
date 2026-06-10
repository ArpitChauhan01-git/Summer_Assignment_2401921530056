class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size()) return false;
        if(s.length()==0) return true;
        int idx=0; 
        for(int i=0; i<t.size(); i++){
            if(s[idx]==t[i]){
                if(idx==s.size()-1) return true;
                idx++;
            }
        }
        return false;
    }
};
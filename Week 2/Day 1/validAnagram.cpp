class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        int ans[26];
        for(char ch: s){
            ans[int(ch)-97]++;
        }
        for(char ch: t){
            ans[int(ch)-97]--;
        }
        for(int i=0; i<26; i++){
            if(ans[i]!=0) return false;
        }
        return true;
    }
};
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.size()<p.size()) return {};
        int freq[26]={0};
        vector<int> ans;
        for(int val: p){
            freq[val-'a']++;
        }
        for(int i=0; i<=s.size()-p.size(); i++){
            int windowFreq[26]={0}, flag=0;
            for(int j=i; j<p.size()+i; j++){
                windowFreq[s[j]-'a']++;
            }
            for(int j=0; j<26; j++){
                if(freq[j]!=windowFreq[j]) {
                    flag=1;
                    break;
                }
            }
            if(flag==0) ans.push_back(i);
        }
        return ans;
    }
};
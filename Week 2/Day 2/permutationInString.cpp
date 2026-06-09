class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        int freq[26]={0};
        for(int i=0; i<s1.length(); i++){
            freq[s1[i]-'a']++;
        }
        for(int i=0; i<=s2.length()-s1.length(); i++){
            int windowFreq[26]={0}; 
            for(int j=i; j<s1.length()+i; j++){
                windowFreq[s2[j]-'a']++;
            }
            int flag=1;
            for(int j=0; j<26; j++){
                if(freq[j] != windowFreq[j]){
                    flag=0;
                    break;
                }
            }
            if(flag==1) return true;
        }
        return false;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength=0;
        for(int i=0; i<s.size(); i++){
            int freq[128]={0}, j=i; 
            while(j<s.size() && freq[s[j]]==0){
                freq[s[j++]]++;
                maxLength= max(maxLength, j-i);
            }
        }
        return maxLength;
    }
};
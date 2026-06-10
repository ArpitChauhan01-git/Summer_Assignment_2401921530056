class Solution {
public:
    int strStr(string haystack, string needle) {
        int idx=0;
        int h=haystack.size();
        int n=needle.size();
        if(h<n) return -1;
        for(int i=0; i<=h-n; i++){
            for(int j=i; j<h; j++){
                if(haystack[j]==needle[idx]){
                    if(idx==n-1) return (j-idx);
                    idx++;
                    continue;
                }
                else{
                    idx=0;
                    break;
                }
            }
        }
        return -1;
    }
};
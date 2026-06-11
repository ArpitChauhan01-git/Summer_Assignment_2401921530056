class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int st=0, end=0;
        for(int i=0; i<n; i++){
            if(s[i]==' ' || i==n-1){
                if(i==n-1) end=i;
                else end=i-1;
                while(st<end){
                    swap(s[st++], s[end--]);
                }
                st=i+1;
            }
        }
        return s;
    }
};
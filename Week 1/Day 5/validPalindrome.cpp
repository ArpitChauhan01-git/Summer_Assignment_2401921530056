class Solution {
public:
    void isAlphaNumeric(string &str, int &st, int &end){
        while(!((str[st]>='A' && str[st]<='Z') || 
        (str[st]>='a' && str[st]<='z') || 
        (str[st]   >='0' && str[st]<='9'))){
            if(st>=end) break;
            st++;
        }
        while(!((str[end]>='A' && str[end]<='Z') || 
        (str[end]>='a' && str[end]<='z') || 
        (str[end]>='0' && str[end]<='9'))){
            if(st>=end) break;
            end--;
        }
    }
    bool isPalindrome(string s) {
        int st=0, end=s.length()-1;

        while(st<end){
            isAlphaNumeric(s, st, end);
            if(tolower(s[st])!=tolower(s[end])){
                return false;
            }
            st++,end--;
        }
        return true;
    }
};
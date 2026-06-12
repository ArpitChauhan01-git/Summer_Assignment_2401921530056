class Solution {
public:
    int compress(vector<char>& chars) {
        int idx = 0;
        for(int i=0; i<chars.size(); ){
            char ch = chars[i];
            int count = 0;
            while(i<chars.size() && chars[i] == ch){
                count++, i++;
            }
            if(count == 1) chars[idx++] = ch;
            else{
                chars[idx++] = ch;
                string num = to_string(count);
                for(char digit : num){
                    chars[idx++] = digit;
                }
            }
        }
        return idx;
    }
};
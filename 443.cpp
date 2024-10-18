class Solution {
public:
    int compress(vector<char>& chars) {
        int pos = 0, count = 1;
        
        for (int i = 1; i <= chars.size(); i++) {
            if (i == chars.size() || chars[i-1] != chars[i]) {
                chars[pos++] = chars[i - 1];
                if (count == 1) {
                    continue;
                }
                else if (count <= 9) {
                    chars[pos++] = (count + '0');
                } else {
                    string num = to_string(count);
                    for (char p : num) {
                        chars[pos++] = p;
                    }
                }
                count = 1;
            }
            else {
                count++;
            }
        }
        
        return pos;
    }
};

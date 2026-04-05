#include <string>
#include <unordered_map>

class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, int> s_map;
        std::unordered_map<char, int> t_map;
    
        for (int i = 0; i < s.length(); ++i) {
            if (s_map[s[i]] != t_map[t[i]]) {
                return false;
            }

            s_map[s[i]] = i + 1;
            t_map[t[i]] = i + 1;
        }

        return true;
    }
};

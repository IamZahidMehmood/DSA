class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        int mapST[256] = {0}, mapTS[256] = {0};
        for(int i = 0; i < s.size(); i++) {
            if(mapST[s[i]] == 0 && mapTS[t[i]] == 0) {
                mapST[s[i]] = t[i];
                mapTS[t[i]] = s[i];
            } else {
                if(mapST[s[i]] != t[i] || mapTS[t[i]] != s[i]) return false;
            }
        }
        return true;
    }
};

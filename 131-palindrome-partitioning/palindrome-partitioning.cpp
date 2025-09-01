class Solution {
public:
    vector<vector<string>> res;
    vector<string> path;
    bool isPal(string &s, int l, int r) {
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }
    void dfs(string &s, int start) {
        if (start == s.size()) {
            res.push_back(path);
            return;
        }
        for (int end = start; end < s.size(); end++) {
            if (isPal(s, start, end)) {
                path.push_back(s.substr(start, end - start + 1));
                dfs(s, end + 1);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        dfs(s, 0);
        return res;
    }
};

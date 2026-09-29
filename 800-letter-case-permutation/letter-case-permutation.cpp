class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        solve(s, 0, ans);
        return ans;
    }

private:
    void solve(string &s, int idx, vector<string> &ans) {
        if (idx == s.size()) {
            ans.push_back(s);
            return;
        }

        if (isalpha(s[idx])) {
            s[idx] = tolower(s[idx]);
            solve(s, idx + 1, ans);

            s[idx] = toupper(s[idx]);
            solve(s, idx + 1, ans);
        } else {
            solve(s, idx + 1, ans);
        }
    }
};
class Solution {
public:
    vector<string> ans;

    vector<string> letterCasePermutation(string s) {
        solve(s, "");
        return ans;
    }

    void solve(string ip, string op) {
        if (ip.size() == 0) {
            ans.push_back(op);
            return;
        }

        if (isalpha(ip[0])) {
            string op1 = op;
            string op2 = op;

            op1 += tolower(ip[0]);
            op2 += toupper(ip[0]);

            ip.erase(ip.begin());

            solve(ip, op1);
            solve(ip, op2);
        }
        else {
            string op1 = op;
            op1 += ip[0];

            ip.erase(ip.begin());

            solve(ip, op1);
        }
    }
};
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> diff(1002, 0);
        for (auto& t : trips) {
            diff[t[1]] += t[0];
            diff[t[2]] -= t[0];
        }

        int current = 0;
        for (int change : diff) {
            current += change;
            if (current > capacity) return false;
        }
        return true;
    } 
        

};
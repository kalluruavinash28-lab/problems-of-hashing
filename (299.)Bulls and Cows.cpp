class Solution {
public:
    string getHint(string s, string g) {
        vector<int> fs(10, 0), fg(10, 0);
        int bulls = 0, cows = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == g[i]) {
                bulls++;
            } else {
                fs[s[i] - '0']++;
                fg[g[i] - '0']++;
            }
        }

        for (int i = 0; i < 10; i++) {
            cows += min(fs[i], fg[i]);
        }

        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};

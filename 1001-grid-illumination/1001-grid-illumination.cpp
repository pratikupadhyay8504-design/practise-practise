class Solution {
public:
    vector<int> gridIllumination(int n, vector<vector<int>>& lamps, vector<vector<int>>& queries) {
        unordered_map<int, int> rows;
        unordered_map<int, int> cols;
        unordered_map<int, int> diag1;
        unordered_map<int, int> diag2;
        set<pair<int, int>> lamp_set;

        for (const auto& lamp : lamps) {
            int r = lamp[0];
            int c = lamp[1];
            if (lamp_set.insert({r, c}).second) {
                rows[r]++;
                cols[c]++;
                diag1[r - c]++;
                diag2[r + c]++;
            }
        }

        vector<int> ans;
        ans.reserve(queries.size());

        for (const auto& query : queries) {
            int r = query[0];
            int c = query[1];

            if (rows[r] > 0 || cols[c] > 0 || diag1[r - c] > 0 || diag2[r + c] > 0) {
                ans.push_back(1);
            } else {
                ans.push_back(0);
            }

            for (int dr = -1; dr <= 1; ++dr) {
                for (int dc = -1; dc <= 1; ++dc) {
                    int nr = r + dr;
                    int nc = c + dc;
                    if (nr >= 0 && nr < n && nc >= 0 && nc < n) {
                        if (lamp_set.erase({nr, nc})) {
                            rows[nr]--;
                            cols[nc]--;
                            diag1[nr - nc]--;
                            diag2[nr + nc]--;
                        }
                    }
                }
            }
        }

        return ans;
    }
};

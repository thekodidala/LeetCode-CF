class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        //const size_t
        int n = size(grid);
        int ans = 0;
        for (int r = 0; r < n; ++r) {
            for (int c = 0; c < n; ++c) {
                bool equal = true;
                for (int i = 0; i < n; ++i) {
                    if (grid[r][i] != grid[i][c]) {
                        equal = false;
                        break;
                    }
                }
                ans += equal;
                //ans++;
            }
        }
        return ans;
    }
};
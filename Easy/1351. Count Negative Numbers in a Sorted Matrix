#include <vector>

using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m(grid.size()), n(grid[0].size()), x(0), y(n-1), result(0);
        while (x < m) {
            while (y >= 0 && grid[x][y] < 0) 
                y--;
            result += n - y - 1;
            x++;
        }
        return result;
    }
};

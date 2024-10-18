class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> paths(obstacleGrid);
        
        paths[0][0] = obstacleGrid[0][0] == 1 ? 0 : 1;
        
        for (int i = 1; i < obstacleGrid.size(); i++) {
            paths[i][0] = obstacleGrid[i][0] == 1 ? 0 : paths[i - 1][0];
        }
        
        for (int j = 1; j < obstacleGrid[0].size(); j++) {
            paths[0][j] = obstacleGrid[0][j] == 1 ? 0 : paths[0][j - 1];
        }
        
        for (int i = 1; i < obstacleGrid.size(); i++) {
            for (int j = 1; j < obstacleGrid[0].size(); j++) {
                paths[i][j] = obstacleGrid[i][j] == 1 ? 0 : paths[i - 1][j] + paths[i][j - 1];
            }
        }
        
        return paths[paths.size() - 1][paths[0].size() - 1];
        
    }
};

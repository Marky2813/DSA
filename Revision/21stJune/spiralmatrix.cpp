class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int x1 = 0;
        int y1 = 0; 
        int x2 = matrix.size()-1;
        int y2 = matrix[0].size()-1;

        vector<int> result; 


         while(x2 >= x1 && y2 >= y1) {   
        for(int j = y1; j <= y2; j++) {
            result.push_back(matrix[x1][j]);
        }
        for(int i = x1+1; i <= x2; i++) {
            result.push_back(matrix[i][y2]);
        }
        if(x1 != x2) {
        for(int j = y2-1; j >= y1; j--) {
            result.push_back(matrix[x2][j]);
        }
        }
        if(y1 != y2) {
        for(int i = x2-1; i > x1; i--) {
            result.push_back(matrix[i][y1]);
        }
        }
        x1++;
        y1++;
        x2--;
        y2--;
         }

        return result; 
    }
};
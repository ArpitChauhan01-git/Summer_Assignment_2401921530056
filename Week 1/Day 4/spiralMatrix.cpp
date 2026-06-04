class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int sRow=0, eRow=matrix.size()-1;
        int sCol=0, eCol=matrix[0].size()-1;

        while(sRow<=eRow && sCol<=eCol){
            //top layer
            for(int i=sCol; i<=eCol; i++){
                ans.push_back(matrix[sRow][i]);
            }
            //right layer
            for(int j=sRow+1; j<=eRow; j++){
                ans.push_back(matrix[j][eCol]);
            }
            //bottom layer
            for(int i=eCol-1; i>=sCol; i--){
                if(sRow==eRow) break;
                ans.push_back(matrix[eRow][i]);
            }
            //left layer
            for(int j=eRow-1; j>=sRow+1; j--){
                if(sCol==eCol) break;
                ans.push_back(matrix[j][sCol]);
            }
            sRow++, sCol++, eRow--, eCol--;
        }
        return ans;
    }
};
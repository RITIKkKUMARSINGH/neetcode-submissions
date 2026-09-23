class Solution {
public:
    bool ispossible(int row,int col,char c,vector<vector<char>>&board){
        for(int i=0;i<9;i++){
            if(i!=col && board[row][i]==c)return false;
            if(i!=row && board[i][col]==c)return false;
            int r=3*(row/3)+i/3;
            int co=3*(col/3)+i%3;
            if((r!=row || co!=col) && board[r][co]==c)return false;
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.')continue;
                char c=board[i][j];
                if(!ispossible(i,j,c,board))return false;
            }
        }
        return true;
    }
};

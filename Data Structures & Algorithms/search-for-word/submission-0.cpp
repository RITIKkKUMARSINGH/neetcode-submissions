class Solution {
public:
    bool helper(int row,int col,int index,int n,int m,vector<vector<char>>&board,string word){
        if(index==word.size()){
            return true;
        }
        if(row<0 || col<0 || row>=n || col>=m || board[row][col]!=word[index])return false;
        char temp=board[row][col];
        board[row][col]='#';
        bool found = helper(row+1,col,index+1,n,m,board,word)||helper(row,col-1,index+1,n,m,board,word)||helper(row,col+1,index+1,n,m,board,word)||helper(row-1,col,index+1,n,m,board,word);
        board[row][col]=temp;
        return found;
        }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(helper(i,j,0,n,m,board,word))return true;
            }
        }
        return false;
    }
};

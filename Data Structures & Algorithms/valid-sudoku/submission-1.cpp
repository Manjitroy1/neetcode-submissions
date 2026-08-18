class Solution {
public:
    bool isposs(int i,int j,char c,vector<vector<char>>& board){
        for(int n=0;n<9;n++){
            if(board[n][j]==c) return false;
            if(board[i][n]==c) return false;
            int row = 3*(i/3) + n/3;
            int col = 3*(j/3) + n%3;
            if(board[row][col] ==c) return false;
        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
            for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                    if(board[i][j]=='.'){
                        for(char c='1';c<='9';c++){
                            if(isposs(i,j,c,board)){
                                board[i][j]=c;
                                if(solve(board)) return true;
                                else{
                                    board[i][j]='.';
                                }
                            }
                            
                        }
                        return false;
                    }
                }
            }
        return true;
    }
    bool check(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char c=board[i][j];
                if(c=='.') continue;
                board[i][j]='.';
                for(int n=0;n<9;n++){
                    if(board[n][j]==c) return false;
                    if(board[i][n]==c) return false;
                    int row = 3*(i/3) + n/3;
                    int col = 3*(j/3) + n%3;
                    if(board[row][col] ==c) return false;
                }
                board[i][j]=c;
                
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        // return solve(board);
        return check(board);
        
    }
};

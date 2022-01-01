class Solution {
    private:
    int m;
    int n;
    
    bool Dfs(vector<vector<char>>& board,string word,int k,int i,int j){
    if(i<0 or i>=m or j<0 or j>=n or word[k]!=board[i][j])
        return false;
        
    if(k==word.length()-1) return true;
    
        char cur=board[i][j];
        board[i][j]='*';
        bool search_next=Dfs(board,word,k+1,i-1,j) or Dfs(board,word,k+1,i+1,j) or Dfs(board,word,k+1,i,j-1) or Dfs(board,word,k+1,i,j+1);
        board[i][j]=cur;
        return search_next;
        
    }
    
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(word.empty()) return true;
        if(board.empty() || board[0].empty()) return false;
        m=board.size();
        n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(Dfs(board,word,0,i,j))
                    return true;
            }
        }
        return false;
    }
};

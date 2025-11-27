public class chess {

    public static boolean isSafe(char board[][],int row,int col) {
        //vertical up
        for(int i=row;i>=0;i--) {
            if(board[i][col]=='Q'){
                return false;
            }
        }

        // diag left up
        for(int i= row-1,j= col-1;i>=0 && j>=0; i--,j--){
            if(board[i][j]=='Q'){  
                return false;
            }
        }
        //diag right up
        
        
    }
    public static void nQueens(char board[][], int row) {
        // base case
        if (row == board.length) {
            printBoard(board);
            return;
        }
        // place queen in every column of the current row
        for (int col = 0; col < board.length; col++) {
            if (isSafe(board, row, col)) {
                board[row][col] = 'Q'; 
                nQueens(board, row + 1);// function call
                board[row][col] = '-'; // backtrack step
            }
        }
    }

    public static void printBoard(char board[][]){
        for(int i=0;i<board.length;i++){
            for(int j=0;j<board.length;j++){
                System.out.print(board[i][j] + " ");
                }
                System.out.println();
        }
    }
    public static void main(String[] args) {
        int n =2;
        char board[][] = new char[n][n];
        //initialize
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                board[i][j] = '-';
            }
        }
        nQueens(board,0);
    }
}

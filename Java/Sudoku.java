import java.util.Scanner;

public class Sudoku {

	public static void main(String[] args) {
       Scanner scn=new Scanner(System.in);
       int[][] arr=new int[9][9];
       for(int i=0;i<arr.length;i++){
    	   for(int j=0;j<arr[0].length;j++){
    		   arr[i][j]=scn.nextInt();
    	   }
       }
       int[] row=new int[9];
       int[] col=new int[9];
       int[][] submat=new int[3][3];
       for(int i=0;i<arr.length;i++){
    	   for(int j=0;j<arr[0].length;j++){
    		   row[i]=1<<arr[i][j];
    		   col[j]=1<<arr[i][j];
    		   submat[i/3][j/3]=1<<arr[i][j];
    	   }
       }
       SolveSudoku(arr, 1, row, col, submat);
       scn.close();
	}
    private static void SolveSudoku(int[][] arr,int cno,int[] row,int[] col,int[][] submat){
    	int rrow=(cno-1)/arr.length;
    	int ccol=(cno=1)-arr.length;
    	if(arr[rrow][ccol]!=0){
    		SolveSudoku(arr, cno+1, row, col, submat);
    	}
    	else{
    		for(int choice=1;choice<=9;choice++){
    			if(IsnumberAvailable(arr, row, col, submat, choice, rrow, ccol)){
    				placeThenumber(arr, row, col, submat, choice, rrow, ccol);
    				SolveSudoku(arr, cno+1, row, col, submat);
    				releaseThenumber(arr, row, col, submat, choice, rrow, ccol);
    			}
    		}
    	}
    } 
    private static boolean IsnumberAvailable(int[][] arr,int[] row,int[] col,int[][] submat,int choice,int rrow,int ccol){
       int mask=1<<choice;
       if((row[rrow]&mask)!=0){
    	   return false;
       }
       else if((col[ccol]&mask)!=0){
    	   return false;
       }
       else if((submat[rrow/3][ccol/3]&mask)!=0){
    	   return false;
       }
       else{
    	   return true;
       }
    }
    private static void placeThenumber(int[][] arr,int[] row,int[] col,int[][] submat,int choice,int rrow,int ccol){
        int mask=1<<choice;
    	arr[rrow][ccol]=choice;
        row[rrow]=row[rrow]|mask;
    	col[ccol]=col[ccol]|mask;
    	submat[rrow][ccol]=submat[rrow][ccol]|mask;
    } 
    private static void releaseThenumber(int[][] arr,int[] row,int[] col,int[][] submat,int choice,int rrow,int ccol){
    	int mask=~(1<<choice);
    	arr[rrow][ccol]=0;
    	row[rrow]=row[rrow]&mask;
    	col[ccol]=col[ccol]&mask;
    	submat[rrow][ccol]=submat[rrow][ccol]&mask;
    }
}

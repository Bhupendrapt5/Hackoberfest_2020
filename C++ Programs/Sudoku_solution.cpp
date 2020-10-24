#include<iostream>
#include<stdbool.h>
using namespace std;
void printGrid(int grid[9][9]) 
{ 
    for (int row = 0; row < 9; row++) { 
        for (int col = 0; col < 9; col++) 
            cout << grid[row][col] << " "; 
    }
    cout << endl;
} 
bool Find(int s[9][9],int&row,int&col){
    for(row=0;row<9;row++){
        for(col=0;col<9;col++){
            if(s[row][col]==0)
             return true;
             
        }
    }
    return false;
} 
bool isValid(int s[9][9],int row,int col,int num){
    bool valid=true;
    for(int i=0;i<9;i++){
        if(s[row][i]==num)
         valid=false;
    }
    for(int i=0;i<9;i++){
        if(s[i][col]==num)
         valid=false;
    }
    for(int i=0;i<3;i++)
     for(int j=0;j<3;j++){
         if(s[i+row-row%3][j+col-col%3]==num)
          valid=false;
     }
    if(s[row][col]!=0)
     valid=false;
    return valid;
}
bool sudoku(int s[9][9]){
    int row,col;
    if(!Find(s,row,col))
     return true;
    for(int i=1;i<=9;i++){
        if(isValid(s,row,col,i)){
            s[row][col]=i;
            if(sudoku(s)==true)
             return true;
            s[row][col]=0;
        }
    }
    return false;
}
int main()
 {
	int t;
	cin >> t;
	while(t--){
	    int s[9][9]={0};
	    for(int i=0;i<9;i++){
	        for(int j=0;j<9;j++)
	         cin >> s[i][j];
	    }
	    if(sudoku(s)==true)
	     printGrid(s);
	    else 
	     cout << -1 << endl;
	}
	return 0;
}

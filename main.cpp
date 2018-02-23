/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: lVl4rl2LoN
 *
 * Created on February 22, 2018, 9:57 AM
 */

/*example:
if user input the no. of rows =5 
then output should be 


 1   2    3    4     5  
16   17   18   19    6
15   24   25   20    7
14   23   22   21    8
13   12   11   10    9

*/



#include <iostream>
using namespace std;

//this function uses the integer input from the user as the parameter
//to create a 2D square array. The indexes are filled with numbers from
//1 to the square of the integer in numeric order.
void printRegularSquare(int square){
    
    //declare and initialize the 2D square with 0 as the elements at each
    //index.
    int TwoDarray[square][square] = {0};
    int num = 1;
    for(int i = 0; i < square; i++){
        for(int j = 0;j<square;j++){
            TwoDarray[i][j] = num++;
        }
    }
    
    //print the array
    
    for(int i = 0; i < square; i++){
        for(int j = 0;j<square;j++){
            cout<<TwoDarray[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    
}


//rows is the total number of rows in the 2D array
    //columns is the total number of columns in the 2D array
    //rI is the variable used to keep track of the current row
    //cI is the variable used to keep track of the current column
    //num is the number that is put into each index. It increments by 1
    //until the square of the number the user had entered is reached.
void printSpiral2DArray(int square){
   int rows = square, columns = square, rI=0,cI=0, num3 = 1;
    int twoDarray3 [rows][columns] = {0};
    
    //since the 2D array is the square of the number, the max number of the 
    //array will be the number squared.
    // while(rI<=rows && cI<=columns) also works as a loop condition.
    while(num3<=(square*square)){
            //row right movement
        for(int i=cI; i <columns;i++){
            twoDarray3[rI][i] = num3++;
        }
        rI++; //increment the row counter to peel away the outer row and move 
        //into the inner row

        // column down movement
        for(int i=rI; i <rows;i++){
            twoDarray3[i][columns-1] = num3++;
        }
        columns--;//decrement the total column to peel the outer column
        //and move on to the inner column

        // row left movement 
        for(int i=columns-1; i >= cI;i--){
            twoDarray3[rows-1][i] = num3++;
        }
        rows--;//decrement the total row to peel away the outer row
        //and move into the inner row.

        //first column up movement;
        for(int i=rows-1; i >=rI;i--){
            twoDarray3[i][cI] = num3++;
        }
        cI++;//increment the column counter to move into the next inner column
    } 
    
    //print the array
    for(int i = 0; i < square; i++){
        for(int j = 0;j<square;j++){
            cout<<twoDarray3[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main() {
    int num = 0, num2 = 1;
    cout<<"enter a number: ";
    cin>>num;
    cout<<num<<endl;
    
    printRegularSquare(num);
    
    
    cout<<"--------------------------"<<endl;
    cout<<"Square 2D array in spiral form.\n";
    cout<<"--------------------------"<<endl;
    printSpiral2DArray(num);
    
   
    
    
    
    
    
    
    
    
    //2nd row so row--
    //2nd to last column so column--
    //2nd to last row
    
    
    
	return 0;
}


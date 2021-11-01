#include "Hac0078HW4func.h"

void intro(){
    cout << "****************************************************************" << endl;
    cout << "             Computer Science and Engineering                   " << endl;
    cout << "              CSCE 1030 - Computer Science 1                    " << endl;
    cout << "Haskell Cappers   --   hac0078    --  haskellcappers@my.unt.edu " << endl;
    cout << "****************************************************************" << endl;
    cout << endl;
}

void initalboard(int **board, int size){
    ifstream in_s; // To let the user choose what file they want for the game board
    char infile[64]; // This is a 1D array for the input file.
    char c; // This is so the fucntion can grab type of grid
    string line, temp;

    cout << "Please enter the filename of the designated board: ";
    cin >> infile;
    in_s.open(infile);

    // This is an error checking prosses for the input file.
    while(in_s.fail()){
        cout << "The file you tired to open failed. Please try again: ";
        cin >> infile;
        in_s.open(infile);
    }

   int row = 0;
    while(getline(in_s, line)){
       int col = 0;
        stringstream ss(line);
        while(getline(ss, temp, ',')){
            board[row][col] = atoi(temp.c_str());
            col++;
        }
        row++;
    }
}

void printboard(int **board, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void firstPass(int **board, int size){

}

void secondPass(int **board, int size){

}

void objectPass(int **board, int size){
    int count = 0;
    for(int row = 0; row < size; row++){
        for(int colms = 0; colms < size; colms++){
        }
    }
}
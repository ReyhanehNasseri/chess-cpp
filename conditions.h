#include<iostream>
#include"pieces.h"
#include<vector>
using namespace std;
Pieces boardpieces[8][8];
char board [8][8];
char color [8][8];

bool iskingcheck(int i , int j){
    bool iskingcheck = false;
    int pos_i_king = i;
    int pos_j_king = j;

    // checking the threat in (+) positions
    i = pos_i_king + 1; 
    while(i<7 && iskingcheck==false){
        
        if(board[i][j]!='0'){
            if(  (color[pos_i_king][pos_j_king]!= color[i][j])  && (board[i][j]=='c' or board[i][j]=='v')){
                iskingcheck = true ; 
                break ;
            }
            
            else{
                break ;
            }
        }
        i++;
    }

    i = pos_i_king -1 ;
     while(i>=0 && iskingcheck==false){
        if(board[i][j]!='0'){
            if(  (color[pos_i_king][pos_j_king]!= color[i][j])  && (board[i][j]=='c' or board[i][j]=='v')){
                iskingcheck = true ; 
                break ;
            }
            
            else{
                break ;
            }
        }
        i--;
    }

    j = pos_j_king + 1; 
    i=pos_i_king;
     while(j<8 && iskingcheck==false){
        if(board[i][j]!='0'){
            if(  (color[pos_i_king][pos_j_king]!= color[i][j])  && (board[i][j]=='c' or board[i][j]=='v')){
                iskingcheck = true ; 
                break ;
            }
            
            else{
                break ;
            }
        }
        j++;
    }

    j=pos_j_king-1;
    while(j>=0 && iskingcheck==false){
        if(board[i][j]!='0'){
            if(  (color[pos_i_king][pos_j_king]!= color[i][j])  && (board[i][j]=='c' or board[i][j]=='v')){
                iskingcheck = true ; 
                break ;
            }
            
            else{
                break ;
            }
        }
        j--;
    }

    // checking the threat in (×) positions
    i=pos_i_king+1;
    j=pos_j_king+1;
    while(j<8 && i<8 && iskingcheck==false){
        if(board[i][j]!='0'){
            if((color[pos_i_king][pos_j_king]!= color[i][j]) && i-pos_i_king==1 && board[i][j]=='s'){
                iskingcheck = true;
                break;
            }
            else if(  (color[pos_i_king][pos_j_king]!= color[i][j])  && (board[i][j]=='e' or board[i][j]=='v')){
                iskingcheck = true ; 
                break ;
            }

            else{
                break ;
            }
        }
        j++;
        i++;
    }

    i=pos_i_king-1;
    j=pos_j_king-1;
    while(j>=0 && i>=0 && iskingcheck==false){
        if(board[i][j]!='0'){
            if((color[pos_i_king][pos_j_king]!= color[i][j]) && pos_i_king-i==1 && board[i][j]=='s'){
                iskingcheck = true;
                break;
            }
            else if(  (color[pos_i_king][pos_j_king]!= color[i][j])  && (board[i][j]=='e' or board[i][j]=='v')){
                iskingcheck = true ; 
                break ;
            }
            
            else{
                break ;
            }
        }
        j--;
        i--;
    }

    i=pos_i_king-1;
    j=pos_j_king+1;
    while(j<8 && i>=0 && iskingcheck==false){
        if(board[i][j]!='0'){
            if((color[pos_i_king][pos_j_king]!= color[i][j]) && j-pos_j_king==1 && board[i][j]=='s'){
                iskingcheck = true;
                break;
            }
            else if(  (color[pos_i_king][pos_j_king]!= color[i][j])  && (board[i][j]=='e' or board[i][j]=='v')){
                iskingcheck = true ; 
                break ;
            }
            
            else{
                break ;
            }
        }
        j++;
        i--;
    }

    i=pos_i_king+1;
    j=pos_j_king-1;
    while(j>=0 && i<8 && iskingcheck==false){
        if(board[i][j]!='0'){
            if((color[pos_i_king][pos_j_king]!= color[i][j])  && (i-pos_i_king==1) && (board[i][j]=='s')){
                iskingcheck = true;
                break;
            }
            else if(  (color[pos_i_king][pos_j_king]!= color[i][j])  && (board[i][j]=='e' or board[i][j]=='v')){
                iskingcheck = true ; 
                break ;
            }
            
            else{
                break ;
            }
        }
        i++;
        j--;
    }
    
    //checking the threat in (L) positions
    i=pos_i_king;
    j=pos_j_king;
    if((iskingcheck==false) && (color[pos_i_king][pos_j_king]!= color[i+1][j+2]) && (board[i+1][j+2]=='h')){
        iskingcheck=true;
    }
    if((iskingcheck==false) && (color[pos_i_king][pos_j_king]!= color[i+2][j+1]) && (board[i+2][j+1]=='h')){
        iskingcheck=true;
    }
    if((iskingcheck==false) && (color[pos_i_king][pos_j_king]!= color[i+2][j-1]) && (board[i+2][j-1]=='h')){
        iskingcheck=true;
    }
    if((iskingcheck==false) && (color[pos_i_king][pos_j_king]!= color[i+1][j-2]) && (board[i+1][j-2]=='h')){
        iskingcheck=true;
    }
    if((iskingcheck==false) && (color[pos_i_king][pos_j_king]!= color[i-1][j-2]) && (board[i-1][j-2]=='h')){
        iskingcheck==true;
    }
    if((iskingcheck==false) && (color[pos_i_king][pos_j_king]!= color[i-2][j-1]) && (board[i-2][j-1]=='h')){
        iskingcheck=true;
    }
    if((iskingcheck==false) && (color[pos_i_king][pos_j_king]!= color[i-2][j+1]) && (board[i-2][j+1]=='h')){
        iskingcheck=true;
    }
    if((iskingcheck==false) && (color[pos_i_king][pos_j_king]!= color[i+1][j+2]) && (board[i-1][j+2]=='h')){
        iskingcheck=true;
    }



return iskingcheck;
}

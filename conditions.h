#include<iostream>
#include"pieces.h"
#include<vector>
#include<algorithm>
using namespace std;
Pieces *boardpieces[8][8];
// char board [8][8];
// char color [8][8];
int pos_i_kingw = 0 ;
int pos_j_kingw = 4;
int pos_i_kingb = 7;
int pos_j_kingb = 4;

bool iskingcheck(int i , int j){

    bool iskingcheck = false;
    int pos_i_king = i;
    int pos_j_king = j;

    // checking the threat in (+) positions
    i = pos_i_king + 1; 
    while(i<7 && iskingcheck==false){
        
        if(board[i][j]!='0'){
            if(  (colors[pos_i_king][pos_j_king]!= colors[i][j])  && (board[i][j]=='c' || board[i][j]=='v')){
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
            if(  (colors[pos_i_king][pos_j_king]!= colors[i][j])  && (board[i][j]=='c' || board[i][j]=='v')){
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
            if(  (colors[pos_i_king][pos_j_king]!= colors[i][j])  && (board[i][j]=='c' || board[i][j]=='v')){
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
            if(  (colors[pos_i_king][pos_j_king]!= colors[i][j])  && (board[i][j]=='c' || board[i][j]=='v')){
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
            if((colors[pos_i_king][pos_j_king]!= colors[i][j]) && i-pos_i_king==1 && board[i][j]=='s'){
                iskingcheck = true;
                break;
            }
            else if(  (colors[pos_i_king][pos_j_king]!= colors[i][j])  && (board[i][j]=='e' || board[i][j]=='v')){
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
            if((colors[pos_i_king][pos_j_king]!= colors[i][j]) && pos_i_king-i==1 && board[i][j]=='s'){
                iskingcheck = true;
                break;
            }
            else if(  (colors[pos_i_king][pos_j_king]!= colors[i][j])  && (board[i][j]=='e' || board[i][j]=='v')){
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
            if((colors[pos_i_king][pos_j_king]!= colors[i][j]) && j-pos_j_king==1 && board[i][j]=='s'){
                iskingcheck = true;
                break;
            }
            else if(  (colors[pos_i_king][pos_j_king]!= colors[i][j])  && (board[i][j]=='e' || board[i][j]=='v')){
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
            if((colors[pos_i_king][pos_j_king]!= colors[i][j])  && (i-pos_i_king==1) && (board[i][j]=='s')){
                iskingcheck = true;
                break;
            }
            else if(  (colors[pos_i_king][pos_j_king]!= colors[i][j])  && (board[i][j]=='e' || board[i][j]=='v')){
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
    if((iskingcheck==false) && (colors[pos_i_king][pos_j_king]!= colors[i+1][j+2]) && (board[i+1][j+2]=='h')){
        iskingcheck=true;
    }
    if((iskingcheck==false) && (colors[pos_i_king][pos_j_king]!= colors[i+2][j+1]) && (board[i+2][j+1]=='h')){
        iskingcheck=true;
    }
    if((iskingcheck==false) && (colors[pos_i_king][pos_j_king]!= colors[i+2][j-1]) && (board[i+2][j-1]=='h')){
        iskingcheck=true;
    }
    if((iskingcheck==false) && (colors[pos_i_king][pos_j_king]!= colors[i+1][j-2]) && (board[i+1][j-2]=='h')){
        iskingcheck=true;
    }
    if((iskingcheck==false) && (colors[pos_i_king][pos_j_king]!= colors[i-1][j-2]) && (board[i-1][j-2]=='h')){
        iskingcheck==true;
    }
    if((iskingcheck==false) && (colors[pos_i_king][pos_j_king]!= colors[i-2][j-1]) && (board[i-2][j-1]=='h')){
        iskingcheck=true;
    }
    if((iskingcheck==false) && (colors[pos_i_king][pos_j_king]!= colors[i-2][j+1]) && (board[i-2][j+1]=='h')){
        iskingcheck=true;
    }
    if((iskingcheck==false) && (colors[pos_i_king][pos_j_king]!= colors[i-1][j+2]) && (board[i-1][j+2]=='h')){
        iskingcheck=true;
    }



return iskingcheck;
}

bool is_origin_valid (int x , int y , char turn){
    if(colors[x][y]== turn ){
        return 1;
    }
    else{
        cout<<"again! (pick a correct place) " <<endl;
        return 0;
    }

}

bool is_destination_valid (int x_origin , int y_origin ,int x_destination , int y_destination ,  char turn){
    int xydestination;
    if(colors[x_destination][y_destination]== turn){
        cout<<"again! you already have a piece there "<<endl;
        return 0;
    }
    xydestination=10*x_destination+y_destination;
    boardpieces[x_origin][y_origin]->allpossiblemoves( x_origin , y_origin , turn);
    if(boardpieces[x_origin][y_origin]->is_the_move_valid(xydestination)){
        colors[x_destination][y_destination]=turn;
        colors[x_origin][y_origin]='0';
        board[x_destination][y_destination]=board[x_origin][y_origin];
        board[x_origin][y_origin]='0';
        if(board[x_destination][y_destination]=='k' && colors[x_destination][y_destination]==turn){
            if(turn=='w'){pos_i_kingw=x_destination ; pos_j_kingw=y_destination;}
            if(turn=='b'){pos_i_kingb=x_destination ; pos_j_kingb=y_destination;}
        }
        if(turn=='w'){
            if(iskingcheck(pos_i_kingw,pos_j_kingw)){
                cout<<"invalid (king is check)"<<endl;
                colors[x_destination][y_destination]='0';
                colors[x_origin][y_origin]=turn;
                board[x_origin][y_origin]=board[x_destination][y_destination];
                board[x_destination][y_destination]='0';
                return 0;
            }

            else{
                boardpieces[x_destination][y_destination]=boardpieces[x_origin][y_origin];
                boardpieces[x_origin][y_origin]=NULL;
                return 1;
            }

        }
        else{
             if(iskingcheck(pos_i_kingb,pos_j_kingb)){
                cout<<"invalid (king is check)"<<endl;
                colors[x_destination][y_destination]='0';
                colors[x_origin][y_origin]=turn;
                board[x_origin][y_origin]=board[x_destination][y_destination];
                board[x_destination][y_destination]='0';
                return 0;
            }
            else{
                boardpieces[x_destination][y_destination]=boardpieces[x_origin][y_origin];
                boardpieces[x_origin][y_origin]=NULL;
                return 1;
            }
            

        }

    }
    else{
        cout<<"not a valid move"<<endl;
        return 0;
    }
    

}



#include<iostream>
using namespace std;
#include"conditions.h"
//define the objects and place them
void settheboard(){

    Castle c1;Castle c2;Horse h1;Horse h2;
    Elephant e1;Elephant e2;Vasir v;King k;
    Castle C1;Castle C2;Horse H1;Horse H2;
    Elephant E1;Elephant E2;Vasir V;King K;
    Pawn p0;Pawn p1;Pawn p2;Pawn p3;Pawn p4;
    Pawn p5;Pawn p6;Pawn p7;Pawn p8;
    Pawn p9;Pawn p10;Pawn p11;Pawn p12;
    Pawn p13;Pawn p14;Pawn p15;
    c1.loc=0;c2.loc=7;h1.loc=1;h2.loc=6;
    e1.loc=2;e2.loc=5;v.loc=3;k.loc=4;
    C1.loc=70;C2.loc=77;H1.loc=71;H2.loc=76;
    E1.loc=72;E2.loc=75;V.loc=73;K.loc=74;
    
    boardpieces[0][0]=&c1;boardpieces[0][7]=&c2;boardpieces[0][1]=&h1;boardpieces[0][6]=&h2;
    boardpieces[0][2]=&e1;boardpieces[0][5]=&e2;boardpieces[0][3]=&v;boardpieces[0][4]=&k;
    boardpieces[7][0]=&C1;boardpieces[7][7]=&C2;boardpieces[7][1]=&H1;boardpieces[7][6]=&H2;
    boardpieces[7][2]=&E1;boardpieces[7][5]=&E2;boardpieces[7][3]=&V;boardpieces[7][4]=&K;
    boardpieces[1][0]=&p0; boardpieces[1][1]=&p1; boardpieces[1][2]=&p2; boardpieces[1][3]=&p3;
    boardpieces[1][0]=&p4; boardpieces[1][0]=&p5; boardpieces[1][0]=&p6; boardpieces[1][0]=&p7;
    boardpieces[6][0]=&p8; boardpieces[6][1]=&p9; boardpieces[6][2]=&p10; boardpieces[6][3]=&p11;
    boardpieces[6][4]=&p12; boardpieces[6][5]=&p13; boardpieces[6][6]=&p14; boardpieces[6][7]=&p15;
   



    //SET THE START BOARD MATRIX
    board[0][0] = 'c'; board[7][0] = 'c';
    board[0][7] = 'c'; board[7][7] = 'c';
    board[0][1] = 'h'; board[7][1] = 'h';
    board[0][6] = 'h'; board[7][6] = 'h';
    board[0][2] = 'e'; board[7][2] = 'e';
    board[0][5] = 'e'; board[7][5] = 'e';
    board[0][3] = 'v'; board[7][3] = 'v';
    board[0][4] = 'k'; board[7][4] = 'k';
    for(int i =  0 ; i <8 ; i++){
        board[1][i]='s';
        board[6][i]='s';
    }

    for(int i = 2 ; i<6 ; i++){
        for(int j = 0 ; j<8 ; j++){
            board[i][j]='0';
        }
    }

    //SET THE START COLOR MATRIX
    for(int i = 0 ; i<8 ; i++){
        colors[6][i]='b';
        colors[7][i]='b';
        colors[0][i]='w';
        colors[1][i]='w';
        
    }
     for(int i = 2 ; i<6 ; i++){
        for(int j = 0 ; j<8 ; j++){
            colors[i][j]='0';
        }
    }
}
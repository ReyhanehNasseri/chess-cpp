#include<iostream>
using namespace std;
#include"conditions.h"
//define the objects and place them
void settheboard(){
    Soldier s0;Soldier s1;Soldier s2;Soldier s3;
    Soldier s4;Soldier s5;Soldier s6;Soldier s7;
    Soldier S0;Soldier S1;Soldier S2;Soldier S3;
    Soldier S4;Soldier S5;Soldier S6;Soldier S7;
    Castle c1;Castle c2;Horse h1;Horse h2;
    Elephant e1;Elephant e2;Vasir v;King k;
    Castle C1;Castle C2;Horse H1;Horse H2;
    Elephant E1;Elephant E2;Vasir V;King K;
    s0.loc=10;s1.loc=11;s2.loc=12;s3.loc=13;
    s4.loc=14;s5.loc=15;s6.loc=16;s7.loc=17;
    S0.loc=60;S1.loc=61;S2.loc=62;S3.loc=63;
    S4.loc=64;S5.loc=65;S6.loc=66;S7.loc=67;
    c1.loc=0;c2.loc=7;h1.loc=1;h2.loc=6;
    e1.loc=2;e2.loc=5;v.loc=3;k.loc=4;
    C1.loc=70;C2.loc=77;H1.loc=71;H2.loc=76;
    E1.loc=72;E2.loc=75;V.loc=73;K.loc=74;
    boardpieces[0][0]=c1;boardpieces[0][7]=c2;boardpieces[0][1]=h1;boardpieces[0][6]=h2;
    boardpieces[0][2]=e1;boardpieces[0][5]=e2;boardpieces[0][3]=v;boardpieces[0][4]=k;
    boardpieces[7][0]=C1;boardpieces[7][7]=C2;boardpieces[7][1]=H1;boardpieces[7][6]=H2;
    boardpieces[7][2]=E1;boardpieces[7][5]=E2;boardpieces[7][3]=V;boardpieces[7][4]=K;
    boardpieces[1][0]=s0;boardpieces[1][1]=s1;boardpieces[1][2]=s2;boardpieces[1][3]=s3;
    boardpieces[1][4]=s4;boardpieces[1][5]=s5;boardpieces[1][6]=s6;boardpieces[1][7]=s7;
    boardpieces[6][0]=S0;boardpieces[6][1]=S1;boardpieces[6][2]=S2;boardpieces[6][3]=S3;
    boardpieces[6][4]=S4;boardpieces[6][5]=S5;boardpieces[6][6]=S6;boardpieces[6][7]=S7;





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
        color[6][i]='b';
        color[7][i]='b';
        color[0][i]='w';
        color[0][i]='w';
        
    }
     for(int i = 2 ; i<6 ; i++){
        for(int j = 0 ; j<8 ; j++){
            color[i][j]='0';
        }
    }
}
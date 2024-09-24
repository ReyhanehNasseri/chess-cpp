#include<iostream>
//#include "pieces.h"
#include "settheboard.h"
using namespace std;

int main(){
    settheboard();
     
    bool condition1 , condition2;

    bool iskingmatte = 0;
    char turn = 'w';
    int origin_locx , origin_locy, destination_locx , destination_locy;
    int origin ;
    int destination;
   
    while(!iskingmatte){

        cout<<"player number "<<turn<<" turn : "<<endl;
        cin>>origin>>destination;
        origin_locx=origin/10;
        origin_locy=origin%10;
        destination_locx=destination/10;
        destination_locy=destination%10;
        condition1=is_origin_valid(origin_locx,origin_locy,turn);
        if(condition1){
        condition2=is_destination_valid(origin_locx,origin_locy,destination_locx,destination_locy,turn);
        if(condition1 && condition2){
           // delete[] boardpieces[destination_locx][destination_locy]->possible_locs;
            
            if(turn=='w'){
                turn='b';
                if(board[origin_locx][origin_locy]=='k'){
                pos_i_kingw=destination_locx;
                pos_j_kingw=destination_locy;
            }
            }
            else{
                turn='w';
                if(board[origin_locx][origin_locy]=='k'){
                pos_i_kingb=destination_locx;
                pos_j_kingb=destination_locy;
            }
            }
        }
        }

    }
}
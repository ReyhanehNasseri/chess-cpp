#include<iostream>
//#include "pieces.h"
#include "settheboard.h"
using namespace std;

int main(){
    settheboard();
     
    bool a;

    bool iskingmatte = 0;
    char turn = 'w';
    int origin_locx , origin_locy, destination_locx , destination_locy;
    int origin ;
    int destination;
    colors[1][3]='0';
    board[1][3]='0';
    while(!iskingmatte){
        cout<<"player number "<<turn<<" turn : "<<endl;
        cin>>origin>>destination;
        origin_locx=origin/10;
        origin_locy=origin%10;
        destination_locx=destination/10;
        destination_locy=destination%10;
        a=is_origin_valid(origin_locx,origin_locy,turn);
        a=is_destination_valid(origin_locx,origin_locy,destination_locx,destination_locy,turn);

    }



   
    return 0;
}
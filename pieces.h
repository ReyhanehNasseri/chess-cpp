#include<iostream>
#include<vector>
//#include"conditions.h"
using namespace std;
char board [8][8];
char colors [8][8];

class Pieces {
    public:
    int loc;
    char color;
    virtual void allpossiblemoves(int locx , int locy , char turn) {

    }
    bool alive = 1 ;
    int possible_locs[28];
    virtual bool is_the_move_valid(int xydestination){
        for(int i = 0 ; i<28 ; i++){
            if(possible_locs[i]==xydestination){
                return 1;
            }

        }
        return 0 ;
    } 
    virtual bool is_king_matte(int locx , int locy){
      //only king need this func 
      return 0; 
    }

};

class Elephant : public Pieces {
   public:
   void allpossiblemoves(int locx , int locy , char turn ){
    
    for(int i = 0 ; i<28 ; i++){
        possible_locs[i]=-1;
    }
    
    int x = locx + 1;
    int y = locy + 1;
    int i = 0;
    while(colors[x][y]=='0'){
        possible_locs[i]=10*x + y;
        x++;
        y++;
        i++;
    }
    if(colors[x][y]!= turn && board[x][y]!='k'){
        possible_locs[i]=10*x+y;
    }

    x=locx-1;
    y=locy-1;
     while(colors[x][y]=='0'){
        possible_locs[i]=10*x + y;
        x--;
        y--;
        i++;
    }
    if(colors[x][y]!= turn && board[x][y]!='k'){
        possible_locs[i]=10*x+y;
    }

    x=locx+1;
    y=locy-1;
     while(colors[x][y]=='0'){
        possible_locs[i]=10*x + y;
        x++;
        y--;
        i++;
    }
    if(colors[x][y]!= turn && board[x][y]!='k'){
        possible_locs[i]=10*x+y;
    }

    x=locx-1;
    y=locy+1;
     while(colors[x][y]=='0'){
        possible_locs[i]=10*x + y;
        x--;
        y++;
        i++;
    }
    if(colors[x][y]!= turn && board[x][y]!='k'){
        possible_locs[i]=10*x+y;
    }

   }

};

class Horse : public Pieces {
    public:
    
    int i = 0;
    void allpossiblemoves (int locx , int locy , char turn){

        for(int i = 0 ; i<28 ; i++){
        possible_locs[i]=-1;
    }
        if(colors[locx+2][locy+1]!=turn && board[locx+2][locy+1]!='k'){possible_locs[i]=(locx+2)*10 + (locy+1); i++;}
        if(colors[locx-2][locy+1]!=turn && board[locx-2][locy+1]!='k'){possible_locs[i]=(locx-2)*10 + (locy+1); i++;}
        if(colors[locx+2][locy-1]!=turn && board[locx+2][locy-1]!='k'){possible_locs[i]=(locx+2)*10 + (locy-1); i++;}
        if(colors[locx-2][locy-1]!=turn && board[locx-2][locy-1]!='k'){possible_locs[i]=(locx-2)*10 + (locy-1); i++;}
        if(colors[locx+1][locy+2]!=turn && board[locx+1][locy+2]!='k'){possible_locs[i]=(locx+1)*10 + (locy+2); i++;}
        if(colors[locx+1][locy-2]!=turn && board[locx+1][locy-2]!='k'){possible_locs[i]=(locx+1)*10 + (locy-2); i++;}
        if(colors[locx-1][locy+2]!=turn && board[locx-1][locy+2]!='k'){possible_locs[i]=(locx-1)*10 + (locy+2); i++;}
        if(colors[locx-1][locy-2]!=turn && board[locx-1][locy-2]!='k'){possible_locs[i]=(locx-1)*10 + (locy-2); i++;}
        for(int i = 0 ; i<28 ; i++){
            cout<<possible_locs[i]<<" ";
        }
        cout<<endl;
    }
    
    

};


class Vasir : public Pieces {
    public:
    void allpossiblemoves(int locx , int locy , char turn){
        for(int i = 0 ; i<28 ; i++){
        possible_locs[i]=-1;
        cout<<"jj";
        }

    int x = locx + 1;
    int y = locy + 1;
    int i = 0;
    while(colors[x][y]=='0'){
        possible_locs[i]=10*x + y;
        x++;
        y++;
        i++;
    }
    if(colors[x][y]!= turn && board[x][y]!='k'){
        possible_locs[i]=10*x+y;
    }

    x=locx-1;
    y=locy-1;
     while(colors[x][y]=='0'){
        possible_locs[i]=10*x + y;
        x--;
        y--;
        i++;
    }
    if(colors[x][y]!= turn && board[x][y]!='k'){
        possible_locs[i]=10*x+y;
    }

    x=locx+1;
    y=locy-1;
     while(colors[x][y]=='0'){
        possible_locs[i]=10*x + y;
        x++;
        y--;
        i++;
    }
    if(colors[x][y]!= turn && board[x][y]!='k'){
        possible_locs[i]=10*x+y;
    }

    x=locx-1;
    y=locy+1;
     while(colors[x][y]=='0'){
        possible_locs[i]=10*x + y;
        x--;
        y++;
        i++;
    }
    if(colors[x][y]!= turn && board[x][y]!='k'){
        possible_locs[i]=10*x+y;
    }

    x=locx+1;
    y=locy;
     while(colors[x][y]=='0'){
        possible_locs[i]=10*x + y;
        x++;
        i++;
    }
    if(colors[x][y]!= turn && board[x][y]!='k'){
        possible_locs[i]=10*x+y;
    }

    x=locx-1;
    y=locy;
     while(colors[x][y]=='0'){
        possible_locs[i]=10*x + y;
        x--;
        i++;
    }
    if(colors[x][y]!= turn && board[x][y]!='k'){
        possible_locs[i]=10*x+y;
    }

    x=locx;
    y=locy+1;
     while(colors[x][y]=='0'){
        possible_locs[i]=10*x + y;
        y++;
        i++;
    }
    if(colors[x][y]!= turn && board[x][y]!='k'){
        possible_locs[i]=10*x+y;
    }

    x=locx;
    y=locy-1;
     while(colors[x][y]=='0'){
        possible_locs[i]=10*x + y;
        y--;
        i++;
    }
    if(colors[x][y]!= turn && board[x][y]!='k'){
        possible_locs[i]=10*x+y;
    }
    
        
        // for(int i = 0 ; i<28 ; i++){
        //     cout<<possible_locs[i]<<" ";
        // }
        // cout<<endl;

    }  

};

class King : public Pieces {
    public:
    void allpossiblemoves(int locx , int locy , char turn){
        for(int i = 0 ; i<28 ; i++){
        possible_locs[i]=-1;
        }
        int i = 0;
        if(colors[locx+1][locy]!=turn && board[locx+1][locy]!='k' ){possible_locs[i]=(locx+1)*10 + (locy); i++;}
        if(colors[locx+1][locy+1]!=turn && board[locx+1][locy+1]!='k'){possible_locs[i]=(locx+1)*10 + (locy+1); i++;}
        if(colors[locx+1][locy-1]!=turn && board[locx+1][locy-1]!='k'){possible_locs[i]=(locx+1)*10 + (locy-1); i++;}
        if(colors[locx][locy-1]!=turn && board[locx][locy-1]!='k'){possible_locs[i]=(locx)*10 + (locy-1); i++;}
        if(colors[locx-1][locy+1]!=turn && board[locx-1][locy+1]!='k'){possible_locs[i]=(locx-1)*10 + (locy+1); i++;}
        if(colors[locx-1][locy-1]!=turn && board[locx-1][locy-1]!='k'){possible_locs[i]=(locx-1)*10 + (locy-1); i++;}
        if(colors[locx][locy+1]!=turn && board[locx][locy+1]!='k'){possible_locs[i]=(locx)*10 + (locy+1); i++;}
        if(colors[locx-1][locy]!=turn && board[locx-1][locy]!='k'){possible_locs[i]=(locx-1)*10 + (locy); i++;}
        
        // for(int i = 0 ; i<28 ; i++){
        //     cout<<possible_locs[i]<<" ";
        // }
        // cout<<endl;
        
    }
    bool is_king_matte (int locx , int locy){
        for(int i = 0 ; i<28 ; i++){
            if(0<=(possible_locs[i]/10) && 7>=(possible_locs[i]/10) && 0<=(possible_locs[i]%10) && 7>=(possible_locs[i]%10) && 0<(possible_locs[i]))
            {
                return 0;
            }
        }
        return 1;
    }
    
    

};

class Castle : public Pieces {
    public:
    void allpossiblemoves(int locx , int locy , char turn){
        for(int i = 0 ; i<28 ; i++){
        possible_locs[i]=-1;
        }
        int i =0;
        int x=locx+1;
        int y=locy;
         while(colors[x][y]=='0'){
            possible_locs[i]=10*x + y;
            x++;
            i++;
        }
        if(colors[x][y]!= turn && board[x][y]!='k'){
            possible_locs[i]=10*x+y;
        }

        x=locx-1;
        y=locy;
         while(colors[x][y]=='0'){
            possible_locs[i]=10*x + y;
            x--;
            i++;
        }
        if(colors[x][y]!= turn && board[x][y]!='k'){
            possible_locs[i]=10*x+y;
        }

        x=locx;
        y=locy+1;
         while(colors[x][y]=='0'){
            possible_locs[i]=10*x + y;
            y++;
            i++;
        }
        if(colors[x][y]!= turn && board[x][y]!='k'){
            possible_locs[i]=10*x+y;
        }

        x=locx;
        y=locy-1;
         while(colors[x][y]=='0'){
            possible_locs[i]=10*x + y;
            y--;
            i++;
        }
        if(colors[x][y]!= turn && board[x][y]!='k'){
            possible_locs[i]=10*x+y;
        }


            // for(int i = 0 ; i<28 ; i++){
            //     cout<<possible_locs[i]<<" ";
            // }
            // cout<<endl;

    }  


};
class Pawn : public Pieces {
    public:
    bool first_turn = 1;
    void allpossiblemoves(int locx , int locy , char turn){
        for(int i = 0 ; i<28 ; i++){
        possible_locs[i]=-1;
        }
        int i = 0;
        if(colors[locx][locy]=='w'){
            if(colors[locx+1][locy+1]=='b'&& board[locx+1][locy+1]!='k'){possible_locs[i]=(locx+1)*10 + (locy + 1) ; i++;}
            if(colors[locx+1][locy-1]=='b'&& board[locx+1][locy-1]!='k'){possible_locs[i]=(locx+1)*10 + (locy - 1) ; i++;}
            if(board[locx+1][locy]=='0'){possible_locs[i]=(locx+1)*10 + (locy) ; i++;}
            if(board[locx+2][locy]=='0'&& first_turn){possible_locs[i]=(locx+2)*10 + (locy) ; i++;}
        }
        else if(colors[locx][locy]=='b'){
            if(colors[locx-1][locy-1]=='w'&& board[locx-1][locy-1]!='k'){possible_locs[i]=(locx-1)*10 + (locy - 1) ; i++;}
            if(colors[locx-1][locy+1]=='w'&& board[locx-1][locy+1]!='k'){possible_locs[i]=(locx-1)*10 + (locy + 1) ; i++;}
            if(board[locx-1][locy]=='0'){possible_locs[i]=(locx-1)*10 + (locy) ; i++;}
            if(board[locx-2][locy]=='0'&& first_turn){possible_locs[i]=(locx-2)*10 + (locy) ; i++;}
        }
        first_turn=0;
        // for(int i = 0 ; i<28 ; i++){
        //     cout<<possible_locs[i]<<" ";
        // }
        // cout<<endl;
    }

};


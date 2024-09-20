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
    void move(int locx , int locy);
    virtual void allpossiblemoves(int x , int y , char turn) {
        //cout<<"hi";

    }
    bool alive = 1 ;
    int possible_locs[28];
    bool is_the_move_valid(int xydestination){
        for(int i = 0 ; i<sizeof(possible_locs) ; i++){
            //cout<<possible_locs[i]<<endl;
            if(possible_locs[i]==xydestination){
                return 1;
            }

        }
        return 0 ;
    }

};

class Elephant : public Pieces {
   public:
   void allpossiblemoves(int x , int y , char turn ){
    cout<<"hi";
    x++;
    y++;
    int i = 0;
    while(colors[x][y]=='0'){
        possible_locs[i]=10*x + y;
        x++;
        y++;
        i++;
        cout<<possible_locs[i]<<endl;
    }
    if(colors[x][y]!= turn){
        possible_locs[i]=10*x+y;
    }

   }

};

class Horse : public Pieces {
    
    

};

class Soldier : public Pieces {
    
    

};

class Vasir : public Pieces {
    
    

};

class King : public Pieces {
    
    

};

class Castle : public Pieces {
    
    

};


#include "tablero.h"

void mesa::dibujar_tablero(char **rr) {

    //Llenar matriz con posiciones de fichas

    cout<<"   | 1 | 2 | 3 | 4 | 5 |"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<" 1 | "<<rr[0][0]<<" | "<<rr[0][1]<<" | "<<rr[0][2]<<" | "<<rr[0][3]<<" | "<<rr[0][4]<<" |"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<" 2 | "<<rr[1][0]<<" | "<<rr[1][1]<<" | "<<rr[1][2]<<" | "<<rr[1][3]<<" | "<<rr[1][4]<<" |"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<" 3 | "<<rr[2][0]<<" | "<<rr[2][1]<<" | "<<rr[2][2]<<" | "<<rr[2][3]<<" | "<<rr[2][4]<<" |"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<" 4 | "<<rr[3][0]<<" | "<<rr[3][1]<<" | "<<rr[3][2]<<" | "<<rr[3][3]<<" | "<<rr[3][4]<<" |"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<" 5 | "<<rr[4][0]<<" | "<<rr[4][1]<<" | "<<rr[4][2]<<" | "<<rr[4][3]<<" | "<<rr[4][4]<<" |"<<endl;
}
//
// Created by rsof on 02/04/19.
//

#include "tubes.h"

void create_list(list &S){
    firstto(S) = NULL;



}
address alokasi(player X){
    address p = new element;
    infoto(p).name = X.name;
    infoto(p).posisi = X.posisi;
    infoto(p).no_punggung = X.no_punggung;
    infoto(p).klub = X.klub;
    nextto(p) = NULL;

    return p;

}
void insert_first(list &S, address P){
    nextto(P) = firstto(S);
    firstto(S) = P;
    P = NULL;


}
void view(list S){
    if(firstto(S) != NULL){
        address p = firstto(S);
        while (p != NULL){
            cout << "PLayer Name: " << infoto(p).name << endl;
            cout << "Player Position: " << infoto(p).posisi << endl;
            p = nextto(p);
        }
    }

}
void dealokasi(address P){

}
void delete_first(list &S){

}
void insert_last(list &S, address P){

}
void delete_last(list &S){

}
void insert_after(list &S, address P, int R){

}
void delete_after(list &S, int R){

}
address search(list S,string name){

}
void update(address P,string name){

}
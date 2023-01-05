#include "csll.h"

void createlist_1301210526(List &L){
    first(L) = nil;
}

void createElm_1301210526(infotype lagubaru, adr &P){
    P = new elmlist;
    info(P) = lagubaru;
    next(P) = nil;
}

void insertLast_1301210526(List &L, adr P){
    if(first(L) == nil){
        first(L) = P;
        next(P) = first(L);
    }else{
        adr q = first(L);
        while(next(q)!=first(L)){
            q = next(q);
        }
        next(q) = P;
        next(P) = first(L);
    }
}

void deletefirst_1301210526(List &L, adr &P){
    if(first(L)==nil){
        cout<<"List Kosong"<<endl;
    }else{
        adr q = first(L);
        while(next(q)!=first(L)){
            q = next(q);
        }
        P = first(L);
        first(L) = next(first(L));
        next(q) = first(L);
        next(P) = nil;
    }
}

void show_1301210526(List &L){
    adr P = first(L);
    int i = 1;
    if(first(L) == nil){
        cout<<"List Kosong"<<endl;
    }else{
        while(next(P)!=first(L)){
            cout<<i<<".\tArtis:\t"<<info(P).artis<<"\n\tJudul:\t"<<info(P).judul<<"\n\tGenre:\t"<<
            info(P).genre<<"\n\tPlay:\t"<<info(P).playtime<<endl<<endl;
            P = next(P);
            i++;
        }
        cout<<i<<".\tArtis:\t"<<info(P).artis<<"\n\tJudul:\t"<<info(P).judul<<"\n\tGenre:\t"<<
        info(P).genre<<"\n\tPlay:\t"<<info(P).playtime<<endl;
    }
    cout<<endl;
}

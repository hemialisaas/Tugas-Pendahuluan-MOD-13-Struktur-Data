#include <iostream>
#include "csll.h"

using namespace std;

int main()
{
    List L;
    adr P;
    infotype lagubaru;

    createlist_1301210526(L);

    lagubaru.artis = "Ella Fitzgerald";
    lagubaru.judul = "Summertime";
    lagubaru.genre = "Jazz";
    lagubaru.playtime = 182;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    lagubaru.artis = "Iwan Fals";
    lagubaru.judul = "Pesawat Tempur";
    lagubaru.genre = "Rock";
    lagubaru.playtime = 144;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    lagubaru.artis = "Coldplay";
    lagubaru.judul = "Up & Up";
    lagubaru.genre = "POP";
    lagubaru.playtime = 200;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    lagubaru.artis = "Cigarette after sx";
    lagubaru.judul = "Sweet";
    lagubaru.genre = "Indie";
    lagubaru.playtime = 235;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    lagubaru.artis = "Masdo";
    lagubaru.judul = "Janji Manis";
    lagubaru.genre = "POP";
    lagubaru.playtime = 123;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    lagubaru.artis = "A7x";
    lagubaru.judul = "Dear God";
    lagubaru.genre = "Rock";
    lagubaru.playtime = 366;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    lagubaru.artis = "Lyodra Ginting";
    lagubaru.judul = "Pesan Terakhir";
    lagubaru.genre = "POP";
    lagubaru.playtime = 88;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    lagubaru.artis = "Andra and the Backbone";
    lagubaru.judul = "Surrender";
    lagubaru.genre = "Rock";
    lagubaru.playtime = 99;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    lagubaru.artis = "Raisa";
    lagubaru.judul = "Could It Be";
    lagubaru.genre = "Jazz";
    lagubaru.playtime = 112;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    lagubaru.artis = "Glenn Fredly";
    lagubaru.judul = "Kasih Putih";
    lagubaru.genre = "R&B";
    lagubaru.playtime = 103;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    lagubaru.artis = "Siti Badriah";
    lagubaru.judul = "Lagi Syantik";
    lagubaru.genre = "Dangdut";
    lagubaru.playtime = 279;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    lagubaru.artis = "Nadin Amizah";
    lagubaru.judul = "Bertaut";
    lagubaru.genre = "POP";
    lagubaru.playtime = 189;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    lagubaru.artis = "J-Rocks";
    lagubaru.judul = "Fallin' In Love";
    lagubaru.genre = "Rock";
    lagubaru.playtime = 167;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    lagubaru.artis = "Alicia Keys";
    lagubaru.judul = "If I Ain't Got You";
    lagubaru.genre = "R&B";
    lagubaru.playtime = 155;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    lagubaru.artis = "Queen";
    lagubaru.judul = "Bohemian Rhapsody";
    lagubaru.genre = "Rock";
    lagubaru.playtime = 134;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    lagubaru.artis = "Tulus";
    lagubaru.judul = "Sepatu";
    lagubaru.genre = "Jazz";
    lagubaru.playtime = 187;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    lagubaru.artis = "Yura Yunita";
    lagubaru.judul = "Tenang";
    lagubaru.genre = "POP";
    lagubaru.playtime = 98;
    createElm_1301210526(lagubaru,P);
    insertLast_1301210526(L,P);

    cout<<"====================================="<<endl;
    cout<<"===========   List Awal   ==========="<<endl;
    cout<<"====================================="<<endl;
    show_1301210526(L);

    cout<<"====================================="<<endl;
    cout<<"===== List Setelah Delete First ====="<<endl;
    cout<<"====================================="<<endl;
    deletefirst_1301210526(L, P);
    show_1301210526(L);
}





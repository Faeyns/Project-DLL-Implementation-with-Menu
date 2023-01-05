#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) ((L).first)
#define last(L) ((L).last)
#define next(P) (P)->next
#define prev(P) (P)->prev
#define info(P) (P)->info
#define nil NULL

typedef struct alatElektronik infotype;

struct alatElektronik {
    int ID_faktur;
    string brandProduk;
    string categoryProduk;
    string namaProduk;
    int hargaProduk;
};

typedef struct elmList *adr;

struct elmList{
    infotype info;
    adr next;
    adr prev;
};

struct List{
    adr first;
    adr last;
};

void createList_1301213188(List &L);
adr createNewElement_1301213188(infotype info);
infotype createNewInfo_1301213188(int ID_faktur, string brandProduk,
    string categoryProduk, string namaProduk, int hargaProduk);
void insertFirst_1301213188(List &L, adr p);
void showAllData_1301213188(List L);
int selectMenu_1301213188();
void tampilDataKe5_1301213188(List L);

/*
NIM = 1301213188, No ke-9 adalah 8
*/

#endif // DLL_H_INCLUDED

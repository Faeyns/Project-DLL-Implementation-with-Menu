#include "DLL.h"

void createList_1301213188(List &L){
    first(L) = nil;
    last(L) = nil;
}

adr createNewElement_1301213188(infotype info){
    adr p = new elmList;
    info(p) = info;
    next(p) = nil;
    prev(p) = nil;
    return p;
}

infotype createNewInfo_1301213188(int ID_faktur, string brandProduk,
string categoryProduk, string namaProduk, int hargaProduk){
    infotype info;
    info.ID_faktur = ID_faktur;
    info.brandProduk = brandProduk;
    info.categoryProduk = categoryProduk;
    info.namaProduk = namaProduk;
    info.hargaProduk = hargaProduk;
    return info;
}

void insertFirst_1301213188(List &L, adr p){
    if(first(L) == nil && last(L) == nil){
        first(L) = p;
        last(L) = p;
    }else{
        next(p) = first(L);
        prev(first(L)) = p;
        first(L) = p;
    }
}

void showAllData_1301213188(List L){
    adr p = first(L);
    if(p == nil){
        cout << "List kosong!" << endl;
    }else{
        while(p != nil){
            cout << endl;
            cout << "ID_faktur: " << info(p).ID_faktur << endl;
            cout << "Brand Produk Elektronik: " << info(p).brandProduk << endl;
            cout << "Category Produk " << info(p).brandProduk << ": " << info(p).categoryProduk << endl;
            cout << "Nama Produk " << info(p).categoryProduk << ": " << info(p).namaProduk << endl;
            cout << "Harga Produk " << info(p).namaProduk << ": " << info(p).hargaProduk << endl;
            p = next(p);
        }
    }
}

int selectMenu_1301213188(){
    cout << "=========== MENU ===========" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Fungsi tampil data ke-5" << endl;
    cout << "0. Exit" << endl;
    cout << endl;
    cout << "Masukkan menu: ";

    int input = 0;
    cin >> input;

    return input;
}

void tampilDataKe5_1301213188(List L){
    adr jumlah = first(L);
    int n = 0;
    if(jumlah != nil){
        while(jumlah != nil){
            n++;
            jumlah = next(jumlah);
        }
    }
    if(n == 0){
        cout << "Tidak ada data" << endl;
        cout << endl;
    }else if(n > 0 && n < 5){
        cout << "Data tidak ditemukan" << endl;
        cout << endl;
    }else{
        adr p = first(L);
        for(int i = 1; i < 5; i++){
            p = next(p);
        }
        cout << "ID_faktur: " << info(p).ID_faktur << endl;
        cout << "Brand Produk Elektronik: " << info(p).brandProduk << endl;
        cout << "Category Produk " << info(p).brandProduk << ": " << info(p).categoryProduk << endl;
        cout << "Nama Produk " << info(p).categoryProduk << ": " << info(p).namaProduk << endl;
        cout << "Harga Produk " << info(p).namaProduk << ": " << info(p).hargaProduk << endl;
        cout << endl;
    }
}

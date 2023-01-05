#include "DLL.h"

int main()
{
    List L;

    createList_1301213188(L);

    int pilihan = 0;
    bool exit = false;
    string status;

    pilihan = selectMenu_1301213188();
    while (pilihan != 0){
        switch (pilihan){
        case 1:{
            cout << "Jumlah data yang akan ditambahkan: ";
            int jum = 0;
            int i = 0;
            cin >> jum;
            cout << endl;
            while (i < jum){
                int ID_faktur;
                string brand_Produk;
                string category_Produk;
                string nama_Produk;
                int harga_Produk;

                cout << "Masukkan ID_faktur: ";
                cin >> ID_faktur;
                cout << "Masukkan Brand Produk Elektronik: ";
                cin >> brand_Produk;
                cout << "Masukkan Category Produk " << brand_Produk << ": ";
                cin >> category_Produk;
                cout << "Nama Produk " << category_Produk << ": ";
                cin >> nama_Produk;
                cout << "Harga Produk " << nama_Produk << ": ";
                cin >> harga_Produk;
                cout << endl;

                infotype info = createNewInfo_1301213188(ID_faktur,
                    brand_Produk, category_Produk, nama_Produk, harga_Produk);
                adr p = createNewElement_1301213188(info);
                insertFirst_1301213188(L, p);
                i++;
            }
            }break;
        case 2:{
            cout << "Tampilan Semua Data" << endl;
            showAllData_1301213188(L);
            cout << endl;
            }break;
        case 3:{
            cout << "Tampilan Data ke-5" << endl;
            cout << endl;
            tampilDataKe5_1301213188(L);
            }break;
        }
            cout << "Kembali ke menu utama?(Y/N):";
            cin >> status;
            cout << endl;
            if (status == "Y"){
                exit = false;
            } else if (status == "N"){
                exit = true;
            } else {
                cout << "Input yang diterima hanya Y/N!" << endl;
                exit = true;
            }
        if (exit == false){
            pilihan = selectMenu_1301213188();
        } else {
            cout << "ANDA TELAH DIKELUARKAN DARI PROGRAM" << endl;
            return 0;
        }
    }
    cout << endl;
    cout << "ANDA TELAH DIKELUARKAN DARI PROGRAM" << endl;
}

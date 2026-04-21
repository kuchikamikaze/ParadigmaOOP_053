#include <iostream>
using namespace std;

class barang{
    public:
        string nama_barang;
        int jumlah;
        string kategory;
        string tanggalProduksi;
        void printData (){
            cout << "Nama Barang =" << nama_barang << endl;
            cout << "Jumlah =" << jumlah << endl;
            cout << "Kategory =" << kategory << endl;
            cout << "Tanggal Produksi =" << tanggalProduksi << endl;
        };
};

int main (){
    barang elektronik;

    elektronik.nama_barang = "Laptop";
    elektronik.jumlah = 5;
    elektronik.kategory = "Elektronik";
    elektronik.tanggalProduksi = "30 Juli 2020";

    cout << endl;
    elektronik.printData();

    barang nonElektronik;
    nonElektronik.nama_barang = "Botol Minum";
    nonElektronik.jumlah = 7;
    nonElektronik.kategory = "Non elektronik";
    nonElektronik.tanggalProduksi = "19 mei 2024";

    nonElektronik.printData();
}

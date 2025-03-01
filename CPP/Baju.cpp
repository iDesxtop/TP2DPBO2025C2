#include <iostream>
#include <string>
#include "Aksesoris.cpp"

using namespace std;

class Baju: public Aksesoris
{
private:
    string untuk, size, merk;
public:
    Baju(){
        this->untuk = "";
        this->size = "";
        this->merk= "";
    };
    Baju(string id, string nama, int stok, string jenis, string bahan, string warna, int harga, string untuk, string size, string merk){
        set_id(id);
        set_nama(nama);
        set_stok(stok);
        set_jenis(jenis);
        set_bahan(bahan);
        set_warna(warna);
        set_harga(harga);
        this->untuk = untuk;
        this->size = size;
        this->merk = merk;

    }

    void set_untuk(string untuk){
        this->untuk = untuk;
    }
    void set_size(string size){
        this->size = size;
    }
    void set_merk(string merk){
        this->merk = merk;
    }

    string get_untuk(){
        return this->untuk;
    }
    string get_size(){
        return this->size;
    }
    string get_merk(){
        return this->merk;
    }

    int get_luntuk(){
        int panjang = this->untuk.length();
        return panjang;
    }
    int get_lsize(){
        int panjang = this->size.length();
        return panjang;
    }
    int get_lmerk(){
        int panjang = this->merk.length();
        return panjang;
    }


    ~Baju(){
    };
};

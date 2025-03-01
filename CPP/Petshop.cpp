#include <iostream>
#include <string>

using namespace std;

class Petshop
{
private:
    string id, nama;
    int stok, harga;
public:
    Petshop(){
        this->id = "";
        this->nama = "";
        this->stok = 0;
        this->harga = 0;
    };
    Petshop(string id, string nama, int stok, int harga){
        this->id = id;
        this->nama = nama;
        this->stok = stok;
        this->harga = harga;
    }

    void set_id(string id){
        this->id = id;
    }
    void set_nama(string nama){
        this->nama = nama;
    }
    void set_stok(int stok){
        this->stok = stok;
    }
    void set_harga(int harga){
        this->harga = harga;
    }

    string get_id(){
        return this->id;
    }
    string get_nama(){
        return this->nama;
    }
    int get_stok(){
        return this->stok;
    }
    int get_harga(){
        return this->harga;
    }

    int get_lid(){
        int panjang = this->id.length();
        return panjang;
    }
    int get_lnama(){
        int panjang = this->nama.length();
        return panjang;
    }
    int get_lstok(){
        int panjang = to_string(this->stok).length();
        return panjang;
    }
    int get_lharga(){
        int panjang = to_string(this->harga).length();
        return panjang;
    }

    ~Petshop(){
    };
};

#include <iostream>
#include <string>
#include "Petshop.cpp"

using namespace std;

class Aksesoris: public Petshop
{
private:
    string jenis, bahan, warna;
public:
    Aksesoris(){
        this->jenis = "";
        this->bahan = "";
        this->warna= "";
    };
    Aksesoris(string jenis, string bahan, string warna){
        this->jenis = jenis;
        this->bahan = bahan;
        this->warna = warna;
    }

    void set_jenis(string jenis){
        this->jenis = jenis;
    }
    void set_bahan(string bahan){
        this->bahan = bahan;
    }
    void set_warna(string warna){
        this->warna = warna;
    }

    string get_jenis(){
        return this->jenis;
    }
    string get_bahan(){
        return this->bahan;
    }
    string get_warna(){
        return this->warna;
    }

    int get_ljenis(){
        int panjang = this->jenis.length();
        return panjang;
    }
    int get_lbahan(){
        int panjang = this->bahan.length();
        return panjang;
    }
    int get_lwarna(){
        int panjang = this->warna.length();
        return panjang;
    }


    ~Aksesoris(){
    };
};

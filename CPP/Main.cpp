#pragma once
#include <bits/stdc++.h>
#include "Baju.cpp"

using namespace std;

int checkAvailability(list<Baju> llist, string id){
    int available = 1;
    if(llist.empty()){
        
    }else{
        list<Baju>::iterator it = llist.begin();
        while(it != llist.end() && available == 1){
            if(it->get_id() == id){
                available = 0;
            }else{
                it++;
            }
        }
    }
    return available;
}

void initializeTerpanjang(int terpanjang[]){
    terpanjang[0] = 2;
    terpanjang[1] = 9;
    terpanjang[2] = 4;
    terpanjang[3] = 5;
    terpanjang[4] = 5;
    terpanjang[5] = 5;
    terpanjang[6] = 5;
    terpanjang[7] = 5;
    terpanjang[8] = 4;
    terpanjang[9] = 4;
}

void cariTerpanjang(int terpanjang[], Baju data){
    if(terpanjang[0] < data.get_lid()){
        terpanjang[0] = data.get_lid();
    }
    if(terpanjang[1] < data.get_lnama()){
        terpanjang[1] = data.get_lnama();
    }
    if(terpanjang[2] < data.get_lstok()){
        terpanjang[2] = data.get_lstok();
    }
    if(terpanjang[3] < data.get_lharga()){
        terpanjang[3] = data.get_lharga();
    }
    
    if(terpanjang[4] < data.get_ljenis()){
        terpanjang[4] = data.get_ljenis();
    }
    if(terpanjang[5] < data.get_lbahan()){
        terpanjang[5] = data.get_lbahan();
    }
    if(terpanjang[6] < data.get_lwarna()){
        terpanjang[6] = data.get_lwarna();
    }
    
    if(terpanjang[7] < data.get_luntuk()){
        terpanjang[7] = data.get_luntuk();
    }
    if(terpanjang[8] < data.get_lsize()){
        terpanjang[8] = data.get_lsize();
    }
    if(terpanjang[9] < data.get_lmerk()){
        terpanjang[9] = data.get_lmerk();
    }
}

void printTabel(int terpanjang[], list<Baju> llist){
    int space = 0;
    // Column headers
    cout << "|";
    for(space = 0; space < (terpanjang[0] - 2) / 2; space++){
        cout << " ";
    }
    cout << "ID";
    for(space = 0; space < (terpanjang[0] - 2) - ((terpanjang[0] - 2) / 2); space++){
        cout << " ";
    }
    
    cout << "|";
    for(space = 0; space < (terpanjang[1] - 9) / 2; space++){
        cout << " ";
    }
    cout << "Nama Baju";
    for(space = 0; space < (terpanjang[1] - 9) - ((terpanjang[1] - 9) / 2); space++){
        cout << " ";
    }
    
    cout << "|";
    for(space = 0; space < (terpanjang[2] - 4) / 2; space++){
        cout << " ";
    }
    cout << "Stok";
    for(space = 0; space < (terpanjang[2] - 4) - ((terpanjang[2] - 4) / 2); space++){
        cout << " ";
    }
    
    cout << "|";
    for(space = 0; space < (terpanjang[3] - 5) / 2; space++){
        cout << " ";
    }
    cout << "Harga";
    for(space = 0; space < (terpanjang[3] - 5) - ((terpanjang[3] - 5) / 2); space++){
        cout << " ";
    }
    
    cout << "|";
    for(space = 0; space < (terpanjang[4] - 5) / 2; space++){
        cout << " ";
    }
    cout << "Jenis";
    for(space = 0; space < (terpanjang[4] - 5) - ((terpanjang[4] - 5) / 2); space++){
        cout << " ";
    }
    
    cout << "|";
    for(space = 0; space < (terpanjang[5] - 5) / 2; space++){
        cout << " ";
    }
    cout << "Bahan";
    for(space = 0; space < (terpanjang[5] - 5) - ((terpanjang[5] - 5) / 2); space++){
        cout << " ";
    }
    
    cout << "|";
    for(space = 0; space < (terpanjang[6] - 5) / 2; space++){
        cout << " ";
    }
    cout << "Warna";
    for(space = 0; space < (terpanjang[6] - 5) - ((terpanjang[6] - 5) / 2); space++){
        cout << " ";
    }
    
    cout << "|";
    for(space = 0; space < (terpanjang[7] - 5) / 2; space++){
        cout << " ";
    }
    cout << "Untuk";
    for(space = 0; space < (terpanjang[7] - 5) - ((terpanjang[7] - 5) / 2); space++){
        cout << " ";
    }
    
    cout << "|";
    for(space = 0; space < (terpanjang[8] - 4) / 2; space++){
        cout << " ";
    }
    cout << "Size";
    for(space = 0; space < (terpanjang[8] - 4) - ((terpanjang[8] - 4) / 2); space++){
        cout << " ";
    }
    
    cout << "|";
    for(space = 0; space < (terpanjang[9] - 4) / 2; space++){
        cout << " ";
    }
    cout << "Merk";
    for(space = 0; space < (terpanjang[9] - 4) - ((terpanjang[9] - 4) / 2); space++){
        cout << " ";
    }
    cout << "|" << endl;

    // Data rows with adjusted spacing
    for(list<Baju>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        // ID column
        string id = it->get_id();
        int id_length = id.length();
        cout << "|";
        for(space = 0; space < (terpanjang[0] - id_length) / 2; space++){
            cout << " ";
        }
        cout << id;
        for(space = 0; space < (terpanjang[0] - id_length) - ((terpanjang[0] - id_length) / 2); space++){
            cout << " ";
        }
        
        // Nama column
        string nama = it->get_nama();
        int nama_length = nama.length();
        cout << "|";
        for(space = 0; space < (terpanjang[1] - nama_length) / 2; space++){
            cout << " ";
        }
        cout << nama;
        for(space = 0; space < (terpanjang[1] - nama_length) - ((terpanjang[1] - nama_length) / 2); space++){
            cout << " ";
        }
        
        // Stok column
        string stok = to_string(it->get_stok());
        int stok_length = stok.length();
        cout << "|";
        for(space = 0; space < (terpanjang[2] - stok_length) / 2; space++){
            cout << " ";
        }
        cout << stok;
        for(space = 0; space < (terpanjang[2] - stok_length) - ((terpanjang[2] - stok_length) / 2); space++){
            cout << " ";
        }
        
        // Harga column
        string harga = to_string(it->get_harga());
        int harga_length = harga.length();
        cout << "|";
        for(space = 0; space < (terpanjang[3] - harga_length) / 2; space++){
            cout << " ";
        }
        cout << harga;
        for(space = 0; space < (terpanjang[3] - harga_length) - ((terpanjang[3] - harga_length) / 2); space++){
            cout << " ";
        }
        
        // Jenis column
        string jenis = it->get_jenis();
        int jenis_length = jenis.length();
        cout << "|";
        for(space = 0; space < (terpanjang[4] - jenis_length) / 2; space++){
            cout << " ";
        }
        cout << jenis;
        for(space = 0; space < (terpanjang[4] - jenis_length) - ((terpanjang[4] - jenis_length) / 2); space++){
            cout << " ";
        }
        
        // Bahan column
        string bahan = it->get_bahan();
        int bahan_length = bahan.length();
        cout << "|";
        for(space = 0; space < (terpanjang[5] - bahan_length) / 2; space++){
            cout << " ";
        }
        cout << bahan;
        for(space = 0; space < (terpanjang[5] - bahan_length) - ((terpanjang[5] - bahan_length) / 2); space++){
            cout << " ";
        }
        
        // Warna column
        string warna = it->get_warna();
        int warna_length = warna.length();
        cout << "|";
        for(space = 0; space < (terpanjang[6] - warna_length) / 2; space++){
            cout << " ";
        }
        cout << warna;
        for(space = 0; space < (terpanjang[6] - warna_length) - ((terpanjang[6] - warna_length) / 2); space++){
            cout << " ";
        }
        
        // Untuk column
        string untuk = it->get_untuk();
        int untuk_length = untuk.length();
        cout << "|";
        for(space = 0; space < (terpanjang[7] - untuk_length) / 2; space++){
            cout << " ";
        }
        cout << untuk;
        for(space = 0; space < (terpanjang[7] - untuk_length) - ((terpanjang[7] - untuk_length) / 2); space++){
            cout << " ";
        }
        
        // Size column
        string size = it->get_size();
        int size_length = size.length();
        cout << "|";
        for(space = 0; space < (terpanjang[8] - size_length) / 2; space++){
            cout << " ";
        }
        cout << size;
        for(space = 0; space < (terpanjang[8] - size_length) - ((terpanjang[8] - size_length) / 2); space++){
            cout << " ";
        }
        
        // Merk column
        string merk = it->get_merk();
        int merk_length = merk.length();
        cout << "|";
        for(space = 0; space < (terpanjang[9] - merk_length) / 2; space++){
            cout << " ";
        }
        cout << merk;
        for(space = 0; space < (terpanjang[9] - merk_length) - ((terpanjang[9] - merk_length) / 2); space++){
            cout << " ";
        }
        cout << "|" << endl;
    }
}

int main(){
    int index;
    string id, nama, jenis, bahan, warna, untuk, size, merk;
    int stok, harga;
    int terpanjang[10];
    initializeTerpanjang(terpanjang);
    list<Baju> llist;
    list<Baju>::iterator it;
    Baju data1("B001", "KemejaCasual", 25, "Kemeja", "Katun", "Hitam", 150000, "Pria", "L", "Nevada");
    cariTerpanjang(terpanjang, data1);
    llist.push_back(data1);
    Baju data2("B002", "RokMini", 15, "Rok", "Jeans", "Biru Muda", 120000, "Wanita", "M", "Zara");
    cariTerpanjang(terpanjang, data2);
    llist.push_back(data2);
    Baju data3("B003", "KaosSantai", 40, "Kaos", "Cotton", "Putih" , 75000, "Anak", "S", "Uniqlo");
    cariTerpanjang(terpanjang, data3);
    llist.push_back(data3);
    Baju data4("B004", "JaketKulit", 10, "Jaket", "Kulit", "Coklat" , 450000, "Pria", "XL", "Levi's");
    cariTerpanjang(terpanjang, data4);
    llist.push_back(data4);
    Baju data5("B005", "GaunPesta", 8, "Gaun", "Satin", "Merah" ,350000, "Wanita", "M", "H&M");
    cariTerpanjang(terpanjang, data5);
    llist.push_back(data5);

    printTabel(terpanjang, llist);

    int i = 0;
    cout << "Masukkan Jumlah Baju baru:" << '\n';
    cin >> index;
    cout << "Masukkan ID NamaProduk Stok Harga Jenis Bahan Warna Untuk Size Merk!" << '\n';
    for(i = 0; i < index; i++){
        cin >> id >> nama >> stok >> harga >> jenis >> bahan >> warna >> untuk >> size >> merk;
        if(checkAvailability(llist, id)){
            Baju* temp = new Baju(id, nama, stok, jenis, bahan, warna , harga, untuk, size, merk);    
            // Baju temp(id, nama, stok, jenis, bahan, warna , harga, untuk, size, merk);
            cariTerpanjang(terpanjang, *temp);
            llist.push_back(*temp);
            cout << "Data Berhasil di Tambahkan!" << '\n';
        }else{
            cout << "Maaf, Item dengan ID " << id << " Sudah Ada ada di Database! Pilih ID lain!" << '\n';
        }
    }
    printTabel(terpanjang, llist);
}
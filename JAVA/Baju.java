public class Baju extends Aksesoris {
    private String untuk, size, merk;

    public Baju(){
    }

    public Baju(String id, String nama, int stok, String jenis, String bahan, String warna, int harga, String untuk, String size, String merk){
        setId(id);
        setNama(nama);
        setStok(stok);
        setJenis(jenis);
        setBahan(bahan);
        setWarna(warna);
        setHarga(harga);
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;

    }
    

    public String getUntuk() {
        return untuk;
    }


    public void setUntuk(String untuk) {
        this.untuk = untuk;
    }


    public String getSize() {
        return size;
    }


    public void setSize(String size) {
        this.size = size;
    }


    public String getMerk() {
        return merk;
    }


    public void setMerk(String merk) {
        this.merk = merk;
    }


    public int get_luntuk(){
        int panjang = this.untuk.length();
        return panjang;
    }
    public int get_lsize(){
        int panjang = this.size.length();
        return panjang;
    }
    public int get_lmerk(){
        int panjang = this.merk.length();
        return panjang;
    }
}

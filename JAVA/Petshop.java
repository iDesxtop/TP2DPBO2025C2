public class Petshop {

    private String id, nama;
    private int stok, harga;

    public Petshop(){
    }

    public String getId() {
        return id;
    }
    public void setId(String id) {
        this.id = id;
    }
    public String getNama() {
        return nama;
    }
    public void setNama(String nama) {
        this.nama = nama;
    }
    public int getStok() {
        return stok;
    }
    public void setStok(int stok) {
        this.stok = stok;
    }
    public int getHarga() {
        return harga;
    }
    public void setHarga(int harga) {
        this.harga = harga;
    }

    public int get_lid(){
        int panjang = this.id.length();
        return panjang;
    }
    public int get_lnama(){
        int panjang = this.nama.length();
        return panjang;
    }
    public int get_lstok(){
        int panjang = Integer.toString(this.stok).length();
        return panjang;
    }
    public int get_lharga(){
        int panjang = Integer.toString(this.harga).length();
        return panjang;
    }
}
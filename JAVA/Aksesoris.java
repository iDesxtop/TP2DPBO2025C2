public class Aksesoris extends Petshop {

    private String jenis, bahan, warna;

    public Aksesoris(){
    }

    public String getJenis() {
        return jenis;
    }


    public void setJenis(String jenis) {
        this.jenis = jenis;
    }


    public String getBahan() {
        return bahan;
    }


    public void setBahan(String bahan) {
        this.bahan = bahan;
    }


    public String getWarna() {
        return warna;
    }


    public void setWarna(String warna) {
        this.warna = warna;
    }

    public int get_ljenis(){
        int panjang = this.jenis.length();
        return panjang;
    }
    public int get_lbahan(){
        int panjang = this.bahan.length();
        return panjang;
    }
    public int get_lwarna(){
        int panjang = this.warna.length();
        return panjang;
    }
}
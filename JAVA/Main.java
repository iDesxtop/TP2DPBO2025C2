import java.util.*;

public class Main {

    public static void initializeTerpanjang(int [] terpanjang) {
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
    public static void cariTerpanjang(int [] terpanjang, Baju data) {
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

    public static void printTabel(int[] terpanjang, List<Baju> llist) {
        int space = 0;
        // Column headers
        System.out.print("|");
        for(space = 0; space < (terpanjang[0] - 2) / 2; space++){
            System.out.print(" ");
        }
        System.out.print("ID");
        for(space = 0; space < (terpanjang[0] - 2) - ((terpanjang[0] - 2) / 2); space++){
            System.out.print(" ");
        }
        
        System.out.print("|");
        for(space = 0; space < (terpanjang[1] - 9) / 2; space++){
            System.out.print(" ");
        }
        System.out.print("Nama Baju");
        for(space = 0; space < (terpanjang[1] - 9) - ((terpanjang[1] - 9) / 2); space++){
            System.out.print(" ");
        }
        
        System.out.print("|");
        for(space = 0; space < (terpanjang[2] - 4) / 2; space++){
            System.out.print(" ");
        }
        System.out.print("Stok");
        for(space = 0; space < (terpanjang[2] - 4) - ((terpanjang[2] - 4) / 2); space++){
            System.out.print(" ");
        }
        
        System.out.print("|");
        for(space = 0; space < (terpanjang[3] - 5) / 2; space++){
            System.out.print(" ");
        }
        System.out.print("Harga");
        for(space = 0; space < (terpanjang[3] - 5) - ((terpanjang[3] - 5) / 2); space++){
            System.out.print(" ");
        }
        
        System.out.print("|");
        for(space = 0; space < (terpanjang[4] - 5) / 2; space++){
            System.out.print(" ");
        }
        System.out.print("Jenis");
        for(space = 0; space < (terpanjang[4] - 5) - ((terpanjang[4] - 5) / 2); space++){
            System.out.print(" ");
        }
        
        System.out.print("|");
        for(space = 0; space < (terpanjang[5] - 5) / 2; space++){
            System.out.print(" ");
        }
        System.out.print("Bahan");
        for(space = 0; space < (terpanjang[5] - 5) - ((terpanjang[5] - 5) / 2); space++){
            System.out.print(" ");
        }
        
        System.out.print("|");
        for(space = 0; space < (terpanjang[6] - 5) / 2; space++){
            System.out.print(" ");
        }
        System.out.print("Warna");
        for(space = 0; space < (terpanjang[6] - 5) - ((terpanjang[6] - 5) / 2); space++){
            System.out.print(" ");
        }
        
        System.out.print("|");
        for(space = 0; space < (terpanjang[7] - 5) / 2; space++){
            System.out.print(" ");
        }
        System.out.print("Untuk");
        for(space = 0; space < (terpanjang[7] - 5) - ((terpanjang[7] - 5) / 2); space++){
            System.out.print(" ");
        }
        
        System.out.print("|");
        for(space = 0; space < (terpanjang[8] - 4) / 2; space++){
            System.out.print(" ");
        }
        System.out.print("Size");
        for(space = 0; space < (terpanjang[8] - 4) - ((terpanjang[8] - 4) / 2); space++){
            System.out.print(" ");
        }
        
        System.out.print("|");
        for(space = 0; space < (terpanjang[9] - 4) / 2; space++){
            System.out.print(" ");
        }
        System.out.print("Merk");
        for(space = 0; space < (terpanjang[9] - 4) - ((terpanjang[9] - 4) / 2); space++){
            System.out.print(" ");
        }
        System.out.println("|");
    
        // Data rows with adjusted spacing
        for(Baju item : llist) {
            // ID column
            String id = item.getId();
            int id_length = id.length();
            System.out.print("|");
            for(space = 0; space < (terpanjang[0] - id_length) / 2; space++){
                System.out.print(" ");
            }
            System.out.print(id);
            for(space = 0; space < (terpanjang[0] - id_length) - ((terpanjang[0] - id_length) / 2); space++){
                System.out.print(" ");
            }
            
            // Nama column
            String nama = item.getNama();
            int nama_length = nama.length();
            System.out.print("|");
            for(space = 0; space < (terpanjang[1] - nama_length) / 2; space++){
                System.out.print(" ");
            }
            System.out.print(nama);
            for(space = 0; space < (terpanjang[1] - nama_length) - ((terpanjang[1] - nama_length) / 2); space++){
                System.out.print(" ");
            }
            
            // Stok column
            String stok = Integer.toString(item.getStok());
            int stok_length = stok.length();
            System.out.print("|");
            for(space = 0; space < (terpanjang[2] - stok_length) / 2; space++){
                System.out.print(" ");
            }
            System.out.print(stok);
            for(space = 0; space < (terpanjang[2] - stok_length) - ((terpanjang[2] - stok_length) / 2); space++){
                System.out.print(" ");
            }
            
            // Harga column
            String harga = Integer.toString(item.getHarga());
            int harga_length = harga.length();
            System.out.print("|");
            for(space = 0; space < (terpanjang[3] - harga_length) / 2; space++){
                System.out.print(" ");
            }
            System.out.print(harga);
            for(space = 0; space < (terpanjang[3] - harga_length) - ((terpanjang[3] - harga_length) / 2); space++){
                System.out.print(" ");
            }
            
            // Jenis column
            String jenis = item.getJenis();
            int jenis_length = jenis.length();
            System.out.print("|");
            for(space = 0; space < (terpanjang[4] - jenis_length) / 2; space++){
                System.out.print(" ");
            }
            System.out.print(jenis);
            for(space = 0; space < (terpanjang[4] - jenis_length) - ((terpanjang[4] - jenis_length) / 2); space++){
                System.out.print(" ");
            }
            
            // Bahan column
            String bahan = item.getBahan();
            int bahan_length = bahan.length();
            System.out.print("|");
            for(space = 0; space < (terpanjang[5] - bahan_length) / 2; space++){
                System.out.print(" ");
            }
            System.out.print(bahan);
            for(space = 0; space < (terpanjang[5] - bahan_length) - ((terpanjang[5] - bahan_length) / 2); space++){
                System.out.print(" ");
            }
            
            // Warna column
            String warna = item.getWarna();
            int warna_length = warna.length();
            System.out.print("|");
            for(space = 0; space < (terpanjang[6] - warna_length) / 2; space++){
                System.out.print(" ");
            }
            System.out.print(warna);
            for(space = 0; space < (terpanjang[6] - warna_length) - ((terpanjang[6] - warna_length) / 2); space++){
                System.out.print(" ");
            }
            
            // Untuk column
            String untuk = item.getUntuk();
            int untuk_length = untuk.length();
            System.out.print("|");
            for(space = 0; space < (terpanjang[7] - untuk_length) / 2; space++){
                System.out.print(" ");
            }
            System.out.print(untuk);
            for(space = 0; space < (terpanjang[7] - untuk_length) - ((terpanjang[7] - untuk_length) / 2); space++){
                System.out.print(" ");
            }
            
            // Size column
            String size = item.getSize();
            int size_length = size.length();
            System.out.print("|");
            for(space = 0; space < (terpanjang[8] - size_length) / 2; space++){
                System.out.print(" ");
            }
            System.out.print(size);
            for(space = 0; space < (terpanjang[8] - size_length) - ((terpanjang[8] - size_length) / 2); space++){
                System.out.print(" ");
            }
            
            // Merk column
            String merk = item.getMerk();
            int merk_length = merk.length();
            System.out.print("|");
            for(space = 0; space < (terpanjang[9] - merk_length) / 2; space++){
                System.out.print(" ");
            }
            System.out.print(merk);
            for(space = 0; space < (terpanjang[9] - merk_length) - ((terpanjang[9] - merk_length) / 2); space++){
                System.out.print(" ");
            }
            System.out.println("|");
        }
    }

    public static int searchID(List<Baju> llist, String id) {
        int found = 0;
        int index = 0;
        Iterator<Baju> it = llist.iterator();
        
        while(it.hasNext() && found == 0) {
            Baju current = it.next();
            if(current.getId().equals(id)) {
                found = 1;
            } else {
                index++;
            }
        }
        
        if(found == 0) {
            return -1; // ID tidak ditemukan
        }
        return index; // Mengembalikan posisi ID yang ditemukan
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int index;
        String id, nama, jenis, bahan, warna, untuk, size, merk;
        int stok, harga;
        int [] terpanjang = new int[10];
        initializeTerpanjang(terpanjang);
        List<Baju> llist = new ArrayList<Baju>();
        Baju Data = new Baju("B001", "KemejaCasual", 25, "Kemeja", "Katun", "Hitam", 150000, "Pria", "L", "Nevada");
        cariTerpanjang(terpanjang, Data);
        llist.add(Data);
        Data = new Baju("B002", "RokMini", 15, "Rok", "Jeans", "Biru Muda", 120000, "Wanita", "M", "Zara");
        cariTerpanjang(terpanjang, Data);
        llist.add(Data);
        Data = new Baju("B003", "KaosSantai", 40, "Kaos", "Cotton", "Putih" , 75000, "Anak", "S", "Uniqlo");
        cariTerpanjang(terpanjang, Data);
        llist.add(Data);
        Data = new Baju("B004", "JaketKulit", 10, "Jaket", "Kulit", "Coklat" , 450000, "Pria", "XL", "Levi's");
        cariTerpanjang(terpanjang, Data);
        llist.add(Data);
        Data = new Baju("B005", "GaunPesta", 8, "Gaun", "Satin", "Merah" ,350000, "Wanita", "M", "H&M");
        cariTerpanjang(terpanjang, Data);
        llist.add(Data);

        printTabel(terpanjang, llist);

        int i = 0;
        System.out.println("Masukkan Jumlah Baju baru:");
        index = sc.nextInt();
        System.out.println("Masukkan ID NamaProduk Stok Harga Jenis Bahan Warna Untuk Size Merk!");
        for(i = 0; i < index; i++){
            id = sc.next(); nama = sc.next(); stok = sc.nextInt(); harga = sc.nextInt(); jenis = sc.next(); bahan = sc.next(); warna = sc.next(); untuk = sc.next(); size = sc.next(); merk = sc.next();
            if(searchID(llist, id) == -1){
                Data = new Baju(id, nama, stok, jenis, bahan, warna, harga, untuk, size, merk);
                cariTerpanjang(terpanjang, Data);
                llist.add(Data);
                System.out.println("Data Berhasil di Tambahkan!");
            }else{
                System.out.println("Maaf Item dengan ID " + id + " Sudah Dipakai!");
            }
        }
        printTabel(terpanjang, llist);
    }
}
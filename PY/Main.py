from Baju import Baju

def initializeTerpanjang(terpanjang):
    terpanjang[0] = 2
    terpanjang[1] = 9
    terpanjang[2] = 4
    terpanjang[3] = 5
    terpanjang[4] = 5
    terpanjang[5] = 5
    terpanjang[6] = 5
    terpanjang[7] = 5
    terpanjang[8] = 4
    terpanjang[9] = 4

def cariTerpanjang(terpanjang, data):
    if(terpanjang[0] < data.getlId()):
        terpanjang[0] = data.getlId()
    if(terpanjang[1] < data.getlNama()):
        terpanjang[1] = data.getlNama()
    if(terpanjang[2] < data.getlStok()):
        terpanjang[2] = data.getlStok()
    if(terpanjang[3] < data.getlHarga()):
        terpanjang[3] = data.getlHarga()
    if(terpanjang[4] < data.getlJenis()):
        terpanjang[4] = data.getlJenis()
    
    if(terpanjang[5] < data.getlBahan()):
        terpanjang[5] = data.getlBahan()
    
    if(terpanjang[6] < data.getlWarna()):
        terpanjang[6] = data.getlWarna()
    
    if(terpanjang[7] < data.getlUntuk()):
        terpanjang[7] = data.getlUntuk()
    
    if(terpanjang[8] < data.getlSize()):
        terpanjang[8] = data.getlSize()
    
    if(terpanjang[9] < data.getlMerk()):
        terpanjang[9] = data.getlMerk()
        
def printTabel(terpanjang, llist):
    space = 0
    # Column headers
    print("|", end="")
    for space in range((terpanjang[0] - 2) // 2):
        print(" ", end="")
    print("ID", end="")
    for space in range((terpanjang[0] - 2) - ((terpanjang[0] - 2) // 2)):
        print(" ", end="")
    
    print("|", end="")
    for space in range((terpanjang[1] - 9) // 2):
        print(" ", end="")
    print("Nama Baju", end="")
    for space in range((terpanjang[1] - 9) - ((terpanjang[1] - 9) // 2)):
        print(" ", end="")
    
    print("|", end="")
    for space in range((terpanjang[2] - 4) // 2):
        print(" ", end="")
    print("Stok", end="")
    for space in range((terpanjang[2] - 4) - ((terpanjang[2] - 4) // 2)):
        print(" ", end="")
    
    print("|", end="")
    for space in range((terpanjang[3] - 5) // 2):
        print(" ", end="")
    print("Harga", end="")
    for space in range((terpanjang[3] - 5) - ((terpanjang[3] - 5) // 2)):
        print(" ", end="")
    
    print("|", end="")
    for space in range((terpanjang[4] - 5) // 2):
        print(" ", end="")
    print("Jenis", end="")
    for space in range((terpanjang[4] - 5) - ((terpanjang[4] - 5) // 2)):
        print(" ", end="")
    
    print("|", end="")
    for space in range((terpanjang[5] - 5) // 2):
        print(" ", end="")
    print("Bahan", end="")
    for space in range((terpanjang[5] - 5) - ((terpanjang[5] - 5) // 2)):
        print(" ", end="")
    
    print("|", end="")
    for space in range((terpanjang[6] - 5) // 2):
        print(" ", end="")
    print("Warna", end="")
    for space in range((terpanjang[6] - 5) - ((terpanjang[6] - 5) // 2)):
        print(" ", end="")
    
    print("|", end="")
    for space in range((terpanjang[7] - 5) // 2):
        print(" ", end="")
    print("Untuk", end="")
    for space in range((terpanjang[7] - 5) - ((terpanjang[7] - 5) // 2)):
        print(" ", end="")
    
    print("|", end="")
    for space in range((terpanjang[8] - 4) // 2):
        print(" ", end="")
    print("Size", end="")
    for space in range((terpanjang[8] - 4) - ((terpanjang[8] - 4) // 2)):
        print(" ", end="")
    
    print("|", end="")
    for space in range((terpanjang[9] - 4) // 2):
        print(" ", end="")
    print("Merk", end="")
    for space in range((terpanjang[9] - 4) - ((terpanjang[9] - 4) // 2)):
        print(" ", end="")
    print("|")
    
    # Data rows with adjusted spacing
    for item in llist:
        # ID column
        id_str = item.getId()
        id_length = len(id_str)
        print("|", end="")
        for space in range((terpanjang[0] - id_length) // 2):
            print(" ", end="")
        print(id_str, end="")
        for space in range((terpanjang[0] - id_length) - ((terpanjang[0] - id_length) // 2)):
            print(" ", end="")
        
        # Nama column
        nama = item.getNama()
        nama_length = len(nama)
        print("|", end="")
        for space in range((terpanjang[1] - nama_length) // 2):
            print(" ", end="")
        print(nama, end="")
        for space in range((terpanjang[1] - nama_length) - ((terpanjang[1] - nama_length) // 2)):
            print(" ", end="")
        
        # Stok column
        stok = str(item.getStok())
        stok_length = len(stok)
        print("|", end="")
        for space in range((terpanjang[2] - stok_length) // 2):
            print(" ", end="")
        print(stok, end="")
        for space in range((terpanjang[2] - stok_length) - ((terpanjang[2] - stok_length) // 2)):
            print(" ", end="")
        
        # Harga column
        harga = str(item.getHarga())
        harga_length = len(harga)
        print("|", end="")
        for space in range((terpanjang[3] - harga_length) // 2):
            print(" ", end="")
        print(harga, end="")
        for space in range((terpanjang[3] - harga_length) - ((terpanjang[3] - harga_length) // 2)):
            print(" ", end="")
        
        # Jenis column
        jenis = item.getJenis()
        jenis_length = len(jenis)
        print("|", end="")
        for space in range((terpanjang[4] - jenis_length) // 2):
            print(" ", end="")
        print(jenis, end="")
        for space in range((terpanjang[4] - jenis_length) - ((terpanjang[4] - jenis_length) // 2)):
            print(" ", end="")
        
        # Bahan column
        bahan = item.getBahan()
        bahan_length = len(bahan)
        print("|", end="")
        for space in range((terpanjang[5] - bahan_length) // 2):
            print(" ", end="")
        print(bahan, end="")
        for space in range((terpanjang[5] - bahan_length) - ((terpanjang[5] - bahan_length) // 2)):
            print(" ", end="")
        
        # Warna column
        warna = item.getWarna()
        warna_length = len(warna)
        print("|", end="")
        for space in range((terpanjang[6] - warna_length) // 2):
            print(" ", end="")
        print(warna, end="")
        for space in range((terpanjang[6] - warna_length) - ((terpanjang[6] - warna_length) // 2)):
            print(" ", end="")
        
        # Untuk column
        untuk = item.getUntuk()
        untuk_length = len(untuk)
        print("|", end="")
        for space in range((terpanjang[7] - untuk_length) // 2):
            print(" ", end="")
        print(untuk, end="")
        for space in range((terpanjang[7] - untuk_length) - ((terpanjang[7] - untuk_length) // 2)):
            print(" ", end="")
        
        # Size column
        size = item.getSize()
        size_length = len(size)
        print("|", end="")
        for space in range((terpanjang[8] - size_length) // 2):
            print(" ", end="")
        print(size, end="")
        for space in range((terpanjang[8] - size_length) - ((terpanjang[8] - size_length) // 2)):
            print(" ", end="")
        
        # Merk column
        merk = item.getMerk()
        merk_length = len(merk)
        print("|", end="")
        for space in range((terpanjang[9] - merk_length) // 2):
            print(" ", end="")
        print(merk, end="")
        for space in range((terpanjang[9] - merk_length) - ((terpanjang[9] - merk_length) // 2)):
            print(" ", end="")
        print("|")

def searchID(llist, id):
    for index, item in enumerate(llist):
        if item.getId() == id:
            return index
    return -1  # ID tidak ditemukan

index = 0
id="" 
nama="" 
jenis=""
bahan=""
warna=""
untuk=""
size=""
merk= ""
stok=0
harga = 0
terpanjang = [0] * 10
initializeTerpanjang(terpanjang)
llist = []
Data = Baju("B001", "KemejaCasual", 25, "Kemeja", "Katun", "Hitam", 150000, "Pria", "L", "Nevada")
cariTerpanjang(terpanjang, Data)
llist.append(Data)
Data = Baju("B002", "RokMini", 15, "Rok", "Jeans", "Biru Muda", 120000, "Wanita", "M", "Zara")
cariTerpanjang(terpanjang, Data)
llist.append(Data)
Data = Baju("B003", "KaosSantai", 40, "Kaos", "Cotton", "Putih" , 75000, "Anak", "S", "Uniqlo")
cariTerpanjang(terpanjang, Data)
llist.append(Data)
Data = Baju("B004", "JaketKulit", 10, "Jaket", "Kulit", "Coklat" , 450000, "Pria", "XL", "Levi's")
cariTerpanjang(terpanjang, Data)
llist.append(Data)
Data = Baju("B005", "GaunPesta", 8, "Gaun", "Satin", "Merah" ,350000, "Wanita", "M", "H&M")
cariTerpanjang(terpanjang, Data)
llist.append(Data)

printTabel(terpanjang, llist)

i = 0
print("Masukkan Jumlah Baju baru:")
index = int(input())
print("Masukkan ID NamaProduk Stok Harga Jenis Bahan Warna Untuk Size Merk!")
for i in range (index):
    data = input().split()
    id, nama, stok, harga, jenis, bahan, warna, untuk, size, merk = data
    stok = int(stok)
    harga = int(harga)
    if(searchID(llist, id) == -1):
        Data = Baju(id, nama, stok, jenis, bahan, warna, harga, untuk, size, merk)
        cariTerpanjang(terpanjang, Data)
        llist.append(Data)
        print("Data Berhasil di Tambahkan!")
    else:
        print("Maaf Item dengan ID " + id + " Sudah Dipakai!")

printTabel(terpanjang, llist)

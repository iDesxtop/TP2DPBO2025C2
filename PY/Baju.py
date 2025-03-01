from Aksesoris import Aksesoris

class Baju(Aksesoris):
    __untuk = ""
    __size = ""
    __merk = ""

    def __init__(self,id="", nama="", stok=0, jenis="", bahan="", warna="", harga=0, untuk = "", size = "", merk = ""):
        self.setId(id)
        self.setNama(nama)
        self.setStok(stok)
        self.setJenis(jenis)
        self.setBahan(bahan)
        self.setWarna(warna)
        self.setHarga(harga)
        self.__untuk = untuk
        self.__size = size
        self.__merk = merk
                    
    def getUntuk(self):
        return self.__untuk
    
    def setUntuk(self, untuk):
        self.__untuk = untuk
    
    def getSize(self):
        return self.__size
    
    def setSize(self, size):
        self.__size = size
    
    def getMerk(self):
        return self.__merk
    
    def setMerk(self, merk):
        self.__merk = merk
    
    def getlUntuk(self):
        return len(self.__untuk)
    def getlSize(self):
        return len(self.__size)
    def getlMerk(self):
        return len(self.__merk)
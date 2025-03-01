from Petshop import Petshop

class Aksesoris(Petshop):
    __jenis = ""
    __bahan = ""
    __warna = ""

    def __init__(self, jenis = "", bahan = "", warna = ""):
        self.__jenis = jenis
        self.__bahan = bahan
        self.__warna = warna
                    
    def getJenis(self):
        return self.__jenis
    
    def setJenis(self, jenis):
        self.__jenis = jenis
    
    def getBahan(self):
        return self.__bahan
    
    def setBahan(self, bahan):
        self.__bahan = bahan
    
    def getWarna(self):
        return self.__warna
    
    def setWarna(self, warna):
        self.__warna = warna
    
    def getlJenis(self):
        return len(self.__jenis)
    def getlBahan(self):
        return len(self.__bahan)
    def getlWarna(self):
        return len(self.__warna)
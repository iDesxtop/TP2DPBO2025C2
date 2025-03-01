class Petshop:
    __id = ""
    __nama = ""
    __stok = 0
    __harga = 0

    def __init__(self, id = "", nama = "", stok = 0, harga = 0):
        self.__id = id
        self.__nama = nama
        self.__stok = stok
        self.__harga = harga
    
    def getId(self):
        return self.__id
    
    def setId(self, id):
        self.__id = id
    
    def getNama(self):
        return self.__nama
    
    def setNama(self, nama):
        self.__nama = nama
    
    def getStok(self):
        return self.__stok
    
    def setStok(self, stok):
        self.__stok = stok
    
    def getHarga(self):
        return self.__harga
    
    def setHarga(self, harga):
        self.__harga = harga
    
    def getlId(self):
        return len(self.__id)
    def getlNama(self):
        return len(self.__nama)
    def getlStok(self):
        return len(str(self.__stok))
    def getlHarga(self):
        return len(str(self.__harga))
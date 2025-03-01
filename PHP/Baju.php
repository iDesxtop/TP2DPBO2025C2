<?php
    require_once 'Aksesoris.php';
    class Baju extends Aksesoris
    {
        private $untuk;
        private $size;
        private $merk;
        public function __construct( $id,  $nama, $stok,  $harga,  $jenis,  $bahan,  $warna,  $untuk,  $size,  $merk, $gambar){
            $this->setId($id);
            $this->setNama($nama);
            $this->setStok($stok);
            $this->setJenis($jenis);
            $this->setBahan($bahan);
            $this->setWarna($warna);
            $this->setHarga($harga);
            $this->setGambar($gambar);
            $this->untuk = $untuk;
            $this->size = $size;
            $this->merk = $merk;
        }

        public function setUntuk($untuk){
            $this->untuk = $untuk;
        }
        public function getUntuk(){
            return $this->untuk;
        }
        public function setSize($size){
            $this->size = $size;
        }
        public function getSize(){
            return $this->size;
        }
        public function setMerk($merk){
            $this->merk = $merk;
        }
        public function getMerk(){
            return $this->merk;
        }
    }
?>
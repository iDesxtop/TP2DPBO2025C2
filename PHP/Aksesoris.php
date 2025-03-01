<?php
    require_once 'Petshop.php';
    class Aksesoris extends Petshop
    {
        private $jenis;
        private $bahan;
        private $warna;
        public function __construct($jenis="", $bahan="", $warna=0){
            $this->jenis = $jenis;
            $this->bahan = $bahan;
            $this->warna = $warna;
        }

        public function setJenis($jenis){
            $this->jenis = $jenis;
        }
        public function getJenis(){
            return $this->jenis;
        }
        public function setBahan($bahan){
            $this->bahan = $bahan;
        }
        public function getBahan(){
            return $this->bahan;
        }
        public function setWarna($warna){
            $this->warna = $warna;
        }
        public function getWarna(){
            return $this->warna;
        }
    }
?>
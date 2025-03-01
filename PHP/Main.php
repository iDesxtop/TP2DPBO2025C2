<?php
    require ('Baju.php');
    $llist = array();
    $newItem = new Baju("B001", "KemejaCasual", 25,150000, "Kemeja", "Katun", "Hitam",  "Pria", "L", "Nevada", "default.png");
    $llist[] = $newItem;
    $newItem = new Baju("B002", "RokMini", 15,120000, "Rok", "Jeans", "Biru Muda",  "Wanita", "M", "Zara", "default.png");
    $llist[] = $newItem;
    $newItem = new Baju("B003", "KaosSantai", 40, 75000, "Kaos", "Cotton", "Putih" , "Anak", "S", "Uniqlo", "default.png");
    $llist[] = $newItem;
    $newItem = new Baju("B004", "JaketKulit", 10,450000, "Jaket", "Kulit", "Coklat" ,  "Pria", "XL", "Levi's", "default.png");
    $llist[] = $newItem;
    $newItem = new Baju("B005", "GaunPesta", 8, 350000, "Gaun", "Satin", "Merah" , "Wanita", "M", "H&M", "default.png");
    $llist[] = $newItem;
?>

<!DOCTYPE html>
<html lang="en">
<!-- Tabel Data -->
<h1>Default</h1>
<table border="1" style="border-collapse: collapse; margin-top: 20px;">
    <thead>
        <tr>
            <th style="padding: 10px;">ID</th>
            <th style="padding: 10px;">Nama</th>
            <th style="padding: 10px;">Stok</th>
            <th style="padding: 10px;">Harga</th>
            <th style="padding: 10px;">Jenis</th>
            <th style="padding: 10px;">Bahan</th>
            <th style="padding: 10px;">Warna</th>
            <th style="padding: 10px;">Untuk</th>
            <th style="padding: 10px;">Size</th>
            <th style="padding: 10px;">Merk</th>
        </tr>
    </thead>
    <tbody>
        <?php
        // session_start();
        if (isset($llist)) {
            foreach($llist as $item) {
                echo "<tr>";
                echo "<td style='padding: 10px;'>" . $item->getId() . "</td>";
                echo "<td style='padding: 10px;'>" . $item->getNama() . "</td>";
                echo "<td style='padding: 10px;'>" . $item->getStok() . "</td>";
                echo "<td style='padding: 10px;'>Rp " . number_format($item->getHarga(), 0, ',', '.') . "</td>";
                echo "<td style='padding: 10px;'>" . $item->getJenis() . "</td>";
                echo "<td style='padding: 10px;'>" . $item->getBahan() . "</td>";
                echo "<td style='padding: 10px;'>" . $item->getWarna() . "</td>";
                echo "<td style='padding: 10px;'>" . $item->getUntuk() . "</td>";
                echo "<td style='padding: 10px;'>" . $item->getSize() . "</td>";
                echo "<td style='padding: 10px;'>" . $item->getMerk() . "</td>";
                echo "<td style='padding: 10px;'>";
                if(!empty($item->getGambar())) {
                    echo "<img src='" . $item->getGambar() . "' style='max-width: 100px;'>";
                }
                echo "</td>";
                echo "</tr>";
            }
        }
        ?>
    </tbody>
</table>

<?php 
    $newItem = new Baju("B006", "CelanaJeans", 30, 200000, "Celana", "Denim", "Biru", "Pria", "M", "Levi's", "default2.jpg");
    $llist[] = $newItem;
    $newItem = new Baju("B007", "BlouseFloral", 22, 175000, "Blouse", "Sifon", "Putih", "Wanita", "L", "Uniqlo", "default2.jpg");
    $llist[] = $newItem;
    $newItem = new Baju("B008", "SweaterRajut", 15, 280000, "Sweater", "Rajut", "Abu-abu", "Pria", "XL", "Pull&Bear", "default2.jpg");
    $llist[] = $newItem;
    $newItem = new Baju("B009", "DressKasual", 18, 230000, "Dress", "Katun", "Hijau", "Wanita", "S", "Mango", "default2.jpg");
    $llist[] = $newItem;
    $newItem = new Baju("B010", "BajuTidur", 25, 95000, "Piyama", "Satin", "Pink", "Anak", "M", "Giordano", "default2.jpg");
    $llist[] = $newItem;
?>

<h1>Hasil Penambahan 5 Objek Baju</h1>

<table border="1" style="border-collapse: collapse; margin-top: 20px;">
    <thead>
        <tr>
            <th style="padding: 10px;">ID</th>
            <th style="padding: 10px;">Nama</th>
            <th style="padding: 10px;">Stok</th>
            <th style="padding: 10px;">Harga</th>
            <th style="padding: 10px;">Jenis</th>
            <th style="padding: 10px;">Bahan</th>
            <th style="padding: 10px;">Warna</th>
            <th style="padding: 10px;">Untuk</th>
            <th style="padding: 10px;">Size</th>
            <th style="padding: 10px;">Merk</th>
        </tr>
    </thead>
    <tbody>
        <?php
        // session_start();
        if (isset($llist)) {
            foreach($llist as $item) {
                echo "<tr>";
                echo "<td style='padding: 10px;'>" . $item->getId() . "</td>";
                echo "<td style='padding: 10px;'>" . $item->getNama() . "</td>";
                echo "<td style='padding: 10px;'>" . $item->getStok() . "</td>";
                echo "<td style='padding: 10px;'>Rp " . number_format($item->getHarga(), 0, ',', '.') . "</td>";
                echo "<td style='padding: 10px;'>" . $item->getJenis() . "</td>";
                echo "<td style='padding: 10px;'>" . $item->getBahan() . "</td>";
                echo "<td style='padding: 10px;'>" . $item->getWarna() . "</td>";
                echo "<td style='padding: 10px;'>" . $item->getUntuk() . "</td>";
                echo "<td style='padding: 10px;'>" . $item->getSize() . "</td>";
                echo "<td style='padding: 10px;'>" . $item->getMerk() . "</td>";
                echo "<td style='padding: 10px;'>";
                if(!empty($item->getGambar())) {
                    echo "<img src='" . $item->getGambar() . "' style='max-width: 100px;'>";
                }
                echo "</td>";
                echo "</tr>";
            }
        }
        ?>
    </tbody>
</table>
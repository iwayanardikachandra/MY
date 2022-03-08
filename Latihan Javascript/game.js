// Menampilkan Pesan Selamat Datang //
alert("Selamat Datang Di Program Tebak Angka!!");

// User Input //
var p = parseInt(prompt("Pilih Angka 1-10"));

// Pengkondisian //
var comp = Math.ceil(Math.random() * 10 + 1);
console.log(comp);
var kesempatan = 3;
var i = 1;

for (i = 1; i <= kesempatan; i++) {
  if (p == comp) {
    hasil = "Benar";
    alert(hasil + "\nAngka yang dicari benar");
    alert("Terima Kasih");
    break;
  } else if (p !== comp) {
    hasil = "Salah Tebakannya";
  }
  // Kesempatan 2 //
  if (i == 1) {
    alert(hasil + " Masih Ada kesempatan lagi");
    parseInt(prompt("Pilih Angka 1-10"));
  } // Kesempatan Terakhir //
  else if (i == 2) {
    alert(hasil + " Masih Ada Kesempatan Lagi");
    parseInt(prompt("Pilih Angka 1-10"));
  } else {
    alert("Anda Gagal, angka tebakannya adalah " + comp);
  }
}

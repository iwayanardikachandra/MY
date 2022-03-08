var jumlahAngkot = 10;
var angkot = 1;
var angkotBeroperasi = 8;

while (angkot <= jumlahAngkot) {
  console.log("Angkot no " + angkot + " Beroperasi Dengan Baik ");

  angkot++;
}

for (angkot = angkotBeroperasi + 1; angkot <= jumlahAngkot; angkot++) {
  console.log("Angkot No " + angkot + " Tidak beroperasi dengan baik");
}

// IF ELSE //

var angka = prompt("Masukkan Sebuah Angka");

if (angka % 2 === 0) {
  alert("Yang anda masukkan angka genap");
} else if (angka % 2 === 1) {
  alert("Yang anda masukkan angka ganjil");
} else {
  alert("Yang anda masukkan bukan angka");
}

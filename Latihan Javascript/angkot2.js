var jumlahAngkot = 10;
var noAngkot = 1;

for (noAngkot = 1; noAngkot <= jumlahAngkot; noAngkot++) {
  if (noAngkot <= 6) {
    console.log("Angkot NO " + noAngkot + " Beroperasi dengan baik");
  } else if (noAngkot === 7 || noAngkot === 8) {
    console.log("Angkot NO " + noAngkot + " Sedang Rusak");
  } else {
    console.log("Angkot NO " + noAngkot + " Sudah Dijual");
  }
}

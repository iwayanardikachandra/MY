// Menampilkan Pesan Selamat Datang //
alert("Selamat Datang Di Program Sederhana Saya!!!");

// User Input //
var p = prompt("Pilih : Gajah, Orang, Semut");
let play = true;

// Generate Bilangan Random //
var comp = Math.floor(Math.random() * 10 + 1);
console.log(comp);

if (comp < 10) {
  comp = "Gajah";
} else if (comp >= 5 && comp < 10) {
  comp = "Orang";
} else {
  comp = "Semut";
}

// Rules //
var hasil = "";

if (p == comp) {
  hasil = "Seri";
} else if (p == "gajah") {
  if (comp == "Orang") {
    hasil = "Menang";
  } else {
    hasil = "Kalah";
  }
} else if (p == "Orang") {
  if (comp == "Gajah") {
    hasil = "Kalah";
  } else if (comp == "Semut") {
    hasil = "Menang";
  } else {
    hasil = "Tidak Valid";
  }
} else if (p == "Semut") {
  if (comp == "Gajah") {
    hasil = "Menang";
  } else if (comp == "Semut") {
    hasil = "Seri";
  }
}

// Hasil //
alert("Anda Memilih " + p + " Dan Komputer Memilih " + comp + "\n Maka Hasilnya " + hasil);

// Confirm //

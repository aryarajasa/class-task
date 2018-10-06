/*
 * Title  : Menghitung Luas, Keliling Lingkaran dan Segitiga.
 * Name   : Choirul Mahendrata Harpi
 * Class  : 18.IF.01
 * NIM    : 18.11.1869
 *
 */
// kode diatas adalah penggalan komentar multiline, yang tidak dieksekusi saat kode dijalankan.

#include <iostream> //  ini adalah memasukkan library iostream kedalam program kita, iostream yang berisi cin dan cout / input output stream yang melalui aliran CLI
#include <stdlib.h> // ini adalah memasukan library standar stdlib.h kedalam program kita juga yang terdiri dari system() dan banyak lagi.
using namespace std; // ini merupakan agar kita tidak usah menulis menggunakan std::cout ataupun std::cin, cukup dengan memberi tahu bahwa kita menggunakan namespace std, kita hanya menulis cout atau cin.

main(){ // ini adalah fungsi utama, semua program yang ada didalam fungsi ini akan diekseskusi
  float options, a, b, c, d; // deklarasi variable
  float const phi = 3.14;
  cout << "Daftar rumus, pilih dengan menggunakan angka." << endl << endl; // cout (console.out) mengoutputkan sebuah data, semua kode yang memiliki cout itu merupakan mengoutputkan data.
  cout << "[1] Segitiga\n[2] Lingkaran\n[3] About Me\n" << endl;

  cout << "Pilih : ";
  cin >> options; // cin(console.in) atau menginputkan data ke variable yang dituju, semua kode yang memiliki cin itu artinya menginputkan data.
  cout << endl;
  system("cls"); // nah ini asalnya dari library <stdlib.h> tadi yang berfungsi mengeksekusi perintah "cls" pada comand prompt / CLI yang digunakan.
  // perintah cls adalah clear screen yang artinya membersihkan layar dari hasil eksekusi sebelumnya. 
  // jadi setiap ada system("cls") itu seperti keterangan saya diatas.

  if (options == 1) { // ini adalah sebuah keputusan atau percabangan dia akan mengembalikan true jika nilai yang diambil adalah sama dengan 1..
    cout << "Pilih rumus Segitiga\n" << endl; // endl berfungsi membuat baris baru atau disebut end line akhir dari baris, jika menemui ini lagi maka fungsinya sama seperti ini.
    cout << "[1] Keliling Segitiga sama sisi\n[2] Luas Segitiga sama sisi\n[0] Menu Utama\n" << endl; // jika nilai options sama dengan 1 maka yang disini dieksekusi.
    cout << "Pilih : ";
    cin >> options;
    system("cls");
    
	if (options ==1){ // ini adalah percabangan didalam percabangan atau bisa juga disebut nested if, cara kerjanya sama dengan if sebelumnya.
    	cout << "Menghitung keliling segitiga sama Sisi\n" << endl;
		cout << "Masukkan sisi : ";
		cin >> a;	
		cout << "Hasil dari keliling segitiga sama sisi adalah " << a * 3; // aritmatika variabel a dikali 3;
	} else if (options == 2) {  // jika inputan sama dengan 2 maka mengeksekusi ini
	    cout << "Menghitung luas segitiga sama Sisi\n" << endl;
		cout << "Masukkan alas : ";
		cin >> a;
		cout << "Masukkan tinggi : ";
		cin >> b;
		c = 0.5*(a * b); // aritmatika | rumus luas segitiga sama sisi
		cout << "Hasil dari luas segitiga sama sisi adalah " << c; 
	} else if (options == 0) {
		system("cls");
		if(options == 0){
			return main(); // kembali ke menu utama / fungsi utama.
		}	
	}else { // jika isi dari variable options tidak ada yang sesuai maka akan dilempar disini.
		cout << "Notif : Pilihan tidak sesuai\n\n";
		cout << "[0] Menu Utama\n\n";
		cout << "Pilih : ";
		cin >> options;
		system("cls");
		if(options == 0){
			return main(); // kembali ke menu utama / fungsi utama.
		}
	}
	
	
  } else if (options == 2) { // jika options adalah 2 
    cout << "Pilih rumus Lingkaran\n" << endl;
    cout << "[1] Keliling Lingkaran\n[2] Luas Lingkaran\n[0] Menu Utama\n" << endl; // fungsi \n hampir sama dengan endl, cuma beda tempat penggunakan, jika \n dibungkus dengan string.
    cout << "Pilih : ";
    cin >> options;
    system("cls");
    
	if (options ==1){ // ini adalah percabangan didalam percabangan atau bisa juga disebut nested if, cara kerjanya sama dengan if sebelumnya.
    	cout << "Menghitung keliling Lingkaran\n" << endl;
		cout << "Masukkan jari-jari: ";
		cin >> a;
		b = phi*(a + a); // aritmatika yang merupakan rumus keliling lingkaran.
		cout << "Hasil dari keliling Lingkaran adalah " << b; // aritmatika variabel a dikali 3;
	} else if (options == 2) {  // jika inputan sama dengan 2 maka mengeksekusi ini
	    cout << "Menghitung luas Lingkaran\n" << endl;
		cout << "Masukkan jari-jari : ";
		cin >> a;
		b = phi * a * a; // aritmatika yang merupakan rumus luas lingkaran.
		cout << "Hasil dari luas Lingkaran adalah " << b; 
	} else if (options == 0) {
		system("cls");	
		if(options == 0){
			return main(); // kembali ke menu utama / fungsi utama.
		}	
	}else { // jika isi dari variable options tidak ada yang sesuai maka akan dilempar disini.
		cout << "Notif : Pilihan tidak sesuai\n\n";
		cout << "[0] Menu Utama\n\n";
		cout << "Pilih : ";
		cin >> options;
		system("cls");
		if(options == 0){
			return main(); // kembali ke menu utama / fungsi utama.
		}
	}
  } else if (options == 3) { // jika options samadengan 3 maka akan mengeksekusi kode ini.
    cout << "Name\t: Choirul Mahendrata Harpi" << endl;
    cout << "Class\t: 18.IF.01" << endl;
    cout << "Nim\t: 18.11.189" << endl;
  } else { // jika tidak ada yang sesuai maka akan mengembalikan pilihan tidak sesuai.
    cout << "Notif : Pilihan tidak sesuai\n\n";
    cout << "[0] Menu Utama\n\n";
    cout << "Pilih : ";
	cin >> options;
	system("cls");
	if(options == 0){
    	return main(); // kembali ke menu utama / fungsi utama.
	}
  }

  return 0;
}

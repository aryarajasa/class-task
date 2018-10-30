/*
 * Title  : Sistem Penyimpanan Barang ke gudang.
 * Name   : Choirul Mahendrata Harpi
 * Class  : 18.IF.01
 * NIM    : 18.11.1869
 * 
 * !!! Pastikan menambahkan flags -std=c++11 pada saat compiling program.
 * 
 */

#include <iostream> // import standar library iostream.
#include <iomanip> // import standar library iomanip.
#include <string> // import standar library string.

using namespace std; // menggunakkan namespace std agar tidak menulis std berulang kali.

int main() // fungsi utama dari program.
{
	const int MAX_SIZE = 50; // variabel tetap MAX_SIZE bertipe integer mempunyai nilai 50 berfungsi sebagai kapasitas Array.
	      int count; // variabel count bertipe integer berfungsi sebagai penghitung berapa kali perulangan itu dijalankan.
        int menu; // variabel menu bertipe integer berfungsi sebagai menyimpan pilihan menu.

	//  array data barang:
	string n_barang[MAX_SIZE];	// disinilah nama barang disimpan dengan menggunakan array string. 
	int    h_barang[MAX_SIZE];	// disinilah harga barang disimpan dengan menggunkan array integer.
 

  while(1){ // sebagai perulangan selama kondisi true.
    system("clear"); // membersihkan layar saat pertama program dijalankan.

    cout << "MENU\n"; // menampilkan ke layar teks "MENU" dengan baris baru.
    cout << "[1] Tambah Data\n"; // menampilkan ke layar teks "[1] Tambah Data" dengan baris baru.
    cout << "[2] Tampilkan Data\n"; // menampilkan ke layar "[2] Tampilkan Data" disertai baris baru.
    cout << "[0] Keluar\n\n"; // menampilkan ke layar "[0] Keluar" disertai baris baru

    cout << "Pilihan : "; // menampilkan ke layar "Pilihan :"

    cin >> menu; // menginputkan input user ke var menu.
    if(menu == 1){ // jika nilai pilihan menu sama dengan 1 maka jalankan perintah dibawah ini. 
      cin.get(); // memberikan jarak, supaya program tidak langsung menjalankan eksekusi berikutnya. enter untuk melanjutkanya.
      for(int i = count; i != MAX_SIZE; ++i) // perulangan mengulanga dari nilai var count sampai dengan tidak sama dengan MAX_SIZE.
      {
      
        string tmp_n_barang; // variabel penampung sementara nama barang.
        string tmp_h_barang; // variabel penampung sementara harga barang.
        
        system("clear"); // membersihkan layar

        cout << "Nama Barang : "; // menampikan teks ke layar "Nama Barang : ".
        getline(cin, tmp_n_barang); // memberikan nilai tmp_n_barang dari inputan user.
        
        if(tmp_n_barang == ""){ // jika tmp_n_barang adalah kosong, maka berhenti dari perulangan.
          system("clear"); // membersihkan layar
          break; // keluar dari perulangan. // menghentikan perulangan  
        }
        
        n_barang[i] = tmp_n_barang; // masukkan nama barang ke array nama barang.
        
        cout << "Harga: "; // menampikan teks ke layar "Harga : ".
        getline(cin, tmp_h_barang); // memberikan nilai tmp_h_barang dari inputan user.
        h_barang[i] = stoi(tmp_h_barang); // stoi mengubah tmp_h_barang yang tadinya string menjadi integer.

        count++; // menambahka variabel count dengan 1 angka atau increment.
        
      }

    } else if(menu == 2) { // jika pilihan menu user adalah 2 maka jalankan berikut.
      if(count != 0){ // jika data dari count tidak sama dengan 0 maka jalankan berikut.

        system("clear"); // membersihkan layar
        cin.get(); // memberikan jarak, supaya program tidak langsung menjalankan eksekusi berikutnya. enter untuk melanjutkanya.
        cout << "\n-------------------------\n";  // menampikan teks ke layar "-------------------------" dengan baris baru.
        cout << setw(3) << "NO" << setw(15) << "NAMA" << setw(7) << "HARGA"; // mengoutputkan kelayar dengan formating setw() yaitu memerikan jarak sesuai dengan yang ditentukan.
        cout << "\n-------------------------\n";  // menampikan teks ke layar "-------------------------" dengan baris baru.
        for(int i = 0; i != count; ++i) // mengulanang dengan nilai pertama 0 sampain dengan tidak sama count.
        {
          cout << setw(3)  << i + 1; // mengoutputkan kelayar nomer dengan formating setw() yaitu memerikan jarak sesuai dengan yang ditentukan.
          cout << setw(15) << n_barang[i]; // mengoutputkan kelayar nama barang dengan formating setw() yaitu memerikan jarak sesuai dengan yang ditentukan.
          cout << setw(7)  << h_barang[i]; // mengoutputkan kelayar harga barang dengan formating setw() yaitu memerikan jarak sesuai dengan yang ditentukan.
          cout << endl; // new line atau garis baru
        }
        cout << "-------------------------\n"; // menampikan teks ke layar "-------------------------" dengan baris baru.
        cin.get(); // memberikan jarak, supaya program tidak langsung menjalankan eksekusi berikutnya. enter untuk melanjutkanya.

      } else { // jika data kosong maka.

        cin.get(); // memberikan jarak, supaya program tidak langsung menjalankan eksekusi berikutnya. enter untuk melanjutkanya.
        system("clear"); // membersihkan layar
        cout << "[!] Data masih kosong\n"; // mengoutputkan ke layar "[!] Data masih kosong". 
        cin.get(); // memberikan jarak, supaya program tidak langsung menjalankan eksekusi berikutnya. enter untuk melanjutkanya.
        system("clear"); // membersihkan layar
        
      }
    } else if(menu == 0) { // jika pilihan menu adalah 0 maka jalankan eksekusi berikut. 
      break; // menghentikan perulangan  
    } else {
      system("clear"); // membersihkan layar
      cin.get(); // memberikan jarak, supaya program tidak langsung menjalankan eksekusi berikutnya. enter untuk melanjutkanya.
      cout << "[!] Pilihan tidak tersedia\n"; // mengoutputkan ke layar "[!] Pilihan tidak tersedia" dengan baris baru 
      cin.get(); // memberikan jarak, supaya program tidak langsung menjalankan eksekusi berikutnya. enter untuk melanjutkanya.
    }
  }
	// system("cls");
  system("clear");  // membersihkan layar
	
  cin.get(); // memberikan jarak, supaya program tidak langsung menjalankan eksekusi berikutnya. enter untuk melanjutkanya.
	return 0; // tidak ada kembalian atau return 0
}
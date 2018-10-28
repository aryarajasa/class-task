#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	const int MAX_SIZE = 50;
	      int count;
	
	// data barang:
	string n_barang[MAX_SIZE];	// nama
	int    h_barang[MAX_SIZE];	// harga
  int    flex;
  int    menu;

  while(1){
    cout << "MENU\n";
    cout << "[1] Tambah Data\n";
    cout << "[2] Lihat Data\n";
    cout << "[0] Exit\n";

    cout << "Masukkan Pilihan : ";

    cin >> menu;
    if(menu == 1){
      if(count != 0){
        flex = count;
      } else {
        flex = 0;
      }
      cin.get();
      for(int i = flex; i != MAX_SIZE; ++i)
      {
      
        string tmp_n_barang;
        string tmp_h_barang;
        
        // system("cls");
        
        cout << "Nama : ";
        getline(cin, tmp_n_barang);
        
        if(tmp_n_barang == "")
          break;
        
        n_barang[i] = tmp_n_barang;
        
        cout << "Harga: ";
        getline(cin, tmp_h_barang);
        h_barang[i] = stoi(tmp_h_barang);
        count++;
      }

    } else if(menu == 2) {
      if(count != 0){
        cin.get();
        cout << "\n-------------------------\n";
        cout << setw(3) << "NO" << setw(15) << "NAMA" << setw(7) << "HARGA";
        cout << "\n-------------------------\n";
        for(int i = 0; i != count; ++i)
        {
          cout << setw(3)  << i + 1;
          cout << setw(15) << n_barang[i];
          cout << setw(7)  << h_barang[i];
          cout << endl;
        }
        cout << "-------------------------\n";
      } else {
        cin.get();
        cout << "Data masih kosong\n";
        cin.get();
      }
    }
  }
	// system("cls");
	
	
  cin.get();
	return 0;
}
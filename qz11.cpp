#include <iostream> // untuk input output
#include <iomanip> // untuk fungsi setw agar tampilan rapi
#include <string> //umtuk tipe data string

using namespace std; //Supaya tidak perlu menulis std:: di tiap fungsi

struct Mahasiswa { //Struktur untuk menyimpan data mahasiswa
    string npm,nama,kota,sekolah; //Menyimpan npm,nama,kota tempat tinggal mahasiswa,sekolah asal mahasiswa
};

int main (){
    Mahasiswa mhs[100];//penggunaan array untuk maksimal 100 dta mahasiswa
    int n;  //Variabel untuk menyimpan jumlah mahasiswa yang diinput
    string namaPembuat; //variael untuk nama pembuat program di akhir program

    cout << "Masukkan jumlah data mahasiswa yang ingin anda simpan:";
    cin >> n; //input jumlah mahasiswa
    cin.ignore ();
//Bagian input jumlah data mahasiswa

    for (int i =0;i < n;i++){ //looping untuk menginput data hingga jumlah data yang telah ditentukan
        cout << "Data mahasiswa ke -" << i +1 << endl; //Menampilkam urutan mahasiswa
        cout << "Masukkan nama mahasiswa:";
        getline (cin, mhs[i].nama); // Agar bisa membaca nama setelah spasi
        cout << "Masukkan npm mahasiswa:";
        getline (cin, mhs[i].npm); //Input npm mahasiswa
        cout << "Masukkan kota asal mahasiswa:";
        getline (cin, mhs[i].kota);//input kota asal mahasiswa
        cout << "Masukkan sekolah asal mahasiswa:";
        getline (cin,mhs[i].sekolah); //input sekolah asal mahasiswa
        cout << endl;}


//Tampilkan semua data dalam bentuk tabel
cout << "\n\nDATA MAHASISWA \n\n";
cout << left << setw (15) << "NPM"
     << setw (20) << "NAMA"
     << setw (20) << "KOTA TINGGAL"
     << setw (25) << "ASAL SEKOLAH" << endl;
    
    cout << "--------------------------------------------------------------------------------" << endl; //header tabel

for (int i =0;i < n;i++){
    cout << left << setw (15) << mhs[i].npm << setw (20) << mhs[i].nama << setw (20) << mhs[i].kota << setw (25) << mhs[i].sekolah << endl;
}
cout << endl;
    //Menampilkan berdasarkan kota
    string cariKota; 

    cout << "Masukkan kota yang ingin ditampilkan:";
    cin >>cariKota;

    cout << "\n=== Mahasiswa yang tinggal di " << cariKota << " ===\n";
    cout << left << setw (15) << "NPM" << setw (20) << "NAMA" << setw (20) << "KOTA TINGGAL" << setw (25) << "ASAL SEKOLAH" << endl;
    cout << "------------------------------------------------------------" << endl;

    bool ditemukan = false;

    for (int i =0; i < n;i++){
        if (mhs[i].kota == cariKota){
               cout << left << setw(15) << mhs[i].npm
                 << setw(20) << mhs[i].nama
                 << setw(25) << mhs[i].sekolah << endl;
            ditemukan = true;
        }
    }
if (!ditemukan)
cout << "Tidak ada mahasiswa yang tinggal di kota " << cariKota << endl;

//Penamaan Creator program
namaPembuat = "Marssello Hotasi";

cout << "Program ini dibuat oleh " << namaPembuat;

}

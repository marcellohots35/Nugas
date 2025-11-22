#include <iostream>
#include <string>

using namespace std;

string  tentukan (int x){
if (x < 75){
    return "Tidak Lulus";
    }else{
return "Lulus";
    }
}

void Mahasiswa (string& x,int& y){

    cout << "Masukkan nama  :";
    getline (cin, x);
    cout << "Masukkan nilai:";
    cin >> y;
    cout << endl;
    cout << "Nama:  " << x << endl;
    cout << "Nilai: " << y << endl;
    cout << "Status:    " << tentukan(y)<<endl;
}

int main (){
    string nama;
    int nilai;
    Mahasiswa(nama,nilai);

} 
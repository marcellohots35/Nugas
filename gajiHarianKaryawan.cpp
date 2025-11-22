#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double transport(int x,int y){
    if (x >= 9){
    y += 4000;}
    return y;
    
}
double pokok(int x){
    return x * 2000;
    }
double lembur(int x,int y){
    if (x > 7){
       y += (x - 7) * 3000;
    }
    return y;
}
double makan(int x,int y){
    if (x >= 8){
        y += 3500;
    }
    return y;
}


void cetak(string& x,double& y,double& z,double& a){
    cout << "Masukkan nama:";
    cin >> x;
    cout << "Masukkan jumlah jam kerja:";
    cin >> y;
    a = pokok (y);
    cout << string (25, '=') << endl;
    cout << "RINCIAN GAJIAN KARYAWAN" << endl;
    cout << string (25, '=') << endl;
    cout << "Nama            :" << x << endl;
    cout << "Jam kerja       :" << y << endl;
    cout << "Gaji pokok      :" << pokok(y) << endl;
    cout << "Lembur          :" << lembur(y,0) << endl;
    cout << "Uang Makan      :" << makan(y,0) << endl;
    cout << "Transport       :" << transport(y,0) << endl;
double uangLembur = lembur (y,0);
double uangMakan = makan (y,0);
double uangTransport = transport (y,0);

    z = a + uangLembur + uangMakan + uangTransport;
    cout << "Total gaji      :" << z; }

    int main (){
        double gaji,total,jam;
        string nama;
        cetak(nama, jam,total,gaji);

    }

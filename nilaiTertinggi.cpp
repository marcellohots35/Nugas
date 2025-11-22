#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Mhs
{
    string nama;
    int nilai;

};

void inputData(Mhs &m){
    cout << "Masukkan nama mahasiswa:";
    cin >> m.nama;
    cout << "Masukkan nilai mahasiswa:";
    cin >> m.nilai;
}

void tampilData(Mhs m[],){
    cout << 
}

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    // membuka file dalam mode menulis
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");
    cout << ">= Menulis file, \'q\' untuk keluar" << endl;
    // unlisted loop untuk menulis
    while (true) {
        cout << " -";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
    }
}
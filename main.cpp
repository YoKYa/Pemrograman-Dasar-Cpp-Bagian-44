#include <iostream>
#include <fstream> // Library Ofstream, Ifstream dan FStream(Keduanya)
#include <string> // Library String 
 
using namespace std;

int main(){
    system("cls");
    // Ofstream adalah sebuah kelas yang digunakan untuk menulis sebuah fil
    // Deklarasi
    ofstream File;
    string Tulisan; 
    
    // ios::out
    File.open("A.txt", ios::out); // Membuka sebuah file jika tidak ada maka dibuatkan secara otomatis
    cout << "Tuliskan pada A.txt : ";
    getline(cin, Tulisan);
    File << Tulisan;
    File.close(); // Jangan lupa setelah open maka di close 

    // ios::trunc
    File.open("B.txt", ios::trunc); // File akan ditimpa sebelum membuka file
    cout << "Tuliskan pada B.txt : ";
    getline(cin, Tulisan);
    File << Tulisan;
    File.close(); // Jangan lupa setelah open maka di close 

    // ios::append
    File.open("C.txt", ios::app); // Membuka sebuah file jika tidak ada maka dibuatkan secara otomatis
    cout << "Tuliskan pada C.txt : ";
    getline(cin, Tulisan);
    File << Tulisan << "\n";
    File.close(); // Jangan lupa setelah open maka di close 


    cout << "Selesai ditulis";
    cin.get();

    return 0;
}
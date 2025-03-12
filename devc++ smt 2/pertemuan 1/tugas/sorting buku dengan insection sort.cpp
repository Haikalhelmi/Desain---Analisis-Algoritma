#include <iostream>
#include <string>
using namespace std;

void insertionSort(string arr[], int n) { //mengurutkan array yang berisi string (judul buku)
    for (int i = 1; i < n; i++) {
        string key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int jumlahBuku; //mendeklarasikan variabel buku yang ingin diurutkan
    cout << "Masukkan jumlah buku: "; 
    cin >> jumlahBuku; //digunakan untuk membaca input jumlah buku dari pengguna
    cin.ignore();

    string *judulBuku = new string[jumlahBuku];

    cout << "Masukkan judul buku (1 baris per buku):" << endl;
    for (int i = 0; i < jumlahBuku; i++) {
        getline(cin, judulBuku[i]);
    }

    insertionSort(judulBuku, jumlahBuku);

    cout << "\nDaftar buku setelah diurutkan (Ascending A-Z):" << endl;
    for (int i = 0; i < jumlahBuku; i++) {
        cout << judulBuku[i] << endl;
    }

    delete[] judulBuku;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "==============================================" << endl;
    cout << "                   KELOMPOK M" << endl;
    cout << "               TEKNIK INFORMATIKA" << endl;
    cout << "             ALGORITMA & PEMROGRAMAN" << endl;

    // Informasi Anggota
    cout << "==============================================" << endl;
    cout << "                  NAMA ANGGOTA" << endl;
    cout << "==============================================" << endl;

    // Informasi Pribadi 1
    string nama1 = "Ahkmad Kholil Baidhawi";
    string nim1 = "2023310091";
    string jurusan1 = "Teknik Informatika";
    string prody1 = "Informatika";

    // Tampilkan Informasi Pribadi 1
    cout << "Nama           : " << nama1 << endl;
    cout << "NIM            : " << nim1 << endl;
    cout << "Jurusan        : " << jurusan1 << endl;
    cout << "Prody          : " << prody1 << endl;
    cout << "==============================================" << endl;

    // Informasi Pribadi 2
    string nama2 = "Destrian Adi Pamungkas";
    string nim2 = "2023310013";
    string jurusan2 = "Teknik Informatika";
    string prody2 = "Informatika";

    // Tampilkan Informasi Pribadi 2
    cout << "Nama           : " << nama2 << endl;
    cout << "NIM            : " << nim2 << endl;
    cout << "Jurusan        : " << jurusan2 << endl;
    cout << "Prody          : " << prody2 << endl;
    cout << "==============================================" << endl;

       // Informasi Pribadi 3
    string nama3 = "Gelmon Ferdinant";
    string nim3 = "2023310014";
    string jurusan3 = "Teknik Informatika";
    string prody3 = "Informatika";

    // Tampilkan Informasi Pribadi 3
    cout << "Nama           : " << nama3 << endl;
    cout << "NIM            : " << nim3 << endl;
    cout << "Jurusan        : " << jurusan3 << endl;
    cout << "Prody          : " << prody3 << endl;
    cout << "==============================================" << endl;

           // Informasi Pribadi 4
    string nama4 = "M. Iqbal Fatkhul Hikam";
    string nim4 = "2023310004";
    string jurusan4 = "Teknik Informatika";
    string prody4 = "Informatika";

    // Tampilkan Informasi Pribadi 4
    cout << "Nama           : " << nama4 << endl;
    cout << "NIM            : " << nim4 << endl;
    cout << "Jurusan        : " << jurusan4 << endl;
    cout << "Prody          : " << prody4 << endl;
    cout << "==============================================" << endl;

           // Informasi Pribadi 5
    string nama5 = "Rangga Apre Dianta Sembiring Meliala";
    string nim5 = "2023310019";
    string jurusan5 = "Teknik Informatika";
    string prody5 = "Informatika";

    // Tampilkan Informasi Pribadi
    cout << "Nama           : " << nama5 << endl;
    cout << "NIM            : " << nim5 << endl;
    cout << "Jurusan        : " << jurusan5 << endl;
    cout << "Prody          : " << prody5 << endl;
    cout << "==============================================" << endl;

    int skor;

    // Meminta input dari pengguna
    cout << "Masukkan nilai karyawan : ";
    cin >> skor;

    // Menggunakan if, else if, dan else untuk menilai kinerja karyawan
    if (skor >= 90 && skor <= 100) {
        cout << "Kinerja karyawan sangat baik.";
    } else if (skor >= 80 && skor < 90) {
        cout << "Kinerja karyawan baik.";
    } else if (skor >= 70 && skor < 80) {
        cout << "Kinerja karyawan cukup.";
    } else if (skor >= 60 && skor < 70) {
        cout << "Kinerja karyawan kurang baik.";
    } else if (skor >= 0 && skor < 60) {
        cout << "Kinerja karyawan buruk.";
    } else {
        cout << "Skor tidak valid. Masukkan skor antara 0 dan 100.";
    }

    return 0;
}


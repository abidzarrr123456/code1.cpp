#include <iostream>
#include <string>
using namespace std;

// Deklarasi Struct
struct Mahasiswa {
    string nama;
    string nim;
    int persentaseAbsen;
};

int main() {
    // Array inisialisasi sementara untuk mempermudah memasukkan ke struct
    string Nama[40] = {
        "ZHAFRAN LINKY SISWARA", "GANDA SETYA RAMADHANA", "MUHAMMAD ABRAR SINURAT", "FARID ALVARO SITEPU",
        "CHARLES NATHAN MARCELINO", "ARYA AWAL ADRIANSYAH", "MUHAMMAD ANDHIKA BAGASKOR", "MOCHAMAD RIZKYKA ZAINAL R",
        "NAYLA FAUZYA KHAIRUNNISA", "NAYAGA RADITHYA", "RILLO RAIHAN DWI SATRIA", "AL FATHIR ABIMANYU GAZAAL",
        "MUHAMMAD DZAKI LUKMANUL H", "SAMUEL DIPTA YOGI TARUNA", "AHMAD DHANI NUR RIDWAN", "MUHAMMAD RAFIKI HANNAN",
        "AHMAD RADHIN PRADITYA", "MAULANA NAUFAL MAHRUS", "NABILA NURUL ALIFAH", "ABIDZAR ALGHIFARI",
        "REVAN PUTRA ANDRIAN", "TSANIA RAHMA HALIZA", "LAZHI NADRI RAMADHAN", "MUHAMMAD ZEIN",
        "NABILA SYAKIRA ANDRIANI S", "MUHAMMAD GHASSAN FIRDIAN", "NUGRAHA AKMAL YOGA", "RIFQI BHADRIKA ADWITIYA",
        "FAUZAN NUR ABDILLAH", "ANINDA MARETHANINGTYAS CE", "LUKMAN HAKIM", "RAYYA IZZATUL MILA",
        "RADEN HASBI RADHITYA NATA", "RAYHAN MUZAB FAUZAN", "GAZA RAUSHAN FIKRI", "RAYYAN NAKHLAH PRAYATA",
        "IMAN ABDI ILAHI", "DUNCAN AGASTYA KURNIAWAN", "ADAM TEGUH MAULAANAA", "RAFLI NUJJIYA MAULANA"
    };

    string NIM[40] = {
        "103012400196", "103012400278", "103012400406", "103012500025", "103012500037",
        "103012500038", "103012500044", "103012500055", "103012500071", "103012500072",
        "103012500078", "103012500088", "103012500092", "103012500099", "103012500104",
        "103012500158", "103012500217", "103012500226", "103012500236", "103012500243",
        "103012500266", "103012500276", "103012500295", "103012500304", "103012500315",
        "103012500325", "103012500331", "103012500339", "103012500349", "103012500389",
        "103012500397", "103012530009", "103012530017", "103012530021", "103012530033",
        "103012530040", "103012530045", "103012530055", "1301213218",   "1301223394"
    };

    int PresentasiAbsen[40] = {
        100, 50, 100, 100, 100, 100, 100, 100, 100, 100,
        100, 100, 100, 100, 100, 100, 100, 100, 50,  100,
        100, 100, 100, 50,  100, 100, 100, 100, 100, 100,
        100, 100, 100, 100, 50,  100, 100, 100, 50,  50
    };

    // Memasukkan data ke Array of Struct
    Mahasiswa mhs[40];
    for (int i = 0; i < 40; i++) {
        mhs[i].nama = Nama[i];
        mhs[i].nim = NIM[i];
        mhs[i].persentaseAbsen = PresentasiAbsen[i];
    }

    cout << "=== DAFTAR MAHASISWA (STRUCT) ===" << endl;
    for (int i = 0; i < 40; i++) {
        cout << i + 1 << ". " << mhs[i].nama << " | NIM: " << mhs[i].nim << " | Absen: " << mhs[i].persentaseAbsen << "%" << endl;
    }

    // Fitur Pencarian dan Perubahan Data
    string searchNIM;
    cout << "\nMasukkan NIM yang ingin diubah datanya: ";
    cin >> searchNIM;

    bool found = false;
    for (int i = 0; i < 40; i++) {
        if (mhs[i].nim == searchNIM) {
            cout << "Data ditemukan: " << mhs[i].nama << " - Absen: " << mhs[i].persentaseAbsen << "%" << endl;
            cout << "Masukkan persentase absen baru: ";
            cin >> mhs[i].persentaseAbsen;
            cout << "Data berhasil diperbarui!" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "NIM tidak ditemukan." << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    int presentasiAbsen;
    Mahasiswa* next; 
};

int main() {
    string NamaMhs = "shiddiq";
    string NIMMhs = "113100103";
    int presentasiMhs = 75;

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

    Mahasiswa* head = nullptr;
    Mahasiswa* tail = nullptr;

    for (int i = 0; i < 40; i++) {
        Mahasiswa* nodeBaru = new Mahasiswa();
        nodeBaru->nama = Nama[i];
        nodeBaru->nim = NIM[i];
        nodeBaru->presentasiAbsen = PresentasiAbsen[i];
        nodeBaru->next = nullptr;

        if (head == nullptr) {
            head = nodeBaru;
            tail = nodeBaru;
        } else {
            tail->next = nodeBaru;
            tail = nodeBaru;
        }
    }

    cout << "=== DAFTAR MAHASISWA (LINKED LIST) ===" << endl;
    Mahasiswa* temp = head;
    int no = 1;
    while (temp != nullptr) {
        cout << no << ". " << temp->nama 
             << " | NIM: " << temp->nim 
             << " | Absen: " << temp->presentasiAbsen << "%" << endl;
        temp = temp->next;
        no++;
    }

    return 0;
}



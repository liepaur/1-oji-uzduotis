#include <iostream>
#include <list>
#include <iomanip>
#include <string>
#include "studentas.h"
#include "strategijos.h"
#include "funkcijos.h"
#include "Timer.h"

using namespace std;

int main() {
    srand(time(0));
    Timer t;

    cout << "Pasirinkite failo dydį:" << endl;
    cout << "1 - 1000 įrašų" << endl;
    cout << "2 - 10000 įrašų" << endl;
    cout << "3 - 100000 įrašų" << endl;
    cout << "4 - 1000000 įrašų" << endl;
    cout << "5 - 10000000 įrašų" << endl;
    cout << "Pasirinkimas: ";

    int pasirinkimas;
    cin >> pasirinkimas;

    string failas;
    if (pasirinkimas == 1) failas = "studentai1000.txt";
    else if (pasirinkimas == 2) failas = "studentai10000.txt";
    else if (pasirinkimas == 3) failas = "studentai100000.txt";
    else if (pasirinkimas == 4) failas = "studentai1000000.txt";
    else if (pasirinkimas == 5) failas = "studentai10000000.txt";
    else {
        cout << "Tokio pasirinkimo nėra!" << endl;
        return 0;
    }

    list<Studentas> studentai;
    t.reset();
    nuskaitymas(failas, studentai);
    cout << studentai.size() << " Duomenų nuskaitymas užtruko: " << t.elapsed() << " s\n";

    cout << fixed << setprecision(4);
    cout << "\nStrategijų testavimas su list\n";

    list<Studentas> s1_studentai = studentai;
    list<Studentas> s1_vargsiukai, s1_kietiakai;
    t.reset();
    strategija1_list(s1_studentai, s1_vargsiukai, s1_kietiakai);
    cout << "1 Strategija užtruko: " << t.elapsed() << " s\n";

    list<Studentas> s2_studentai = studentai;
    list<Studentas> s2_vargsiukai;
    t.reset();
    strategija2_list(s2_studentai, s2_vargsiukai);
    cout << "2 Strategija užtruko: " << t.elapsed() << " s\n";

    list<Studentas> s3_studentai = studentai;
    list<Studentas> s3_vargsiukai;
    t.reset();
    strategija3_list(s3_studentai, s3_vargsiukai);
    cout << "3 Strategija užtruko: " << t.elapsed() << " s\n";

    return 0;
}

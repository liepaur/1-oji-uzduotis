#include "strategijos.h"
#include <algorithm>

// 1 strategija
void strategija1_vector(const vector<Studentas>& studentai, vector<Studentas>& vargsiukai, vector<Studentas>& kietiakai) {
    for (const auto& s : studentai) {
        if (baloSkaiciavimas(s) >= 5.0)
            kietiakai.push_back(s);
        else
            vargsiukai.push_back(s);
    }
}

void strategija1_list(const list<Studentas>& studentai, list<Studentas>& vargsiukai, list<Studentas>& kietiakai) {
    for (const auto& s : studentai) {
        if (baloSkaiciavimas(s) >= 5.0)
            kietiakai.push_back(s);
        else
            vargsiukai.push_back(s);
    }
}

// 2 strategija
void strategija2_vector(vector<Studentas>& studentai, vector<Studentas>& vargsiukai) {
    auto it = studentai.begin();
    while (it != studentai.end()) {
        if (baloSkaiciavimas(*it) < 5.0) {
            vargsiukai.push_back(*it);
            it = studentai.erase(it);
        } else {
            ++it;
        }
    }
}

void strategija2_list(list<Studentas>& studentai, list<Studentas>& vargsiukai) {
    auto it = studentai.begin();
    while (it != studentai.end()) {
        if (baloSkaiciavimas(*it) < 5.0) {
            vargsiukai.push_back(*it);
            it = studentai.erase(it);
        } else {
            ++it;
        }
    }
}

// 3 strategija
void strategija3_vector(vector<Studentas>& studentai, vector<Studentas>& vargsiukai) {
    auto it = std::partition(studentai.begin(), studentai.end(),
                             [](const Studentas& s) { return baloSkaiciavimas(s) >= 5.0; });
    vargsiukai.insert(vargsiukai.end(), it, studentai.end());
    studentai.erase(it, studentai.end());
}

void strategija3_list(list<Studentas>& studentai, list<Studentas>& vargsiukai) {
    auto it = std::stable_partition(studentai.begin(), studentai.end(),
                                    [](const Studentas& s){ return baloSkaiciavimas(s) >= 5.0; });
    vargsiukai.splice(vargsiukai.begin(), studentai, it, studentai.end());
}

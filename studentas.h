#ifndef STUDENTAS_H
#define STUDENTAS_H

#include <string>
#include <vector>
using namespace std;

struct Studentas{
    string vardas;
    string pavarde;
    vector<int> nd;
    int egz;
};

double baloSkaiciavimas(const Studentas& s);
double baloSkaiciavimasMediana(const Studentas& s);
bool palyginimasVardas(const Studentas &a, const Studentas &b);
bool palyginimasPavarde(const Studentas &a, const Studentas &b);
bool palyginimasGalutinis(const Studentas &a, const Studentas &b);

#endif

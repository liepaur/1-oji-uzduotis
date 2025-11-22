#ifndef STRATEGIJOS_H
#define STRATEGIJOS_H

#include "studentas.h"
#include <vector>
#include <list>
using namespace std;

// Strategija 1
void strategija1_vector(const vector<Studentas>& studentai, vector<Studentas>& vargsiukai, vector<Studentas>& kietiakai);

void strategija1_list(const list<Studentas>& studentai, list<Studentas>& vargsiukai, list<Studentas>& kietiakai);

// Strategija 2
void strategija2_vector(vector<Studentas>& studentai, vector<Studentas>& vargsiukai);

void strategija2_list(list<Studentas>& studentai, list<Studentas>& vargsiukai);

// Strategija 3 (optimizuota)
void strategija3_vector(vector<Studentas>& studentai, vector<Studentas>& vargsiukai);

void strategija3_list(list<Studentas>& studentai, list<Studentas>& vargsiukai);

#endif

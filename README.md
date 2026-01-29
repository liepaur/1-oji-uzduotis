# Studentų strategijų analizė (v1.0)

Ši programa analizuoja skirtingų konteinerių (list ir vector) darbo spartą
skirstant studentus į dvi grupes: „kietiakus“ ir „vargšiukus“.

Analizuojamos trys strategijos:
1️ Strategija – skaidymas į du naujus konteinerius.  
2️ Strategija – naudojamas vienas naujas konteineris „vargšiukai“, jie ištrinami iš pradinio konteinerio - jame lieka tik „kietiakai“
3️ Strategija – optimizuota strategija naudojant STL algoritmą - partition.

Releasai:
1. Sukūriau tris optimizacijos struktūras;
2. Pridėjau header failą
3.  Sukūriau testavimo failą su list;
4. Papildžiau testavimo failą su vector;
5. Ištaisiau klaidas
6. Sukūriau CMakeList failą

Instrukcijos:
1. Atsisiųskite visus projekto failus.
2. Sukompiliuokite projektą:
   - Unix/macOS: paleiskite
   - Arba per CMake:
       mkdir build && cd build
       cmake ..
       make
3. Paleiskite programą:
   ./testas
4. Pasirinkite failo dydį
5. Programa parodys kiekvienos strategijos vykdymo laikus su list ir su vector.

List

 | Failo dydis | *1 strategija* | *2 strategija* | *3 strategija* |
  |:---|:-------------:|:-------------:|:-------------:|
  | *1000*     | 0.0004 s | 0.0009 s | 0.0005 s|
  | *10000*    | 0.0082 s | 0.0067 s | 0.0065 s|
  | *100000*   | 0.3870 s | 0.2897 s | 0.1951 s|
  | *1000000*  | 0.3701 s | 0.2657 | 0.1959 s|
  | *10000000* | 4.8027 s | 3.7816 | 2.4161 s|


  Vector

   | Failo dydis | *1 strategija* | *2 strategija* | *3 strategija* |
  |:---|:-------------:|:-------------:|:-------------:|
  | *1000*     | 0.0004 s | 0.0225 s | 0.0007 s|
  | *10000*    | 0.0057 s | 0.9639 s | 0.0058 s|
  | *100000*   | 0.4757 s | --* s | 0.2722 s|
  | *1000000*  | 0.4744 s | --* | 0.2740 s|
  | *10000000* | 5.5918 s | --* | 3.2691 s|


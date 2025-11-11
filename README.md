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
   - Unix/macOS: paleiskite `make`
   - Arba per CMake:
       mkdir build && cd build
       cmake ..
       make
3. Paleiskite programą:
   ./testas
4. Pasirinkite failo dydį
5. Programa parodys kiekvienos strategijos vykdymo laikus su list ir su vector.

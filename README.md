# v0.3
Testavimas

Testavimo sistemos parametrai:

1. CPU: Apple M4
2. RAM: 16GB
3. HDD: SSD

Naudojant List:

 | Failai | Nuskaitymas | Skaičiavimai | Rūšiavimas | Grupavimas | Įrašymas|
  |:---|:-------------:|:-------------:|:-------------:|:-------------|
  | 1000*     | 0.0113517 s | 0.000118416 s | 0.000713125 s| 0.00390338 s|0.000274|
  | 10000*    | 0.0395278 s | 0.000412125 s | 0.00315096 s| 0.00377896 s| 0.0130712 s |
  | 100000*   | 2.8941 s | 0.0458228 s | 0.559664 s| 0.3722 s|1.29076 s|
  | 1000000*  | 2.85755 s | 0.0462768 | 0.558151 s| 0.404908 s| 1.27311 s|
  | 10000000* | 29.9028 s | 1.21904 | 6.72935 s|3.7522 s|14.577 s|


Naudojant vector
| Failai | Nuskaitymas | Skaičiavimai | Rūšiavimas | Grupavimas | Įrašymas|
  |:---|:-------------:|:-------------:|:-------------:|:-------------|
  | 1000*     | 0.0113517 s | 0.000118416 s | 0.000713125 s| 0.00390338 s|
  | 10000*    | 0.0395278 s | 0.000412125 s | 0.00315096 s| 0.00377896 s| 0.0130712 s |
  | 100000*   | 2.8941 s | 0.0458228 s | 0.559664 s| 0.3722 s|1.29076 s|
  | 1000000*  | 2.85755 s | 0.0462768 | 0.558151 s| 0.404908 s| 1.27311 s|
  | 10000000* | 29.9028 s | 1.21904 | 6.72935 s|3.7522 s|14.577 s|



1. Pridėjau failų generavimo kodą;
2. Suskaidžiau programą į atskirus failus.
3. Pridėjau laiko matavimą bendroj programoje
4. pataisiau pagrindinę programą, pridėjau laiko matavimą, pridėjau galimybę pasirinkti nuskaitomo failo dydį.
5. Pridėjau testavimo rezulatatų išvedimą.

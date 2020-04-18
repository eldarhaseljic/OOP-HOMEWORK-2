# OOP-HOMEWORK-2
Fakultet elektrotehnike Tuzla - Objektno orijentirano programiranje

Problem 1

Definirati zaglavlja i implementaciju za slijede ́ce module:

- IOrijecio.hModul za unos i ispis vektorastring-ova. Modul treba da
    ima dvije funkcije jednu za unos drugu za ispis vektora.
- dodavanje.h Modul koji sadrˇzi dvije funkcije. Prva verzija funkcije
    uzima stringa, karakterbi cijeli brojc. Funkcija nadodajeckaraktera
    bna lijevoj stani stringaa. Druga verzija funkcije uzima stringai cijeli
    brojc. Fukcija nadodajeckaraktera’ ’na lijevoj strani stringaa.
    Koristiti overloading ulaznih parametara.
- MAXrijec.hModul sadrˇzi jednu funkciju koja nalazi rijeˇc unutar vek-
    tora rijeˇci koja ima maksimalnu duˇzinu. Funkcija vra ́ca pronađenu
    rijeˇc.

Za sve funkcije u gornjim modulima odabrati najadekvatniji naˇcin za pros-
lijeđivanje parametara. Napisati glavni program koji koriste ́ci gore navedene
module ˇcita niz rijeˇci a zatim ispisuje uˇcitani niz sortiran po duˇzini rijeˇci i
poravnat na desnu stranu kao u slijede ́cem primjeru pozivanja programa.

$ ./zad1.exe
adfa
gadgdgda
dsf
adfaffadfafa
adf
ds
^Z
ds
dsf
adf
adfa
gadgdgda
adfaffadfafa


3 Problem 2

Napisati funkcijutranslate_each_elementkoja ́ce da izvrˇsi transliranje
svakog pojedinaˇcnog elementa vektora realnih brojeva. Naˇcin transliranja
se definiˇse lambda izrazom koji se prosljeđuje kao parametar funkcije. Nakon
poziva funkcije svaki od elemenata vektora realnih brojeva ́ce biti transli-
ran u novi domen. Napisati i odgovaraju ́ci program koji ́ce testirati datu
funkciju. Primjer poziva:

Unesite vektor realnih brojeva:
3.
3.
2.

Translirani vektor funkcijom ( f(x) = 2x+3 ):
9.
10.
8.

Translirani vektor funkcijom ( f(x) = -3x/2 ):
5.
5.
4.

4 Problem 3

Napisati funkciju koja modificira kontejner tipalist<int>na naˇcin da briˇse
sve elemente kontejnera koji su neparni. Napisati program koji prvo uˇcitava
listu cijelih brojeva tipalist<int>, eliminira neparne elemente pozivaju ́ci
prethodnu funkciju, a zatim ispisuje listu sortiranu od ve ́ceg ka manjem
elementu.

5 Problem 4

Minesweeper
Cilj igre je na ́ci gdje se nalaze sve mine unutarM×N polja. Da bi vam
pomogla igra vam pokaˇze broj unutar kvadrata koji govori koliko se mina
nalazi u neposrednoj blizini tog istog kvadrata. Na primjer, pretpostavimo
da imamo polje 4×4 sa 2 mine (pretstavljene sa karakterom ’*’):


### *...

### ....

### .*..

### ....

Ukoliko bi pretstavili isto polje prema gore navedenom naputku izgledalo bi:

*
2210
1*
1110

Kao ˇsto moˇzete primjetiti, svaki kvadrat moˇze imati najviˇse 8 susjednih
polja.

Ulaz
Ulaz se satoji od proizvoljnog broja polja. Prva linija svakog polja sastoji se
od dva cijela brojaminkoji pretstavljaju broj linija i kolona polja respek-
tivno. Svaki sigurni kvadrat pretstavljen je karakterom ’.’ (bez navodnika),
dok su mine pretstavljene sa karakterom ’*’ (bez navodnika). Prva linija
polja u kojoj jem = n = 0pretstavlja kraj unosa i ne bi trebala biti proce-
sirana.

Izlaz
Za svako polje potrebno je u zasebnoj liniji ispisati:

Polje #x:

Gdjexpretstavlja broj polja (poˇcevˇsi od 1). Slijede ́cihnlinija predstavl-
jaju polje u kome je karakter ’.’ zamjenjen sa brojem susjednih mina tog
kvadrata. Između svakog polja potrebno je umetnuti praznu liniju.

Primjer ulaza

4 4
*...
....
.*..
....
3 5
**...
.....
.*...
0 0


Primjer izlaza

Polje #1:
*
2210
1*
1110

Polje #2:
**
33200
1*

Napomena
Problem razbiti na funkcije za:

- parsiranje (sa provjerom validnosti koji baca razliˇcite iznimke spram
    razliˇcitih greˇsaka u parsiranju; provjeravati validnost svake linije un-
    osa),
- rijeˇsavanje problema
- ispis rijeˇsenja

Potrebno odluˇciti koju data stukturu parser treba izbaciti kao izlaz, a koju
algoritam za rijeˇsenje koristi kao ulaz.

mainu osnovi treba da izgleda kao:

t r y
{
i s p i s ( r i j e s i ( p a r s e r ( c i n ) ) )
}
c a t c h
{
}

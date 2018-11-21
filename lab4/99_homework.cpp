#include <iostream>

class Publikacja {
private:
    int rok_wydania;
public:
    Publikacja(int);
    void wypisz_p();
};

class Ksiazka : public Publikacja {
private:
    int cena;
public:
    Ksiazka(int, int);
    void wypisz_k();
};

Publikacja::Publikacja(int _rokw) {
    rok_wydania = _rokw;
}

Ksiazka::Ksiazka(int _rokw, int _cena) : Publikacja(_rokw){
    cena = _cena;
}

void Publikacja::wypisz_p() {
    std::cout << "Rok wydania: " << rok_wydania << std::endl;
}

void Ksiazka::wypisz_k() {
    wypisz_p();
    std::cout << "Cena: " << cena << std::endl;
}

int main() {
    int rw1, rw2, c2;
    std::cout << "Podaj rok wydania publikacji #1: ";
    std::cin >> rw1;
    std::cout << "Podaj rok wydania ksiazki #2: ";
    std::cin >> rw2;
    std::cout << "Podaj cene ksiazki #2: ";
    std::cin >> c2;

    Publikacja p1(rw1);
    Ksiazka k2(rw2, c2);

    std::cout << "Obiekt 1:" << std::endl;
    p1.wypisz_p();
    std::cout << "Obiekt 2:" << std::endl;
    k2.wypisz_k();

    return 0;
}

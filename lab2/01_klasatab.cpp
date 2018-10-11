#include <iostream>

const int TAB_SIZE = 9;

class KlasaTab {

private:
    int tab[TAB_SIZE];

public:
    KlasaTab(int[TAB_SIZE]);
    void drukuj();
    bool szukaj(int);
};

KlasaTab::KlasaTab(int t[TAB_SIZE]) {
    for(int i=0; i<TAB_SIZE; i++)
        tab[i] = t[i];
    std::cout << "Konstruktor" << std::endl;
}

void KlasaTab::drukuj() {
    for(int i=0; i<TAB_SIZE; i++) {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;
}

bool KlasaTab::szukaj(int n) {
    for(int i=0; i<TAB_SIZE; i++) {
        if(tab[i] == n) return true;
    }
    return false;
}

int main() {
    int tablica[TAB_SIZE], szukana;
    for(int i=0; i<TAB_SIZE; i++) {
        std::cin >> tablica[i];
    }
    KlasaTab obiekt1(tablica);
    obiekt1.drukuj();
    std::cout << "Podaj szukana liczbe: ";
    std::cin >> szukana;
    std::cout << (obiekt1.szukaj(szukana) ? "Znaleziono" : "Nie znaleziono") << std::endl;
    
    return 0;
}

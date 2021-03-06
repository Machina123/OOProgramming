#include <iostream>
#include <cassert>

const int TAB_SIZE = 9;

class KlasaTab {

private:
    int* tab;

public:
    KlasaTab(int*);
    ~KlasaTab();
    void drukuj();
    bool szukaj(int);
};

KlasaTab::KlasaTab(int* t) {
    tab = new int[TAB_SIZE];
    assert(tab);
    for(int i=0; i<TAB_SIZE; i++)
        tab[i] = t[i];
    std::cout << "Konstruktor" << std::endl;
}

KlasaTab::~KlasaTab() {
    delete[] tab;
    std::cout << "Destruktor" << std::endl;
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
    int * tablica = new int[TAB_SIZE];
    int szukana;
    std::cout << "Podaj " << TAB_SIZE << " liczb do tablicy: ";
    for(int i=0; i<TAB_SIZE; i++) {
        std::cin >> tablica[i];
    }
    
    KlasaTab * obiekt1 = new KlasaTab(tablica);
    obiekt1->drukuj();
    std::cout << "Podaj szukana liczbe: ";
    std::cin >> szukana;
    std::cout << (obiekt1->szukaj(szukana) ? "Znaleziono" : "Nie znaleziono") << std::endl;
    delete obiekt1;
    delete [] tablica;
    
    return 0;
}

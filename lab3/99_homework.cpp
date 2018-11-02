#include <iostream>
#include <cassert>

const int TAB_SIZE = 10;

class Dane {
private:
	int * tab;
public:
	Dane(int[TAB_SIZE]);
	Dane(const Dane &);
	~Dane();
	void wypisz();
};

Dane::Dane(int _tab[TAB_SIZE]) {
	tab = new int[TAB_SIZE];
	assert(tab);
	for(int i=0; i<TAB_SIZE; i++) tab[i] = _tab[i];
}

Dane::Dane(const Dane & other) {
	tab = new int[TAB_SIZE];
	assert(tab);
	for(int i=0; i<TAB_SIZE; i++) tab[i] = other.tab[i];
}

Dane::~Dane() {
	delete[] tab;
}

void Dane::wypisz() {
	for(int i=0; i<TAB_SIZE; i++) std::cout << tab[i] << " ";
	std::cout << std::endl;
} 

int main() {
	int tablica[TAB_SIZE] = {5,2,453,12,30,-89,101,222,-912,-103};
	Dane obj1(tablica);
	Dane obj2(obj1);
	
	std::cout << "Dane w obiekcie obj1: " << std::endl;
	obj1.wypisz();
	std::cout << "Dane w obiekcie obj2: " << std::endl;
	obj2.wypisz();
	
	return 0;
}
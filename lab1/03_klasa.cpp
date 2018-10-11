#include <iostream>

class Klasa1 {
	
	int n1, n2;
	
public:
	Klasa1();
	Klasa1(int, int);
	void drukuj();
	void sortowanie();
};

Klasa1::Klasa1(int a, int b) {
	n1 = a;
	n2 = b;
}

Klasa1::Klasa1() {			// konstruktor "domyslny" (ale podobno nie tak sie go nazywa)
	n1 = n2 = 0;	
}

void Klasa1::drukuj() {
	std::cout << "n1=" << n1 << " n2=" << n2 << std::endl;
}

void Klasa1::sortowanie() {
	if(n1 > n2) {
		int tmp = n1;
		n1 = n2;
		n2 = tmp;
	}
}

int main() {
	Klasa1 obiekt1(1,2);	// przy takim zapisie konstruktor odpala sie od razu
	obiekt1.drukuj();
	
	Klasa1 obiekt2;			// odpala sie ten konstruktor bez parametrow
	obiekt2.drukuj();
	
	Klasa1 obiekt3(4,2);
	obiekt3.sortowanie();
	obiekt3.drukuj();
	
	return 0;
} 
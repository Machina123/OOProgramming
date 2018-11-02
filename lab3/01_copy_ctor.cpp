// forked from https://bitbucket.org/Parzivall/cpp-3-semestr/src/1e54c438111d93c5a512c0c61a4531486a57171b/2018-10-25-konstruktorKopiuj%C4%85cy?at=master&fileviewer=file-view-default

#include <iostream>
#include <string>

class napis{
	private:
		std::string _napis;//bez using napespace std trzeba przed stringiem wpisac 'std::'
	
	public:
		napis(std::string); // konstruktor parametrowy
		napis(const napis & fnapis); // konstruktor kopiujacy
		void drukuj(); // metoda drukujaca
};

napis::napis(std::string tekst){
	_napis = tekst;
}

napis::napis(const napis & fnapis){
	_napis = fnapis._napis;
}

void napis::drukuj(){
	std::cout << "Wprowadzony napis to:\t" << _napis << std::endl;	
}


int main(){
	std::string tekst;
	std::cout << "Podaj napis:\t";
	std::cin >> tekst;
	
	napis obiekt(tekst); //utworzenie obiektu
	
	obiekt.drukuj();
	
	return 0;	
}
#include <iostream>

class ComplexNumber
{
private:
    int Re, Im ;
    
public:
    ComplexNumber( int , int ) ;
    ComplexNumber operator+(ComplexNumber);
    friend ComplexNumber operator- (ComplexNumber, ComplexNumber);
    friend std::ostream& operator<< (std::ostream&, ComplexNumber);
    void print();
};

ComplexNumber::ComplexNumber( int m , int n ) {
    Re = m ;
    Im = n ;
}

// Przeciążanie operatora dodawania jako metoda klasy
ComplexNumber ComplexNumber::operator+(ComplexNumber z0 ) {
    int _Re, _Im;
    _Re = Re + z0.Re ;
    _Im = Im + z0.Im ;
    return ComplexNumber( _Re , _Im ) ;
}

// Przeciążanie operatora odejmowania z wykorzystaniem funkcji zaprzyjaźnionej
ComplexNumber operator- (ComplexNumber z1, ComplexNumber z2) {
    ComplexNumber z3(0,0);
    z3.Re = z1.Re - z2.Re;
    z3.Im = z1.Im - z2.Im;
    return z3;
}

void ComplexNumber::print() {
    std::cout << "ComplexNumber(" << Re << ", " << Im << ")" << std::endl;
}

// Przeciążenie operatora wypisania na strumień
std::ostream& operator<<(std::ostream& stream, ComplexNumber num) {
    stream << "ComplexNumber(" << num.Re << ", " << num.Im << ")" << std::endl;
    return stream;
}

int main() {
    ComplexNumber z1(10,1);
    ComplexNumber z2(5,-1);
    ComplexNumber z3 = z1+z2;
    ComplexNumber z4 = z1-z2;
//  z1.print();
//  z2.print();
//  z3.print();
//  z4.print();
    std::cout << z1 << z2 << z3 << z4;
    return 0;
}

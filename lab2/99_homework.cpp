#include <iostream>

class Kwadrat {
    
private:
    float bok;
    
public:
    Kwadrat(float);
    float pole();
};

Kwadrat::Kwadrat(float _bok) {
    bok = _bok;
}

float Kwadrat::pole() {
    return bok * bok;
}

int main() {
    float bok;
    std::cout << "Podaj bok kwadratu: ";
    std::cin >> bok;
    Kwadrat kwadrat(bok);
    std::cout << "Pole kwadratu wynosi " << kwadrat.pole() << std::endl;
    return 0;
}

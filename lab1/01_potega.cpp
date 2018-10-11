#include <iostream>

void potega(float *);
void potega_ref(float &);

int main() {
	float x = 5.0f;
	potega(&x);
	std::cout << "x=" << x << std::endl;
	
	x = 5.0f;
	potega_ref(x);
	std::cout << "x=" << x << std::endl;
	
	return 0; 
}

void potega(float * x) {
	*x = (*x) * (*x) * (*x) * (*x);
}

void potega_ref(float & x) {
	x = (x * x * x * x);
}
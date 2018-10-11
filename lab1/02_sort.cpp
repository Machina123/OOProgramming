#include <iostream>

void sort(int*, int*);
void sort_ref(int&, int&);

int main() {
	int x = 5, y = 3;
	sort(&x, &y);
	std::cout << "x=" << x << " y=" << y << std::endl;
	
	x=5, y=3;
	sort_ref(x, y);
	std::cout << "x=" << x << " y=" << y << std::endl;
	return 0;
}

void sort(int* a, int* b) {
	if(*a > *b) {
		int tmp = *a;
		*a = *b;
		*b = tmp;
	}
}

void sort_ref(int& a, int& b) {
	if(a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
}

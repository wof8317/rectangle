#include <iostream>
using namespace std;

int main() {
	const double LENGTH = 8;
	const double WIDTH = 3;

	double perimeter = 2 * (LENGTH) + 2 * (WIDTH);
	double area = LENGTH * WIDTH;

	cout << "The perimeter of the rectangle is " << perimeter << endl;
	cout << "The area of the rectangle is " << area << endl;

	return 0;
}
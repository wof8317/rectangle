/*
	Rectangle: Calculates area and perimeter of a rectangle.
	Copyright (C) 2022 Felipe Woods

	This program is free software: you can redistribute it and/or modify 
	it under the terms of the GNU General Public License as published by 
	the Free Software Foundation, either version 3 of the License, or 
	(at your option) any later version.

	This program is distributed in the hope that it will be useful, 
	but WITHOUT ANY WARRANTY; without even the implied warranty of 
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the 
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License 
	along with this program. If not, see <https://www.gnu.org/licenses/>. 
*/

#include <iostream>
using namespace std;

int main() {
	// TODO: have users input length and width rather than
	// set it before compile.
	const double LENGTH = 8;
	const double WIDTH = 3;

	double perimeter = 2 * (LENGTH) + 2 * (WIDTH);
	double area = LENGTH * WIDTH;

	cout << "The perimeter of the rectangle is " << perimeter << endl;
	cout << "The area of the rectangle is " << area << endl;

	return 0;
}
#include "marks.h"

marks::marks(int m, int c) {
	mark = m;
	CFU = c;
}
int marks::getMark() const{
	return mark;
}
void marks::setMark(int m) {
	mark = m;
}
int marks::getCFU() const {
	return CFU;
}
void marks::setCFU(int c) {
	CFU = c;
}
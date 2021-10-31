#include "markBook.h"

markBook::markBook(int i){
	for (int i = 0; i < (sizeof(grades) / sizeof(grades[0])); i++) {
		grades[i].setMark(0);
		grades[i].setCFU(0);
	}
	totalCFU = 0;
}

void markBook::addMark(int m, int c) {
	bool added = false;
	for (int i = 0; i < (sizeof(grades) / sizeof(grades[0])) && !added;i++) {
		if (grades[i].getMark()==0) {
			grades[i].setMark(m);
			grades[i].setCFU(c);
			added = true;
		}
	}
	totalCFU += c;
}

int markBook::avgMarks() const{
	int avg = 0;
	for (int i = 0; i < (sizeof(marks) / sizeof(grades[0])) && grades[i].getMark()==0; i++) {
		avg = grades[i].getMark()*grades[i].getCFU();
	}
	avg = avg / totalCFU;
	return avg;
}

int markBook::howToMark(int mark, int cfu) const{
	return 0; //TODO
}
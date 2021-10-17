#include "markBook.h"

markBook::markBook(int i=0){
	for (int i = 0; i < (sizeof(marks) / sizeof(marks[0])); i++) {
		marks[i] = 0;
	}
	totalCFU = 0;
}

void markBook::addMark(int mark, int cfu) {
	bool added = false;
	for (int i = 0; i < (sizeof(marks) / sizeof(marks[0])) && !marks;i++) {
		if (marks[i]==0) {
			marks[i] = mark;
			added = true;
		}
	}
	totalCFU += cfu;
}

int markBook::avgMarks() const{
	int avg = 0;
	for (int i = 0; i < (sizeof(marks) / sizeof(marks[0])) && marks[i]==0; i++) {
		avg += marks[i];
	}
	avg = avg / totalCFU;
	return avg;
}

int markBook::howToMark(int mark) const{
	return 0; //TODO
}
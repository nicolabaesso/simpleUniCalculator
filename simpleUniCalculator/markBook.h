#include "marks.cpp"

class markBook {
private:
	marks grades[10];
	int totalCFU = 0;
public:
	markBook(int = 0);
	void addMark(int, int);
	int avgMarks() const;
	int howToMark(int, int) const;
};
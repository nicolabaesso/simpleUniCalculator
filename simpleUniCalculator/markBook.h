class markBook {
private:
	int marks[10];
	int totalCFU = 0;
public:
	markBook(int);
	void addMark(int, int);
	int avgMarks() const;
	int howToMark(int) const;
};
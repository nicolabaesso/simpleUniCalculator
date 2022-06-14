#ifndef SUBJECT_H
#define SUBJECT_H
#include <iostream>
using std::string;
class Subject{
private:
    string subject;
    int grade;
public:
    Subject(string s="Subject",int g=0);
    ~Subject()=default;
    string getSubject() const;
    int getGrade() const;
    void setSubject(const string& s);
    void setGrade(const int& g);
    Subject& operator=(const Subject& s);
    bool operator==(const Subject& s2);
};
#endif // SUBJECT_H

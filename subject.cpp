#include <iostream>
#include "subject.h"
using std::string;

Subject::Subject(string s, int g):subject(s), grade(g){}

string Subject::getSubject() const{
    return subject;
}

int Subject::getGrade() const{
    return grade;
}

void Subject::setSubject(const string &s){
    subject=s;
}

void Subject::setGrade(const int &g){
    grade=g;
}

Subject& Subject::operator=(const Subject& g){
    subject=g.subject;
    grade=g.grade;
    return *this;
}

bool Subject::operator==(const Subject &g2){
    return subject==g2.subject && grade==g2.grade;
}

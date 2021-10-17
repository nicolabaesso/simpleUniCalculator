#include <iostream>
#include "markBook.h"

int main(){
    markBook trial(0);
    int mark = 0;
    int cfu = 0;
    std::cout << "Hello World!\n";
    std::cout << "Please enter 3 mark with CFU's";
    int i = 0;
    while (i!=3) {
        std::cin>>mark;
        std::cin>>cfu;
        trial.addMark(mark,cfu);
        i++;
    }
    int avg = trial.avgMarks();
    std::cout << "Your average:"+avg;
    std::cout << "Enter to exit\n";
    std::cin.get();
}

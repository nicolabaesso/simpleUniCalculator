#include <iostream>
#include "markBook.cpp"

using std::cout;
using std::cin;
using std::endl;

void addMarkMain(markBook& t, int n) {
    int mark = 0;
    int cfu = 0;
    cout << "Please enter "<<n<<" marks with CFU's" << endl;
    int i = 0;
    while (i != n) {
        cin >> mark;
        cin >> cfu;
        t.addMark(mark, cfu);
        i++;
    }
    cout << n << " marks succesfully added!" << endl;
}

void avgMain(markBook& t) {
    int avg = t.avgMarks();
    cout << "Your average:" + avg << endl;
}

int main(){
    markBook trial(0);
    bool exit = false;
    int menu = 0;
    cout << "Welcome user!" << endl;
    cout << "Please enter one of the numbers shown below:" << endl;
    cout << "1- Enter your marks to the mark book" << endl;
    cout << "2- Get the average score of your marks" << endl;
    cout << "3- Exit" << endl;
    while (!exit) {
        cin >> menu;
        switch (menu) {
        case 1:
            cout << "How many marks would you like to insert?" << endl;
            cin >> menu;
            addMarkMain(trial,menu);
            break;
        case 2:
            avgMain(trial);
            break;
        case 3:
            return 0;
            break;
        default:
            cout << "Not a valid option, please retry." << endl;
        }
        menu = 0;
    }
}

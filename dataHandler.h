#ifndef DATAHANDLER_H
#define DATAHANDLER_H
#include <vector>
#include "subject.h"
#include <QString>

class FileHandler;

using std::vector;
class DataHandler{
private:
    string title;
    vector<Subject> dataOnFile;
    friend class FileHandler;
public:
    DataHandler(string t="");
    ~DataHandler()=default;
    DataHandler& operator=(const DataHandler& dh);
    void insertData(const Subject& d);
    void editData(const Subject& d,const int& at);
    void deleteData(const int& at);
    void setTitle(const string& t);
    const vector<Subject>& getDataOnFile() const;
    const string& getTitle() const;
    double getMinData();
    double getMaxData();
};
#endif // DATAHANDLER_H

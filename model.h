#ifndef MODEL_H
#define MODEL_H
#include "fileHandler.h"
class Model{
private:
    FileHandler file;
public:
    Model();
    DataHandler& readFile(const QString& path);
    void saveFile();
    DataHandler& getData();
    void setData(const DataHandler& d);
    void saveNewFile(const QString& path);
    void editData(const DataHandler& dh);
    void deleteData(const int& index);
    void setTitle(const QString& title);
    void addData();
};

#endif // MODEL_H

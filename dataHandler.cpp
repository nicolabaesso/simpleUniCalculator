#include <vector>
#include "dataHandler.h"

DataHandler::DataHandler(string t):title(t){}

const vector<Subject> &DataHandler::getDataOnFile() const{
    return dataOnFile;
}

const string& DataHandler::getTitle() const{
    return title;
}

double DataHandler::getMinData(){
    if(dataOnFile.size()==0){
        return 0;
    }
    else{
        double min=dataOnFile.at(0).getGrade();
        bool inserted=false;
        auto it=dataOnFile.begin();
        for(;!inserted && it!=dataOnFile.end();++it){
            if((*it).getGrade()<min){
                min=(*it).getGrade();
            }
        }
        return min;
    }
}
double DataHandler::getMaxData(){
    if(dataOnFile.size()==0){
        return 1;
    }
    else{
        double max=dataOnFile.at(0).getGrade();
        bool inserted=false;
        auto it=dataOnFile.begin();
        for(;!inserted && it!=dataOnFile.end();++it){
            if((*it).getGrade()>max){
                max=(*it).getGrade();
            }
        }
        return max;
    }
}

void DataHandler::setTitle(const string& t){
    title=t;
}

void DataHandler::insertData(const Subject& d){
    dataOnFile.push_back(d);
}

void DataHandler::editData(const Subject& d, const int& at){
    dataOnFile.at(at)=d;
}

void DataHandler::deleteData(const int& at){
    Subject dataToDelete=dataOnFile.at(at);
    bool deleted=false;
    auto it=dataOnFile.begin();
    for(;!deleted && it!=dataOnFile.end();++it){
        if(*it==dataToDelete){
            dataOnFile.erase(it);
            deleted=true;
        }
    }
}

DataHandler& DataHandler::operator=(const DataHandler& dh){
    if(this != &dh){
        title=dh.title;
        dataOnFile=dh.dataOnFile;
    }
    return *this;
}

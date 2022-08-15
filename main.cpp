#include <iostream>
#include <vector>
#include <QCoreApplication>
#include <sstream>
using namespace std;

int main()
{
    string strArr[] ={"efgasd","abc,defg,efg,asd"};

    vector<vector<string>> v(strArr->begin(),strArr->end()) ;
    vector<string> sVec;

    string elements = strArr[1];

    std::stringstream ss(elements);
    string str;

    while(std::getline(ss, str, ',')) {
        sVec.push_back(str);
    }
    for(int i=0; i<sVec.size();i++){
        for(int j=0;j<sVec.size();j++){
            if(sVec[i]+sVec[j]== strArr[0] || sVec[j]+sVec[i]== strArr[0]){
                cout<<"solution :"<<sVec[i]+","+sVec[j] << endl;;
                return 0;
            }
        }
    }

}

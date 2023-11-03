#include <iostream>
#include<fstream>
#include<sstream>
#include<vector>

using namespace std;

struct PersonInfo{
    string name;
    vector<string> phones;
};

int main(){
    string file;
    ifstream fin(file);
    string line, word;
    vector<PersonInfo> people;

    istringstream record;

    while(getline(fin,line)){
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while(record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }

}
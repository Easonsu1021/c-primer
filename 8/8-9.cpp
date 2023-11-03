#include <iostream>
#include<fstream>
#include<sstream>
#include<vector>

using namespace std;

istream& read(istream& in){
    string word;
    while(in >> word){
        
        cout << word ;
    }
    in.clear();
    return in;
}

void readv(string file ){
    ifstream fin(file);
    vector<string> vs;
    string line;
    
    while(getline(fin,line)){
        vs.push_back(line);
    } 
    
    
    for(const auto &s:vs){
        istringstream word(s);
        string str;
        while(word >> str){
            cout << str << ' ';
        }
    }
}

int main(){
    istringstream is("hello");
    read(is);

    

}
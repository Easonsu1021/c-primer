
#include <iostream>
using namespace std;



istream& s( istream& in){
    string str;
    while(in >> str){
        cout << str << endl;    
        cout << in.eof() << endl;
        cout << in.fail() << endl;
        cout << in.bad() << endl;
        cout << in.good() << endl;
        cout << in.rdstate() << endl;
    }
    in.clear(); // ���]��Ƭy
    return in;
}


int main(){    
  
s(cin);
   
    
    
}
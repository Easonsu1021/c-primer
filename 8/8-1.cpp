
#include <iostream>
using namespace std;



istream& s( istream& in){
    string str;
    while(in >> str){
<<<<<<< HEAD
        cout << str << endl;    
=======
        cout << str << endl;
>>>>>>> 9744a739bd194b65dd47663a684105c62dce2092
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
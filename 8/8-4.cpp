#include <iostream>
#include<fstream>
#include<vector>

using namespace std;
 
int main() 
{   
    ifstream input;
    input.open("test.txt", ifstream::in);
    
    if(input){
        cout << "true" << ' ';
    }                                                                       
    else{
        cout << "false" << ' ';
    }
    

    vector<string> vs = {};
    string s;
    while(getline(input , s)){ // 讀一行
        vs.push_back(s);
        cout << s ;
    }
    while(input >> s){ // 讀一個字
        vs.push_back(s);
        cout << s ;
    }

    for (const auto &i : vs){
        cout << i << ' ';
    }
    
    input.close();
}
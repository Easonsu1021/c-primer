#include<iostream>
#include<list>
#include<deque>
#include<vector>

using namespace std;

int main(){


    string s ;

    deque<string> qs{};
    list<string> l{};
    while(cin >> s){
        qs.push_back(s);
        l.push_back(s);
    }
    for(auto i=qs.begin(); i!=qs.end();i++){
        cout << *i;
    }
    for(auto i=l.begin(); i!=l.end();i++){
        cout << *i;
    }


}
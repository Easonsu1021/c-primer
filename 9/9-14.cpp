#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main(){
    list<const char*> ls = { "a", "b", "c", "d", "e"};
    vector<string> v = {} ;

    v.assign(ls.begin(), ls.end());
    for(const auto &pair:v){
        cout << pair;
    }
}
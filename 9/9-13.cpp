#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){

    list<int> l = {0,1,2,3,4,5,6,7};
    vector<int> v ={0,1,2,3,4,5,6,7};
    vector<double> vd = {l.begin(),l.end()};
    vector<double> vd1 = {v.begin(),v.end()};


}
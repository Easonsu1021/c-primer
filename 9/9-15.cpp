#include<iostream>
#include<list>
#include<vector>

using namespace std;

bool comparevv(vector<int> a, vector<int> b){
    return a == b;
}
bool comparelv(list<int> l, vector<int> v) {

    auto lb = l.begin();
    auto vb = v.begin();
    while(lb != l.end() && vb != v.end()){
        if(*lb != *vb)
            return false;
        lb++; vb++;
    }
    return true;
}

int main(){
    list<int> l ={1,2,3,4,5,6,7};
    vector<int> v = {1,2,3,4,5,7};

    cout << comparelv(l,v) << endl;

}
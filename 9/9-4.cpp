#include<iostream>
#include<vector>
using namespace std;

int tell(vector<int>::const_iterator b ,vector<int>::iterator e ,int num = 5){
    while(b++ != e){
    if(*b == num)
        return 1;
   } 
   return 0;
}

vector<int>::const_iterator iter(vector<int>::iterator b ,vector<int>::iterator e ,int num = 5){
    while(b++ != e){
    if(*b == num)
        return b;
   }
}

int main(){
    vector<int> number= {0,1,2,3,4,5,6,7,8,9};
    cout << tell(number.begin(),number.end());
   
}
 
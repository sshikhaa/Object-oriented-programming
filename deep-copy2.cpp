#include<bits/stdc++.h>
using namespace std;

class DS{
public:
    int *arr;
    int x,y,z;
    DS(){
        arr = new int[5];
    }
    DS(DS &rhs){
        arr = new int[5];
        x = rhs.x;
        y = rhs.y;
        for(int i = 0 ; i < 5; ++i)arr[i] = rhs.arr[i];
    }

};


int main(){
    DS a;
    for(int i = 0; i < 5; ++i){
        a.arr[i] = i+1;
    }
    DS b = a;
    for(int i = 0; i < 5; ++i){
        b.arr[i] = 5-i;
    }
    for(int i = 0; i < 5; ++i){
        cout << a.arr[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 5; ++i){
        cout << b.arr[i] << " ";
    }
    cout << endl;
    return 0;
}

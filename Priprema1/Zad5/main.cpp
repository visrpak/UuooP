#include <iostream>
using namespace std;

int a = 5;

void promijeni(int a){
    a = 6;
}

int main(){
    promijeni(a);
    cout << a << endl;
}

// Ispisuje 5

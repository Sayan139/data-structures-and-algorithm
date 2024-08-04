#include <iostream>
using namespace std;
void printpattern1(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << "* " ;
        }
        cout << endl;
    }
}
void printpattern2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "* " ;
        }
        cout << endl;
    }
}
void printpattern3(int n){
    for(int i=0; i<n; i++){
        for(int j=2; j<n-i+1; j++){
            cout << " ";
        }
        for(int j =0; j<2*i+1; j++){
            cout << "*";
        }
        for(int j=0; j<n-i+1; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void printpattern4(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int j =0; j<2*n-(2*i+1); j++){
            cout << "*";
        }
        for(int j=0; j<i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    printpattern3(n);
    printpattern4(n);
}
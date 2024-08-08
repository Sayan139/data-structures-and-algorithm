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
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            cout << " ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void printpattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            cout << " ";
        }
        for(int j=1; j<=2*n-(2*i-1); j++){
            cout << "*";
        }
        cout << endl;
    }
}
void printpattern5(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void printpattern6(int n){
    for(int i=0; i<n; i++){
        int start =0;
        if(i%2==0) start =1;
        else start =0;
        for(int j=0; j<=i; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}
void printpattern7(int n){
    int space = 2 * (n-1);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        for(int j=1; j<=2 * space; j++){
            cout << " ";
        }
        for(int j=i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
        space -= 2;
    }
}
void printpattern8(int n){
    int start = 2 * (n-1);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        for(int j=1; j<=start; j++){
            cout << " " ;
        }
        for(int j=i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
        start -= 2;
    }
}
void printpattern9(int n){
    int start =1;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i; j++){
            cout << start << " ";
            start ++;
        }
        cout << endl;
    }
}
void printpattern10(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << (char)(64+j) << " ";
        }
        cout << endl;
    }
}
void printpattern11(int n){
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << (char)(64+j) << " ";
        }
        cout << endl;
    }
}
void printpattern12(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << (char)(64+i) << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    printpattern12(n);
}
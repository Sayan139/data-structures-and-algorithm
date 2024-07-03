#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector <int> quadraticroots(int a,int b,int c){
    vector <int> roots;
    int d = pow(b,2)-4*a*c;
    if(d>0)
    {
        int root1 = floor((-b+sqrt(d))/(2*a));
        int root2 = floor((-b-sqrt(d))/(2*a));
        roots.push_back(max(root1,root2));
        roots.push_back(min(root1,root2));
    }else if(d==0){
        int root = floor(-b/(2*a));
        roots.push_back(root);
    }
    else
    {
        roots.push_back(-1);
    }
    return roots;
}
int main(){
    int a,b,c;
    cout << "enter the first term: ";
    cin >> a;
    cout << "enter 2nd term: ";
    cin >> b;
    cout << "enter last term: ";
    cin >> c;
    vector <int> roots = quadraticroots(a,b,c);
    if(roots.size()==2){
        cout << "so the roots are: " << endl;
        for(int i=0; i<=1; i++){
            cout << "so root " << i+1 << " is: " << roots[i] << endl ;
        }
    }else if(roots.size()==1 && roots[0]!= -1){
        cout << "the root is : " << roots[0] << endl;
    }
    else
    {
        cout << "there is no real roots" << endl;
    }
}
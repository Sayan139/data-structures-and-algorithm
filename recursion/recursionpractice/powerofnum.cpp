#include <iostream>
using namespace std;
long long power(int x,int y){
	long long root =1000000007;
	long long res =1ll;
	long xx = x;
	while(y>0){
		if(y&1)
			res= (res*xx)%root;
		y=y>>1;
		xx = (xx*xx)%root;
	}
	return res;
}
int main(){
	long long  n,r;
	cout << "enter the number :";
	cin >> n;
	cout << "enter the power of the number: ";
	cin >> r;
	cout << "the power of the reverse of the num is : " << power(n,r);
}

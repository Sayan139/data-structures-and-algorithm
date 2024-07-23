#include <iostream>
using namespace std;
long long power(long long  x,long long  y){
	long long root =1000000007; //the mod element to deal with all the values when the power exit the int range
	long long res =1ll; // here ll mean that long long  it use to store the value of 1 as the long long 
	long xx = x; //here i am storing the value of x into the long long x
	while(y>0){
		// here we are checking wheather x is odd or not in bitwise we can do it by 
		// doing y&1 as all the integers which is odd always return value which is non 0
		if(y&1)
			res= (res*xx)%root;
		y=y>>1; // here >> (right shift operator) = y/2 if the code is in this part its preety much mean
		// the number is even or it will stop in earlier condition
		// if its even we have to xx = xx*xx it save many iteration 
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

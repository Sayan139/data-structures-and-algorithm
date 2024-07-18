#include <iostream>
using namespace std;
void permute(string s ,int i=0){
	if(i==s.length()-1){ cout << s << endl; }
	for(int j=i; j<s.length(); j++){
		swap(s[i],s[j]);
		permute(s,i+1);
		swap(s[j],s[i]);
	}
}
int main(){
	string n;
	cout << "enter the string you want permutations of : ";
	cin >> n;
	permute(n);
}

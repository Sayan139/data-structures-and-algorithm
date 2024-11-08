#include <iostream>
using namespace std;
//bruite force approach of the code the tc = O(n*n) sc= O(1)
int missing(vector <int> arr){
    int n = arr.size();
    for(int i=0; i<=n; i++){
        bool ispresent = false;
        for(int j=0; j<n; j++){
            ispresent = true;
            break;
        }
        if(!ispresent){
            return i;
        }
    }
    return -1;
}
// now coming to the better  solution using hashing with tc:O(n)+O(n) sc:O(n)
int missingnum(vector <int> arr){
    int n = arr.size();
    vector <int> hash(n+1,0);
    for(int i=0; i<n; i++){
        hash[arr[i]]=1;
    }
    for(int i=0; i<=n; i++){
        if(hash[i]==0) return i;
    }
    return -1;
}
//now coming to the optimal approach first we are doing the sum method with tc:O(n) and sc:O(1) 
// this has problem this can overflow for big num
int missingnumsum(vector <int> arr){
    int sumarr = 0;
    int n = arr.size();
    int sum = n*(n+1)/2;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum-sumarr;
}
// using xor approach 
int missingnumxor(vector <int> arr){
    int n = arr.size();
    int xor1 = 0;
    int xor2 = 0;
    for(int i=0; i<n; i++){
        xor2 = xor2^arr[i];
        xor1 = xor1^(i+1);
    }return xor1^xor2;
}
#include <iostream>
using namespace std;
//bruite force approach this is the approach in which both the positive and negative are same 
vector <int> rearrange(vector <int> arr){
    int n = arr.size();
    vector <int> pos;
    vector <int> neg;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }
    for(int i=0; i<n/2; i++){
        arr[2*i] = pos[i];
        arr[2*i+1] = neg[i];
    }
    return arr;
}
// optimal apprach for the question the above question with tc:O(2n) in this approach we will do it ti O(n) 
// and the sc:O(n) is same for both the questions
vector <int> rearrangesigns(vector <int> arr){
    int n = arr.size();
    vector <int> ans ;
    int positive = 0,negative = 1;
    for(int i =0; i<n; i++){
        if(arr[i] < 0){
            ans[negative] = arr[i];
            negative +=2;
        }else{
            ans[positive] = arr[i];
            positive +=2;
        }
    }
    return ans;
}
// now coming to the type 2 of the questions where we have difference balance of postive and negative first we got 
// that both postive and negaitve will be same now we are getting both are not going to same so the answer of the 
// questions will be 
vector <int> rearrangethearray(vector <int> arr){
    int n = arr.size();
    vector <int> pos;
    vector <int> neg;
    for(int i =0; i<n; i++){
        if(arr[i] > 0){
            pos.push_back(arr[i]);
        }else neg.push_back(arr[i]);
    }
    if(pos.size() < neg.size()){
        for(int i=0; i<pos.size(); i++){
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }
        int index = pos.size() * 2;
        for(int i = pos.size(); i<neg.size(); i++){
            arr[index] = neg[i];
            index++;
        }
    }
    else{
        for(int i =0; i<neg.size(); i++){
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }
        int index = neg.size()*2;
        for(int i = neg.size(); i<pos.size(); i++){
            arr[index] = pos[i];
            index++;
        }
    }
    return arr;
}
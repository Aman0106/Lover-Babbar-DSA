#include<iostream>
using namespace std;

int main(){
    int i=0,n=4;
    while(i<n){
        int j=0;
        while(j<i){
            cout<<" ";
            j++;
        }
        while(j<n){
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
}
#include<iostream>
using namespace std;

int main(){

    int i=1,n=4;
    
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=i){
            cout<<j++;
        }
        j=i-1;
        while(j>=1){
            cout<<j--;
        }
        i++;
        cout<<endl;
    }

    return 0;
}
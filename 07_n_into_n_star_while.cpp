#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int i = 0;
    while(i<n){
        int j = 0;
        while(j < n){
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }
}
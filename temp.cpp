#include<iostream>
using namespace std;

int main(){
    long int temp=0;
    for ( int i=0;i<1000000000;i++){
        temp++;
    }
    cout<<"counting completed"<<temp;
}
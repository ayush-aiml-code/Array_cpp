#include<iostream>
using namespace std;
int main(){
    int value , j;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter a  postion: ";
    cin>>j;
    cout<<"Enter a value: ";
    cin>>value;
    for(int i=n;i>=j;i--){
        a[i] = a[i-1];
    }
    a[j-1] = value;
    n++;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
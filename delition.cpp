#include <iostream>
using namespace std;
int main()
{
    int n , position;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter a position of element to del: ";
    cin>>position;
    for(int i=position-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

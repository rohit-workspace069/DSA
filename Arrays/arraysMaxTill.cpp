#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int arr[n];

    for(int i; i<n; i++){
        cin>>arr[i];
    }

    int maxtilli[n];
    int max=arr[0];

    for(int j=0; j<n ;j++){
        if(arr[j]>max){
            max=arr[j];
        }
        maxtilli[j]=max;

    }

    for(int i; i<n; i++){
        cout<<maxtilli[i]<<" ";
    }
    cout<<endl;

    return 0;
}
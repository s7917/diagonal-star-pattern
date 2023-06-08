# diagonal-star-pattern
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // upper triangle print kar
    for(int i=1 ; i<=n ; i++){
        for(int j=0 ; j<n-i ;j++){
            cout<<" ";
        }
        for(int k=0 ; k<2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    // lower traingle print karo
    for(int i=n+1 ; i<=2*n-1; i++){
        for(int  j=0 ; j<i-n ; j++){
            cout<<" ";
        }
        int star= (2*(2*n-i))-1;
        for(int k=0 ; k < star ; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

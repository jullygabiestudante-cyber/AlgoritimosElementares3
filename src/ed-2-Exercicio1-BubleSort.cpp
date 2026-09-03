#include<bits/stdc++.h>
using namespace std;
int main() {


    int n,trocas = 0, temp;
    cout<<"Digite o quantidade de numeros: ";
    cin>>n;
    int num[n];
    cout<<"Digite os " << n <<" elementos: " ;
    for(int i=0;i<n;i++) {

        cin>>num[i];
    }
    for(int i=0;i < n ;i++) {
        for(int j= i+1;j < n;j++) {
            if(num[i]> num[j]) {
               temp=num[i];
                num[i]=num[j];
                num[j]=temp;
                trocas  += 1;
            }

        }
    }
    for(int i=0;i<n;i++) {
        cout<<num[i] << " ";
    }
    cout<<endl;
    cout<<"trocas = "<<trocas<<endl;


}

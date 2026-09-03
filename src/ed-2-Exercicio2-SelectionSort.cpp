#include<bits/stdc++.h>
using namespace std;
int main() {

    cout<<"Informe numero de elementos e a quantidade de   k trocas : ";
    int n , k;
    cin>>n >> k;
    int menorIndice, aux;
    int num[n];
    cout<<"Informe os " << n<<" elementos : " << endl;
    for(int i=0;i<n;i++) {
        cin>>num[i];
    }

    for(int i=0;i<n;i++) {
        menorIndice = i;
        for(int j=i+1;j<n;j++) {
            if (num[j] < num[menorIndice]) {
                menorIndice = j;

            }
        }
        if (menorIndice != i) {
            aux = num[i];
            num[i] = num[menorIndice];
            num[menorIndice] = aux;
    }


    }
    for(int i=0;i<n;i++) {
        if (k != 0) {
            cout<<num[i]<<" ";
            k--;
        }
    }
}
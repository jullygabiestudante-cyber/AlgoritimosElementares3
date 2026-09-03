#include <iostream>
using namespace std;
int main() {
    int n, cont = 0, aux,j;
    cout<<"Informe a quantidade de elementos :"<<endl;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++) cin>>num[i];

    for(int i=1;i<n;i++) {
        aux = num[i];
        j = i -1;
        while ( j >=  0 &&  num[j] >  aux) {
            num[j + 1] = num[j];
            j--;
            cont ++;
        }
        num[j+1] = aux;

    }

    cout<< cont <<endl;
}

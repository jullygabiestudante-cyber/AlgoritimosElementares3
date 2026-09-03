#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Informe a quantidade de Elementos" << endl;
    cin >> n;
    int num[n];

    int aux;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1- i; j++) {
            if (num[j] % 2 != 0 && num[j + 1] % 2 == 0) {
                aux = num[j];
                num[j] = num[j + 1];
                num[j + 1] = aux;
            } else if (num[j] % 2 == 0 && num[j + 1] % 2 == 0 && num[j] > num[j + 1]) {
                aux = num[j];
                num[j] = num[j + 1];
                num[j + 1] = aux;
            } else if (num[j] % 2 != 0 && num[j + 1] % 2 != 0 && num[j] < num[j + 1]) {
                aux = num[j];
                num[j] = num[j + 1];
                num[j + 1] = aux;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
}

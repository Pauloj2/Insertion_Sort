
#include <iostream>

using namespace std;

void insertionSort(int arr[], int n) {
    int chave, j;
    for (int i = 1; i < n; i++) {
        chave = arr[i];
        j = i - 1;

        // Move os elementos maiores que a chave para frente
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = chave;

        // Mostra o vetor após cada inserção
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

void exibirVetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {40, 1, 23, 20, 67, 44, 9, 18, 0, 99};
    int n = 10;

    cout << "Vetor antes de ordenar:\n";
    exibirVetor(arr, n);
    cout << endl;

    insertionSort(arr, n);

    cout << "\nVetor depois de ordenar com Insertion Sort:\n";
    exibirVetor(arr, n);

    return 0;
}

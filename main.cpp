#include <iostream>
using namespace std;
int main() {
    int n;
    int iMin;
    int i;

    cout << "Quanti atleti ci sono in una competizione? " << endl;
    cin >> n;
    string nomi[n], nazionali[n];
    double tempi[n];

    i = 0;
    while (i < n) {
        cout << "nome" << i + 1 << "atleta: " << endl;
        cin >> nomi[i];
        cout << "Nazionali" << i + 1 << "atleta: " << endl;
        cin >> nazionali[i];
        cout << "tempi" << i + 1 << "atleta: " << endl;
        cin >> tempi[i];
    }
    int min;

    iMin = 0;
    i = 0;
    while (i < n) {
        if (tempi[i] < tempi[iMin]) {
            iMin = i;
        }
    }
    cout << "Ha vinto: " << nomi[iMin] << ", nazionale: " << nazionali[iMin] << ", con tempo" << tempi[iMin] << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
   int n = 0, primo = 1, secondo = 1;
    cin >> n;
    if (n >= 2) {
        cout << primo << endl << secondo << endl;
        for (int i = 1; i < n - 1; i++) {
            int temp = primo;
            primo += secondo;
            secondo = temp;
            cout << primo << endl;
        }
    } else {
        cout << "errore" << endl;
    }
   return 0;
}

#include <iostream>

using namespace std;

int main() {
    int n = 5;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << j;
            cout << " STMIK ";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;

    return 0;
}


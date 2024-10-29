#include <iostream>

using namespace std;

int main() {
    int n = 5;

    int i = n;
    while (i >= 1) {
        int j = 1;
        while (j <= i) {
            cout << i;
            cout << " STMIK ";
            j++;
        }
        cout << endl;
        i--;
    }

    return 0;
}


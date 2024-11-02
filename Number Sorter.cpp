#include <iostream>
using namespace std;

int main() {
    int N1, N2, N3;
    cin >> N1 >> N2 >> N3;
    cout << "N1: " << N1 << endl;
    cout << "N2: " << N2 << endl;
    cout << "N3: " << N3 << endl;

    if (N1 > N2 && N1 < N3) {
        cout << N2 << " " << N1 << " " << N3;
    }
    else if (N2 > N1 && N2 < N3) {
        cout << N1 << " " << N2 << " " << N3;
    }
    else if (N3 > N1 && N3 < N2) {
        cout << N1 << " " << N3 << " " << N2;
    }
    else if (N1 < N2 && N1 > N3) {
        cout << N3 << " " << N1 << " " << N2;
    }
    else if (N2 < N1 && N2 > N3) {
        cout << N3 << " " << N2 << " " << N1;
    }
    else if (N3 < N1 && N3 > N2) {
        cout << N2 << " " << N3 << " " << N1;
    }
    else {
        cout << "All numbers are equal or an invalid condition.";
    }

    return 0;
}

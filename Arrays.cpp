#include <iostream>
using namespace std;

int main(){
    int a[10]={12,15,18,20,22,24,26,29,32,35};
    int b[10]={1,3,6,8,9,14,16,18,22,26};


    cout << "Array 1: ";
    for (int num : a) cout << num << " ";
    cout << endl;

    cout << "Array 2: ";
    for (int num : b) cout << num << " ";
    cout << endl;

    return 0;
}

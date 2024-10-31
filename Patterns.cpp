#include <iostream>
using namespace std;
int main(){
	int rows, no=1;
    cin >>rows;
    cout <<"Rows:" << rows << '\n';
    for (int i=1; i<=rows; i++){
        for (int j=1; j<=rows; j++){
            cout << no++ <<" ";
        }
    	cout <<'\n';
	}
    return 0;
}



//#include <iostream>
//using namespace std;
//int main(){
//	int rows, col, summ=0;
//    cin >>rows;
//    cin >>col;
//    cout <<"Rows:" << rows << '\n';
//    cout <<"Columns:" << col << '\n';
//    for (int i=1; i<=rows; i++){
//    	summ=0;
//        for (int j=1; j<=col*i; j=j+i){
//            cout << j;
//            if (j<col*i){
//                cout << "+";
//            }
//            summ=summ+j;
//        }
//    	cout <<"="<<summ<<endl;
//	}
//    return 0;
//}
//
//
//
//#include <iostream>
//using namespace std;
//int main(){
//    char letter='A';
//    int rows,cols=4;
//    cin >>rows;
//    cout <<"Rows:" << rows << '\n';
//    for (int i=1; i<=rows; i++){
//        for (int j=1; j<=cols; j++){
//            cout << letter++ <<" ";
//        }
//    	cout <<endl;
//	}
//    return 0;
//}
//
//
//
//#include <iostream>
//using namespace std;
//int main(){
//	int rows, col;
//    cin >>rows;
//    cin >>col;
//    cout <<"Rows:" << rows << '\n';
//    cout <<"Columns:" << col << '\n';
//    for (int i=1; i<=rows; i++){
//        for (int j=1; j<=col; j++){
//            cout << " *";
//        }
//        cout <<endl;
//	}
//    return 0;
//}
//
//
//
//#include <iostream>
//using namespace std;
//
//int main(){
//	int rows;
//    cin >>rows;
//    cout <<"Rows:" << rows << '\n';
//    for (int i=1; i<=rows; i++){
//        for (int j=1; j<=i; j++){
//            cout << " *";
//        }
//        cout <<endl;
//	}
//    return 0;
//}
//
//
//
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//    cin >>n;
//    cout <<"N:" << n << '\n';
//    for (int i=0; i<n; i++){
//        for (int j=0; j<i; j++)
//            cout << " ";
//        cout <<" *";
//        for (int j = 0; j<2*(n-i-1); j++)
//            cout << " ";
//        cout << " *";
//        cout <<endl;
//	}
//    return 0;
//}
//
//

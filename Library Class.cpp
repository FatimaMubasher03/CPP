
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Library{
private:
    string libraryName;
    vector<string> books;

public:
    Library(string libraryName) {
        this->libraryName = libraryName;
    }

    void addBook(string title) {
        books.push_back(title);
    }

    void removeBook(const string& title) {
        for (auto it = books.begin(); it != books.end(); ++it) {
            if (*it == title) {
                books.erase(it);
                break;
            }
        }
    }

    void printLibraryDetails() {
        cout<<"Library Name:" <<libraryName<< endl;
        cout<<"Books:" << endl;
        for (const auto& book : books) {
            cout<<"."<<book<<endl;
        }
    }

    int totalBooksCount() {
        return books.size();
    }
};

int main(){
    Library lib("Central Library");
    lib.addBook("Operating Systems");
    lib.addBook("Data Structures");
    lib.printLibraryDetails();
    cout << "Total Books: " << lib.totalBooksCount() << endl;
    lib.removeBook("Operating Systems");
    
    lib.printLibraryDetails();
    cout << "Total Books: " << lib.totalBooksCount() << endl;

    return 0;
}

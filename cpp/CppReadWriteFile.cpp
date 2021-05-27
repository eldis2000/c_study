#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream myFile;
    myFile.open("taesoo.txt", ios::in);//read
    if (myFile.is_open()) {
        string line;
        while(getline(myFile, line)) {
            cout << line << endl;
        }
        myFile.close();
    }
    /*
    myFile.open("taesoo.txt", ios::out);//write
    if (myFile.is_open()) {
        myFile << "Hello\n";
        myFile << "This is second line\n";
        myFile.close();
    }
    myFile.open("taesoo.txt", ios::app);//append
    if (myFile.is_open()) {
        myFile << "Hello2\n";
        myFile.close();
    }
    */
}

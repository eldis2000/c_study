#include <iostream>
using namespace std;

int main()
{
    int size = 12;
    float monthArray[size];// = {100,220,300,200,250};
    // index :             0    1   2   3   4

    float total = 0;
    for(int i=0; i<size; i++) {
        cout << "Enter amount for month " << i+1 << ": ";
        cin >> monthArray[i];
        total += monthArray[i];
    }

    float average = total / size;
    float inTwoYears =  average * 24;

    cout << "total = " << total << endl;
    cout << "average = " << average << endl;
    cout << "inTwoYears = " << average << endl;


}

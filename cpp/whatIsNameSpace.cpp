#include <iostream>
using std::cout;
using std::endl;
using std::string;

namespace namespace1 {
    int age = 47;
    string name = "tschoi";
}

namespace namespace2 {
    int age = 26;
}

int main() {
    cout << namespace1::age << endl;
    cout << namespace1::name << endl;
}

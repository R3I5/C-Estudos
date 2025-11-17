#include <iostream>
using namespace std;

int main() {
    const int myNum = 15;   //myNum will always be 15
    int myNum2 = 10; // error: assignment of read-only variable 'myNum' // variavel mudada apenas para mandar o erro embora.
    cout << myNum;
}

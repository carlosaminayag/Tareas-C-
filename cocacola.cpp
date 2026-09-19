#include <iostream>
#include <math.h>
using namespace std;

int num = 0;

int main() {
    system("cslear");
    while (num <= 100) {
        
        if (num % 3 == 0 && num % 5 == 0)
        {
        cout << "COCACOLA"<< endl;
        }
        else if (num % 5 == 0)
        {
        cout << "COLA"<< endl;
        }
        else if (num % 3 == 0)
        {
        cout << "COCA"<< endl;
        }
        else
        {
        cout << num << endl;
        }
        num++;
    }
    return 0;
}
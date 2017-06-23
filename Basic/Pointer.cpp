#include <iostream>
using namespace std;

void manipulate(double* pValue) {
    cout << "2. Value of double in the function: " << *pValue << endl;
    *pValue = 9.0;
    cout << "3. Value of double in the function (amended): " << *pValue << endl;
}

int main() {
    double dValue = -123.4;
    double* pdValue = &dValue;

    cout << "1. dValue: " << dValue << endl;
    manipulate(pdValue);
    cout << "4. dValue: " << dValue << endl;
    return 0;
}
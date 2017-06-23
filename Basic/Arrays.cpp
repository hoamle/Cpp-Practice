#include <iostream>

using namespace std;

int main() {

    int numArray[2][3];
    int numArray2[][3] = { {0, 1, 2}, {3, 4, 5} };
    int k = 0;

    for(int i=0;i<2;i++) {
        for (int j=0;j<3;j++) {
            numArray[i][j] = k;
            k++;
            cout << numArray[i][j] << " " << flush;
        }
        cout << endl;
    }

    cout << "numArray2" << endl;
    // cout << numArray2 << endl;
    for(int i=0;i<2;i++) {
        for (int j=0;j<3;j++) {
            cout << numArray2[i][j] << " " << flush;
        }
        cout << endl;
    }
    return 0;
}
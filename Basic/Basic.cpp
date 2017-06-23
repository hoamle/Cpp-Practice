#include <iostream>  // for cout, cin, ...
#include <iomanip>  // for "pretty" printing float
#include <iosfwd>

using namespace std;  // to shorthand for std::cout, std::endl, ...

int main()
{
    // CLASSES
    // string 
    // TODO cout won't output anything
    stringstream buffer;
    string text = "a text";
    buffer << text << flush;

    // PRIMITIVES
    char cValue = 100;
    cout << "Value of ASCII &#" << int(cValue) << ": " << cValue << endl;
    cout << "ASCII value of char \'d\': " << int('d') << endl;
    cout << "ASCII value of string \"d\": " << int("d") << endl;
    // numeric
    float fValue = 50.1;  // store 50.099998
    cout << fixed << fValue << endl;
    cout << setprecision(20) << fValue << endl;
    cout << "Size of float: " << sizeof(fValue) << " byte(s)" << endl;
    
    return 0;
}
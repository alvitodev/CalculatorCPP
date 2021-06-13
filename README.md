#include <iostream>

using namespace std;

int main()
{
    float a,b,result;
    char aritmatika;

    cout << "----C++ Calculator----- \n \n";

    //input from user
    cout << "input the first number: " ;
    cin >> a;
    cout << "select operation +,-,*,/: ";
    cin >> aritmatika;
    cout << "input the second number: " ;
    cin >> b;

    cout << "\nHasil Perhitungan: ";
    cout << a << aritmatika << b;

    //output or result
    if (aritmatika == '+'){
        result = a + b;
    } else if (aritmatika == '-'){
        result = a - b;
    } else if (aritmatika == '*'){
        result = a * b;
    } else if (aritmatika == '/'){
        result = a / b;
    } else{
        cout << "unknown operation" << endl;
    }

    cout << "=" << result << endl;
    


    cin.get();
    return 0;
}

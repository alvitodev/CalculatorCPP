#include <iostream>

using namespace std;

int main()
{
    float a,b,result;
    char aritmatika;

    cout << "----- C++ Calculator ----- \n \n";

    // Input from user
    cout << "Insert the first number: " ;
    cin >> a;
    cout << "Select operation : [+, -, *, /]";
    cin >> aritmatika;
    cout << "Insert the second number : " ;
    cin >> b;

    cout << "\nCalculating Result : ";
    cout << a << aritmatika << b;

    // Output or Result
    if (aritmatika == '+'){
        result = a + b;
    } else if (aritmatika == '-'){
        result = a - b;
    } else if (aritmatika == '*'){
        result = a * b;
    } else if (aritmatika == '/'){
        result = a / b;
    } else{
        cout << "Unknown operation!" << endl;
    }

    cout << "=" << result << endl;
    


    cin.get();
    return 0;
}

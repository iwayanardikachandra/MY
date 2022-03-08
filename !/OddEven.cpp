#include <iostream>
using namespace std;

//Void Procedure//
void evenNumbers(int n)
{
    int i;
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            cout << i << " ";
    }
    cout << endl;
}

void oddNumbers(int n)
{
    int i;
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0)
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the value of N (limit): ";
    cin >> n;
    
    cout<<"\n";

    cout << "EVEN numbers are...\n";
    evenNumbers(n);
    
    cout<<"\n";

    cout << "ODD numbers are...\n";
    oddNumbers(n);

    return 0;
}

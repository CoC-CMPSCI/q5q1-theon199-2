#include <iostream>
using namespace std;

int main()
{
    int n;
    // TODO: ask user for input
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", 65+(j));
            cout << " ";
        }
        cout << endl;
    }


    return 0;
}

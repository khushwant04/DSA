#include<iostream>
using namespace std;


int main()
{
    int n;
    cout << "Enter then number for the pattern: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (char j = 1; j <= n; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
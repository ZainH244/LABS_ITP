#include <iostream>
using namespace std;

bool check(string a, string b, int i = 0, int j = 0) {
    if (i == a.length())
        return true;

    if (j == b.length())
        return false;
    if (a[i] == b[j])
        return check(a, b, i + 1, j + 1);


    return check(a, b, i, j + 1);
}

int main() {
    string a, b;
    cout << "Enter first string : ";
    cin >> a;
    cout << "Enter second string: ";
    cin >> b;

    if (check(a, b))
        cout << a << " is a subsequence of " << b;
    else
        cout << a << " is NOT a subsequence of " << b;

    return 0;
}

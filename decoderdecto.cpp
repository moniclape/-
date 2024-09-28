#include <bits/stdc++.h>
using namespace std;
int main() {
    string binary;
    cin >> binary;
    int decimal = 0, size = binary.size();
    for (int i = 0; i < binary.size(); ++i) {
        if (binary[size - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }
    cout << decimal;
    return 0;
}
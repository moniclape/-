#include <bits/stdc++.h>
using namespace std;
int main() {
    int dec_or_bin;
    cout << "(1)Decimal to Binary or (2) Binary to Decimal   (1 or 2): ";
    cin >> dec_or_bin;
    if (dec_or_bin == 2){
        string binary;
        cin >> binary;
        int decimal = 0, size = binary.size();
        for (int i = 0; i < binary.size(); ++i) {
            if (binary[size - i - 1] == '1') {
                decimal += pow(2, i);
            }
        }
        cout << decimal;
    }else if(dec_or_bin == 1){
        string binary = "";
        int decimal;
        cin >> decimal;
        while (decimal >= 1){
            if(decimal % 2 == 0){binary.push_back('0');}
            else binary.push_back('1');
            decimal /= 2;
        }
       reverse(binary.begin(), binary.end());
       cout << binary;
    }
    return 0;
}
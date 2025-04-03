/* #include <iostream>
using namespace std;

int main(){
    int num;
    string revNums;

    cout << "Integer: ";
    cin >> num;

    while(num > 0){
        int digit = num % 10;
        num /= 10;
        revNums+=to_string(digit);
    }
    cout << revNums;
} */
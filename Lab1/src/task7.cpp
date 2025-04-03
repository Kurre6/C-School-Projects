#include <iostream>
#include <cctype>
using namespace std;

#define MIN_LENGTH 8

int main(){
    string password;

    cout << "Password: ";
    cin >> password;

    bool validLength = (password.length() >= MIN_LENGTH);
    bool upperCase = false;
    bool lowerCase = false;
    bool oneDigit = false;
    bool specialCharacter = false;

    string specialCharacters = "!@#$%^&*";

    for (char ch : password){
        if (isupper(ch)){
            upperCase = true;
        }else if(islower(ch)){
            lowerCase = true;
        }else if(isdigit(ch)){
            oneDigit = true;
        }else if(specialCharacters.find(ch) == 0){
            specialCharacter = true;
        }
    }

    if (validLength && upperCase && lowerCase && oneDigit && specialCharacter) {
        cout << "Strong Password" << endl;
    } else {
        cout << "Weak Password" << endl;
        if (!validLength){
            cout << " - Password must be at least " << MIN_LENGTH << " characters long." << endl;
        }
        if (!upperCase){
            cout << " - Missing an uppercase letter." << endl;
        }
        if (!lowerCase){
            cout << " - Missing a lowercase letter." << endl;
        }
        if (!oneDigit){
            cout << " - Missing a digit." << endl;
        }
        if (!specialCharacter){
            cout << " - Missing a special character (!@#$%^&*)." << endl;
        }
    }
    
    return 0;
}

/* #include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string text = "";
    int vowels = 0;

    cout << "Text to be converted to uppercase: " << endl;
    cin >> text;

    std::transform(text.begin(), text.end(), text.begin(), ::toupper);

    cout << "String in uppercase: " << text << endl;
    
    size_t length = text.size();
    for (size_t i = 0; i < length; i++){
        char vowel = text[i];
        switch (vowel)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowels += 1;
                break;
            default:
                break;
        }
    }

    cout << "Vowels in the string: " << vowels << endl;
    
    std::reverse(text.begin(), text.end());

    cout << "Reversed string: " << text << endl;
    return 0;
} */
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream> 
#include <cstring>

using namespace std;

int FindFourthDot(const char* s) {
    int dotCount = 0;
    int index = -1;
    int length = strlen(s);

    for (int i = length - 1; i >= 0; i--) {
        if (s[i] == '.') {
            dotCount++;
            if (dotCount == 4) {
                index = i;
                break;
            }
        }
    }

    return index;
}

char* ReplaceDotsWithStars(char* s) {
    int length = strlen(s);
    char* result = new char[length * 2 + 1]; 

    int resultIndex = 0;

    for (int i = 0; i < length; i++) {
        if (s[i] == '.') {
            result[resultIndex++] = '*';
            result[resultIndex++] = '*';
        }
        else {
            result[resultIndex++] = s[i];
        }
    }

    result[resultIndex] = '\0';

    strcpy(s, result);
    delete[] result;

    return s;
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    int dotIndex = FindFourthDot(str);

    if (dotIndex != -1) {
        cout << "Position of the fourth dot from the end: " << dotIndex << endl;
    }
    else {
        cout << "The fourth dot was not found in the string." << endl;
    }

    ReplaceDotsWithStars(str);

    cout << "Modified string: " << str << endl;

    return 0;
}

//String matching using Horspool algorithm

#include <iostream>
#include <cstring>
using namespace std;
#define MAX 256
void shiftTable(char pattern[], int m, int table[]) {
    //construct the shift table
    for (int i = 0; i < MAX; i++)
        table[i] = m;           //initalize the table with lenght of the pattern

    for (int j = 0; j < m - 1; j++)     //change the value if it is repeat
        table[(int)pattern[j]] = m - 1 - j;
}
int horspool(char text[], char pattern[]) {
    int n = strlen(text);
    int m = strlen(pattern);
    int table[MAX];
    shiftTable(pattern, m, table);
    int i = m - 1;
    while (i < n) {     //check until the text lenght
        int k = 0;
        while (k < m && pattern[m - 1 - k] == text[i - k])      //checks until the patttern lenght
            k++;
        if (k == m)
            return i - m + 1;
        i += table[(int)text[i]];
    }
    return -1;
}

int main() {
    char text[100], pattern[100];
    cout << "Enter text: ";
    cin>>text;
    cout << "Enter pattern: ";
    cin>>pattern;
    int pos = horspool(text, pattern);
    if (pos >= 0)
        cout << "Pattern found at position: " << pos << endl;
    else
        cout << "Pattern not found\n";
    return 0;
}

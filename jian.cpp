#include <iostream>
using namespace std;

int main() {
    int rows = 6; 
    char evenChars[] = {'@', '#'}; 
    char oddChars[] = {'#', '$'};  
    for (int i = 0; i < rows; i++) {
       
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }

        
        if (i % 2 == 0) { 
            for (int j = 0; j < rows - i; j++) {
                cout << evenChars[j % 2] << " ";
            }
        } else { 
            for (int j = 0; j < rows - i; j++) {
                cout << oddChars[j % 2] << " ";
            }
        }
        cout << endl; 
    }

    return 0;
}
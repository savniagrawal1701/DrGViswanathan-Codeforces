#include <iostream>
#include <string>

using namespace std;


char Char(string s) {
    int countA = 0;
    
    
    for (int i = 0; i < 5; i++) {
        if (s[i] == 'A') {
            countA++;
        }
    }
    if (countA >= 3) {
        return 'A';
    } else {
        return 'B';
    }
}

int main() {
    
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        
        cout <<Char(s) << endl;
    }
    
    return 0;
}

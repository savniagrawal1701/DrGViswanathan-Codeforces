#include <iostream>
#include <set>

using namespace std;

int solve() {
    set<char> unique_letters;
    char ch;
    while (cin >> ch) {
        if (ch >= 'a' && ch <= 'z') {
            unique_letters.insert(ch);
        }
    }
    return unique_letters.size();
}

int main() {
    int result = solve();
    cout << result << endl;
    return 0;
}

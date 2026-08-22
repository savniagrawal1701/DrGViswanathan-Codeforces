#include <iostream>

using namespace std;

int stones(int n, string s ) {
    int count=0;
   for(int i =0;i<n-1;i++){
    if(s[i]==s[i+1]){
        count++;
    }
   }
   return count;
}

int main() {
   int n ;
   string s ;
    if (cin >> n >> s) {
        cout << stones(n, s) << endl;
    }
    return 0;
}
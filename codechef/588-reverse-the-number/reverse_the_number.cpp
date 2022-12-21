#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int n, r;
        int reversed = 0;
        cin >> n;
        while (n > 0){
            // get last digit
            r = n % 10;
            // move current value up by a tens column then add the new value
            reversed = reversed * 10 + r;
            // remove last digit
            n /= 10;
        }
        cout << reversed << "\n";
    }
	return 0;
}
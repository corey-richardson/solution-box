#include <iostream>
using namespace std;

int main() {
    int T;
    int x, h;

	std::cin >> T;
	
	for (int i = 0; i < T; i++){
	    std::cin >> x >> h;
	    if (x >= h) {
	        std::cout << "YES\n";
	    } 
	    else { std::cout << "NO\n"; }
	}
    
	return 0;
}

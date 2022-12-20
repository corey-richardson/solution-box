#include <iostream>
using namespace std;

int main() {
    int t;
	std::cin >> t;
	int int_rate, inf_rate;
	for (int i = 0; i < t; i++){
	    std::cin >> int_rate >> inf_rate;
	    if (int_rate >= 2*inf_rate){
	        std::cout << "YES\n";
	    } 
	    else{ 
	        std::cout << "NO\n"; 
	    }
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin >> n;
    
    int patties, buns;
    for (int i = 0; i < n; i++){
        std::cin >> patties >> buns;
        if (buns >= patties){
            std::cout << patties << "\n";
        }
        else { std::cout << buns << "\n"; }
    }
	return 0;
}

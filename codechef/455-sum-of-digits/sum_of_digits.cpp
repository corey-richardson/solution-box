#include <iostream>
using namespace std;
int main()
{   
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; i++){
        int num = 0;
        int sum = 0;
        std::cin >> num;
        while (num > 0){
            sum += num % 10;
            num /= 10;
        }
        std::cout << sum << "\n";
    }
    
    return 0;
}
// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    std::cin >> n >> k;
    
    int n_divisible = 0;
    for(int i = 0; i < n; i++){
        int x;
        std::cin >> x;
        if (x % k == 0){
            n_divisible++;
        }
    }
    
    std::cout << n_divisible << "\n";
    
    return 0;
}

#include <stdio.h>

int main(void) {
	int t;
	int int_rate, inf_rate;
	
	scanf("%i",&t);
	for (int i = 0; i < t; i++){
	    scanf("%i %i", &int_rate, &inf_rate);
	    if (int_rate >= 2*inf_rate){
	        printf("YES\n");
	    } else {
	        printf("NO\n");
	    }
	}
	
	
	return 0;
}

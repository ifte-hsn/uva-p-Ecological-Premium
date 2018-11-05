/* @JUDGE_ID:  841985  10300 C "Ecological Premium" */

#include<stdio.h>
#include<stdlib.h>

int main() {
	int tc, f, a, b, c;
	long long sum;

	scanf("%d", &tc);

	while(tc--) {
		scanf("%d",&f);
		sum = 0;
		int i = 0;
		for(i = 0; i<f; i++) {
			scanf("%d %d %d", &a, &b, &c);
			sum += (long long) a*c;
		}
		printf("%llu\n", sum);
	}

	return 0;
}

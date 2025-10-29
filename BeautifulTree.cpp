#include <cstdio>
using namespace std;
int T, n;
int main() {
	scanf("%d", &T);
	while (T -- ) {
		scanf("%d", &n);
		if (n == 2) printf("-1\n");
		else if (n == 3) printf("1 3\n2 3\n");
		else if (n == 4) printf("1 2\n3 1\n4 1\n");
		else {
			printf("1 2\n2 3\n3 4\n1 %d\n", n);
			for (int i = 5; i < n; i ++ ) printf("%d 2\n", i);
		}
	}
	return 0;
}

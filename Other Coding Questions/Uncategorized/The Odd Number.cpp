#include <cstdio>
using namespace std;

int main() {
    int n, odd = 0; scanf("%i", &n); 
    while(n--) {
        int a; scanf("%i", &a);
        odd ^= a;
    }
    printf("%i\n", odd);
}
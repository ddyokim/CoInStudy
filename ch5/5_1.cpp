#include <cstdio>
#include <cstring>
void to_int(char bits[], unsigned int* n) {
    for (int i = 0; bits[i] ; i++) {
        *n <<= 1;
        *n += bits[i] -'0';
    }
}
int main() {
    int  i, j;
    unsigned int m = 0, n = 0;
    char n_bit[32], m_bit[32];
    printf("N, M bits : ");
    scanf("%s %s", n_bit, m_bit);

    printf("\ni, j : ");
    scanf("%d %d", &i, &j);

    if (strlen(m_bit) > j-i+1) {
        printf("Not enough index.\n");
        return 0;
    }

    to_int(n_bit, &n);
    to_int(m_bit, &m);
    m <<= i;
    // i to j bits clear
    for(int x = i; x <= j; x++) {
        n &= ~(1<<x);
    }
    // set bits
    n |= m;

    printf("\nOutput N = ");
    for(int x = 1 << (strlen(n_bit)-1); x >= 1; x >>= 1) {
        if(n & x) printf("1");
        else printf("0");
    }
    printf("\n");
    return 0;
}

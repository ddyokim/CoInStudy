#include <cstdio>
int main() {
    char ans[33]="0.";
    double x;

    scanf("%lf", &x);

    for(int i = 2; i<32; i++) {
        x *= 2;
        ans[i] = '0' + (int)x;
        x -= (int)x; 
        if (x == 0) break;
    }
    if (x != 0) printf("ERROR\n");
    else printf("ans : %s\n",ans);
    return 0;
}

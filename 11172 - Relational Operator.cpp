#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long a,b;
    scanf("%d",&t);
    for (int i = 0; i < t; ++i) {
        scanf("%lf %lf",&a,&b);
        if(a>b) printf(">\n");
        else if(a<b) printf("<\n");
        else if(a=b) printf("=\n");
    }
    return 0;
}

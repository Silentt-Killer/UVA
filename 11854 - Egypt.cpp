#include <bits/stdc++.h>
using namespace std;

int main() {
    long long  heru,ausar,auset,a,b,c;
    while (scanf("%lld %lld %lld",&ausar,&auset,&heru),(auset && ausar && heru) !=0){
        a=heru*heru;
        b=auset*auset;
        c=ausar*ausar;
        if((a == b+c) || (b == a+c) || (c ==a+b)){
            printf("right\n");
        } else printf("wrong\n");
    }
    return 0;
}

#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a,int *b) {
    int valA = *a + *b;
    int valB = std::abs(*a-*b);
    *a = valA;
    *b = valB;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

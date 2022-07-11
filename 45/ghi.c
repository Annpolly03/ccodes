#include<stdio.h>
void xmen() {
    static int wolverine;
    printf("%d",++wolverine);

}

int main() {
    int i ;
    for (i=0;i<3;i++)
    xmen();
    return 0;
}
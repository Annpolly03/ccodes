#include <string.h>
#include <stdio.h>
void g(char *s,int len) {
    if (len == 0) return;
    char temp = s[0]; s[0] = s[len-1] = temp;
    g(s+1, len-1) ;}
    
int main() {
    char s[] = "hello" ; g(s,strlen(s)); printf("%s",s);}

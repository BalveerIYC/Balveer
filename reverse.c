#include<stdio.h>
#include<string.h>
int main()
{ char s[1000],temp;
    scanf("%s",s);
	int n = strlen(s);
	for (int i=0; i<n/2; i++){
	    temp=s[i];
	    s[i]=s[n-i-1];
	    s[n-i-1]=temp;
	}
	printf("%s",s);
}
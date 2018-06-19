#include <stdio.h>
int main()
{
	char s1[80],s2[40];
    int i=0,j=0;
    printf("输入第一个字符串:");
    scanf("%s",s1);
    printf("输入第二个字符串:");
    scanf("%s",s2);
    while (s1[i]!='\0')
    i++;
    while(s2[j]!='\0')
    s1[i++]=s2[j++];
    s1[i]='\0';
    printf("\nThe new string is:%s\n",s1);
    return 0;
}

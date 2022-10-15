
#include <stdio.h>
#include <string.h>
#include<stdbool.h>
#define MAX(a,b) ( (a>b) ? a:b)

int counthorses(char s[]);
int isValid(int freq[]);
int max(int a, int b);

int main()
{
char s[100];
printf("Enter the string \n");
scanf("%s", s);
int cnt=counthorses(s);
printf("Count of horses =%d", cnt);
}
int isValid(int freq[])
{
    int ret = 0;
   if (((freq['n' - 'a']) >= (freq['e' - 'a']))
    && ((freq['e' - 'a']) >= (freq['i' - 'a']) )
    && ((freq['i' - 'a']) >= (freq['g' - 'a']))
    && (freq['g' - 'a']) >= (freq['h' - 'a']) )
    ret= 1;
    else ret=0;
    printf("Printing return %d", ret);
    return (ret );
}

int counthorses(char s[])
{
    int freq[26]={0};
    int no_of_horses=0;
    int answer=0;
    int i=0;
    while(s[i] != '\0')
    {
        printf("Entering while loop\n");
        freq[(s[i] - 'a')]++;
        
        if(!isValid(freq)){
        printf("Entering validity check \n");
        return -1;}
        
        if(s[i] == 'n')
        no_of_horses++;
        printf("No of horses =%d",no_of_horses);
        
        if(s[i] == 'h')
        no_of_horses--;
        
        answer= MAX(answer, no_of_horses);
        i++;
        
    }
        if(no_of_horses == 0)
        return answer;
        else
        return -1;
}

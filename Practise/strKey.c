#include <stdio.h>
#include<string.h>
char *keyword[]= {
    "auto","break","case","char","const","continue","default","do",
    "double","else","enum","extern","float","for","goto","if",
    "int","long","register","return","short","signed","sizeof",
    "static","struct","switch","typedef","union","unsigned","void",
    "volatile","while"
};
char iskeyword(char *str){
    int n=sizeof(keyword)/sizeof(keyword[0]);
    int i;
    for(i=0;i<n;i++){
        if(strcmp(str,keyword[i])==0)
        return 1;
    }
    return 0;
}
int main()
{
    char str[50];
    printf("enter string");
    scanf("%s",&str);
    if(iskeyword(str)){
    printf(" string is a keyword");
    }
    else{
    printf("string is not a keyword");
    }
    return 0;
}
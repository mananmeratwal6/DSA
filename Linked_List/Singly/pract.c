#include <stdio.h>
#include<string.h>
int main()
{
  char str[100];
  int ones=0,count=0;
  printf("Enter a binary string");
  fgets(str,sizeof(str),stdin);
  for(int i=0;i<strlen(str);i++){
  if(str[i]=='1')
    ones++;
  }
  int parity=(ones%2==0)?0:1;
  printf("%d",ones);
  printf("%d",parity);
    return 0;
}
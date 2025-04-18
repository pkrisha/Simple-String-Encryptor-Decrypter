#include<stdio.h>
#include<string.h>

int main(){
	
	int n ,i,x;
	char str[100];
	
	printf("enter the string you want to encrypt and decrypt:");
	gets(str);
	
	printf("\nchoose ths following option given below:");
	printf("\nenter the 1 if you want to encrypt the string");
	printf("\nenter the 2 if you want to decrypt the string\n");
	scanf("%d",&n);
	
	
	
	switch(n)
	{
   case 1:
   	printf("choose the numbers from 1 to 9 to set value of the key:");
   	scanf("%d",&x);
   	
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + x; 

      printf("\nEncrypted string: %s\n", str);
      break;

   case 2:
   	printf("enter the value of the key:");
   	scanf("%d",&x);
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - x; 

      printf("\nDecrypted string: %s\n", str);
      break;

   default:
      printf("\nError\n");
   }
   return 0;
}


#include <stdio.h>
/**
*main - Entry Point
*Return always 0 (seccess)
*/
int main(void)
	{
		printf("Size of a char: %Lu  byte(s)\n",sizeof(char)); 
                Printf ("Size of an int: %Lu  byte(s)\n",sizeof(int));
                Printf ("Size of a long it: %Lu  byte(s)\n",sizeof(long int));
	        Printf ("Size of along long int: %Lu  byte(s)\n",sizeof(long long int));
		Printf ("Size of an float: %Lu  byte(s)\n",sizeof(float));
                return(0);
}

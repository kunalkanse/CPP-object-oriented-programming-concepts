// This program demonstates string in c

#include<stdio.h>
#include<string.h>

int main()
{
	// Character array in C is called as string
	
	char arr1[] = {'H','e','l','l','o','\0'};
	printf("\narr1 : %s\n",arr1);
	printf("size of arr1 is : %d\n",sizeof(arr1));
	printf("string length : %d\n",strlen(arr1));

	// If we create string in this manner then \0 is not required
	char arr2[] = "Hello";
	printf("\narr2 : %s\n",arr2);
	printf("size of arr1 is : %d\n",sizeof(arr2));
	printf("string length : %d\n",strlen(arr2));
	
	char *ptr1 = "Hello";
	printf("\nptr1 : %s\n",ptr1);
	printf("size of ptr1 is : %d\n",sizeof(ptr1));
	printf("size of ptr1 is : %d\n",sizeof(*ptr1));
	printf("string length : %d\n",strlen(ptr1));

	char arr3[]="World";
	//arr3[]= "New";		This type of reinitialisation is not allowed

	char *ptr2 = "World";
	ptr2 = "New";		// This type of reinitialisation is allowed

return 0;
}

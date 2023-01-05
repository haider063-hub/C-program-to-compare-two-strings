//CODED BY: Muhammad Haider
//C program to compare two strings
#include<stdio.h>
#include<string.h>
int compare(char str[], char str1[]);
int main() {
	char str[20];
	char str1[20];

	printf("C program to compare two strings\n");
	printf("_____________________________________\n\n");
	printf("Enter the first string: ");
	fgets(str,sizeof(str),stdin);

	printf("Enter the second string: ");
	fgets(str1,sizeof(str1),stdin);

	printf("_____________________________________\n\n");
	printf("Compare Strings:\n\n");

	int res = compare(str, str1);
	if(res == 1) {
		printf("String1 is greater");
	} else if(res == -1) {
		printf("String2 is greater");
	} else if(res == 0) {
		printf("String1 is equal to string2");
	}
}

//FUNCTION
int compare(char str[], char str1[]) {
	char *ptr = str;
	char *ptr1= str1;
	int len;

	if(strlen(ptr) > strlen(ptr1)) {
		len = strlen(ptr);
	} else {
		len = strlen(ptr1);
	}

	for(int i = 0; i < len; i++) {
		if(ptr[i] > ptr1[i]) {
			return 1;
		} else if(ptr[i] < ptr1[i]) {
			return -1;
		} else if(ptr[i] == ptr1[i]) {
			return 0;
		}
	}
}

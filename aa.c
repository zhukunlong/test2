#include <stdio.h>
//char * my_replece(char * arr ,char a,int b) {
//	b = b - 1;
//	*(arr + b) = a;
//	return arr;
//}
void my_printf(int* pi,int i) {
	int j = 0;
	for (j; j < i;j++) {
		printf("%d  ",(*(pi+j)));
	}
}

int main() {
	/*int a = 101;
	printf("%c\n", &a);
	char b = 'e';
	printf("%p",&b);
	return 0;
	*/
	/*int* arr1;
	char arr2[] = "abc";
	arr1 = &arr2;
	char arr3[] = "(* arr1)";
	printf("%p\n",arr2);
	return 0;*/
	/*float f = 9.0;
	printf("%d\n", f);
	return 0;
	*/
	/*int arr[] = { 10,2,3,4,5 };
	int* arr2 = &arr;
	int(*arr1)[5] = &arr;
	printf("%d\n", *arr2);
	printf("%p\n", &arr);
	printf("%p\n", arr1);
	printf("%d\n", *( * arr1));
	*/
	/*int(*p) = 10;
	printf("%p\n",p);*/
	/*int a = 10;
	int* pa = &a;
	char(* pc)[6] = "abcd";
	char* pc1 = "abcde";
	printf("%p\n", pc+1);
	printf("%s\n", pc);
	printf("%p\n", *pc);
	printf("%p\n", *pc + 1);
	printf("%s\n", (*pc));
	printf("%d\n", *pa);
	printf("%d\n", (*pa));
	printf("%c\n", *pc1);*/
	int arr[5] = {1,2,3,4,5};
	int len = sizeof(arr) / sizeof(arr[0]);
	my_printf(arr, len);
	return 0;
}
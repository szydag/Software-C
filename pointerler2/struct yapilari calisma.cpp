#include<stdio.h>
struct Student
{
	char name[15];
	char surname[15];
	int no;
	int age;
};
int main()
{
	struct Student ahmet={"ahmet","gedikli",135,23};
	printf("%s %s %d %d",ahmet.name,ahmet.surname,ahmet.no,ahmet.age);
	return 0;
}

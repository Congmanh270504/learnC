#include<conio.h>
#include<stdio.h>
#include<string.h>
class Student
{
public:
	Student();
	void Display();
private:
	char name[10];
	int age;
	char gender[10];
	float gpa;
};

Student::Student()
{
	printf("Name: ");
	scanf("%s", &name);
	printf("Age: ");
	scanf("%d", &age);
	printf("Gender: ");
	scanf("%s", &gender);
	printf("GPA: ");
	scanf("%f", &gpa);
}
void Student::Display()
{
	printf("Name:%s\tAge:%d\tGender:%s\tGPA:%.2f\n", name, age,gender,gpa);
}

int main()
{
	Student s;
	s.Display();
	_getch();
}
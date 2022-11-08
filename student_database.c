#include <stdio.h>
struct student{
	char name[30];
	int usn;
	int sem;
	float mark1,mark2,mark3;
	float avg;
};

void main(){
	int n,i;
	struct student s1[5];
	printf("Enter number of students: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("Enter name of student: ");
		scanf("%s",s1[i].name);
		printf("Enter USN: ");
		scanf("%d",&s1[i].usn);
		printf("Enter semester: ");
		scanf("%d",&s1[i].sem);
		printf("Enter marks scored in three subjects: ");
		scanf("%f%f%f",&s1[i].mark1,&s1[i].mark2,&s1[i].mark3);
	}
	for (i=0;i<n;i++){
		if ((s1[i].mark1<s1[i].mark2)&&(s1[i].mark1<s1[i].mark3))
			s1[i].avg = (s1[i].mark2+s1[i].mark3)/2;
		else if ((s1[i].mark2<s1[i].mark1)&&(s1[i].mark2<s1[i].mark3))
			s1[i].avg = (s1[i].mark1+s1[i].mark3)/2;
		else
			s1[i].avg = (s1[i].mark1+s1[i].mark2)/2;
	}
	printf("Student details are: \n");
	for (i=0;i<n;i++){
		printf("Name: %s\n",s1[i].name);
		printf("USN: %d\n",s1[i].usn);
		printf("Sem: %d\n",s1[i].sem);
		printf("Marks scored are: %f\t%f\t%f\n",s1[i].mark1,s1[i].mark2,s1[i].mark3);
		printf("Average: %f\n",s1[i].avg);
	}
}

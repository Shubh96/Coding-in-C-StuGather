#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

/*These are the prototypes for the functions*/
void mainMenu();
void addStudent();
void viewStudent();
void modifyStudent();
void deleteStudent();
void writeToFile();
void update();
int readFromFile(int);

struct Student{
	int studentID;
    int standard;
	char studentName[25];
    char dateOfBirth[10];
    long long contactNumber;
}stu;

/*This will print the main menu onto the screen*/
void mainMenu()
{
	printf("\n1. Add Student\n");
    printf("2. View Student\n");
    printf("3. Modify Student\n");
    printf("4. Delete Student\n");
    printf("5. Exit\n");
}

/*Definition for addStudent()*/
void addStudent()
{
	system("cls");
    printf("\t\t\t\tADD STUDENT\n\n");
	
	printf("Student ID: ");
	scanf("%d", &stu.studentID);
	
	fflush(stdin);
	printf("Student Name: ");
	gets(stu.studentName);
	
	printf("Date of Birth: ");
	gets(stu.dateOfBirth);
	
	printf("Standard: ");
	scanf("%d", &stu.standard);

	printf("Contact Number: ");
	scanf("%lld", &stu.contactNumber);
	
	writeToFile();														//write the data to file
	
    printf("\nPress any key to return to main menu.....");
    getch();
}

/*Definition for viewStudent()*/
void viewStudent()
{
	int searchID;
	
    system("cls");
    printf("\t\t\t\tVIEW STUDENT\n\n");
	
	printf("Enter ID of student to view: ");
	scanf("%d", &searchID);
	
	if(readFromFile(searchID)==1){
		printf("\nStudent Name: %s", stu.studentName);
		
		printf("\nDate of Birth: %s", stu.dateOfBirth);
		
		printf("\nStandard: %d", stu.standard);
		
		printf("\nContact Number: %lld", stu.contactNumber);
	}
	else
		printf("\nThere is no record for Student ID %d", searchID);
	
    printf("\n\nPress any key to return to main menu....");
    getch();
}

/*Definition for modifyStudent()*/
void modifyStudent()
{
	int modifyID;
	
    system("cls");
    printf("\t\t\t\tMODIFY STUDENT\n\n");
	
	printf("Enter ID of student to modify: ");
	scanf("%d", &modifyID);
	
	if(readFromFile(modifyID) == 1)
	{
		fflush(stdin);
		printf("Student Name: ");
		gets(stu.studentName);
		
		printf("Date of Birth: ");
		gets(stu.dateOfBirth);
		
		printf("Standard: ");
		scanf("%d", &stu.standard);

		printf("Contact Number: ");
		scanf("%lld", &stu.contactNumber);
		
		printf("\nUpdating data, Please wait...");
		Sleep(1000);
		update();
		
		Sleep(1000);
		printf("\nData updated successfully");
	}
	else
		printf("\nThere is no record for Student ID %d", modifyID);
	
    printf("\nPress any key to return to main menu....");
    getch();
}

/*Write data to file*/
void writeToFile()
{
	FILE *fp;
	
	fp = fopen("Student.dat", "ab+");
	
	if(fp == NULL){
		printf("\nCould not write data to file, some error occurred.");	
	}
	else{
		fwrite(&stu, sizeof(stu), 1, fp);
	}
	
	printf("\nData written in file successfully.\n");
	fclose(fp);
}

/*Read data from file*/
int readFromFile(int searchID)
{
	FILE *fp;
	int recordFound = 0;
	
	fp = fopen("Student.dat", "rb");
	
	if(fp == NULL){
		printf("\nCould not open file, some error occurred.");	
	}
	else{
		while(fread(&stu, sizeof(stu), 1, fp)){
			if(stu.studentID == searchID){
				recordFound = 1;
				break;
			}
		}
	}
	fclose(fp);
	
	return recordFound;
}

/*Update data*/
void update()
{
	FILE *fp;
	
	fp = fopen("Student.dat", "rb+");
	
	fseek(fp, -sizeof(stu), SEEK_CUR);
	fwrite(&stu, sizeof(stu), 1, fp);
	
	fclose(fp);
}

/*Definition for deleteStudent()*/
void deleteStudent()
{
	int deleteID;
	FILE *fp, *temp;
	
    system("cls");
    printf("\t\t\t\tDELETE STUDENT\n\n");
	
	printf("Enter ID of student to delete: ");
	scanf("%d", &deleteID);
	
	printf("\nProcessing delete request, Please wait...");
	Sleep(1000);
	fp = fopen("Student.dat", "rb");
	temp = fopen("temp.dat", "ab+");
	
	if(fp == NULL){
		printf("\nCould not open file, some error occurred.");	
	}
	else{
		while(fread(&stu, sizeof(stu), 1, fp)){
			if(stu.studentID != deleteID){
				fwrite(&stu, sizeof(stu), 1, temp);
			}
			else
				continue;
		}
	}
	
	fclose(fp);
	fclose(temp);
	
	printf("\nDeleting data and Updating file...");
	Sleep(1000);
	
	remove("Student.dat");
	rename("temp.dat", "Student.dat");
	
	printf("\nRecord deleted successfully...");
	
    printf("\nPress any key to return to main menu....");
    getch();
}

void main()
{
	int userMainMenuChoice;
	
	system("cls");
	mainMenu();
	
	printf("\nEnter your choice: ");
	scanf("%d", &userMainMenuChoice);
	
	switch(userMainMenuChoice){
		case 1: addStudent();
				break;

		case 2: viewStudent();
				break;

		case 3: modifyStudent();
				break;

		case 4: deleteStudent();
				break;

		case 5: Sleep(1000);
				printf("\nExiting. Please wait....\n");
				Sleep(2000);
				printf("Exit successful\n");
				exit(0);
				break;

		default: Sleep(1000);
				printf("Invalid choice.\n");
				Sleep(1000);
				printf("Please select an option from 1 to 5.");
				Sleep(1000);
	}
}
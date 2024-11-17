// Gurpreet Singh 11242212  D3
// this is my C project  for class 11 tH marksheet
#include<stdio.h>

int main(){
    //School Information
    printf("MM INTERNATIONAl SCHOOL\n");
    printf("MULLANA-AMBALA, 133207\n");
    printf("CONTACT NO:8059930601, EMAIL ID:info@mmismullana.org\n");
    printf("AFFILATION NO: 530655\n");
// STUDENT BASIC DETAILS
char name[25], F_name[25], M_name[25], address[100];
int grade, DOB, RollNo, ADM_No;
//student information input.
printf("Enter Student Name:");
scanf("%s", name );
printf("Enter Student Father's Name:");
scanf("%s", F_name ) ;
printf("Enter Student Mother's Name:");
scanf("%s", M_name);
printf("Enter Student Home address");
scanf("%s", address);
printf("Enter your Grade:");
scanf("%d", &grade);
printf("Enter your Date of birth:");
scanf("%d", &DOB);
printf("Enter your Roll Number:");
scanf("%d", &RollNo);
printf("Enter your Admission number:");
scanf("%d", &ADM_No);


// Stream and subject selection 
int stream;
printf("Avilable streams\n 1- Medical \n 2-Non-medical \n 3-Commerce\n 4-Arts\n");
printf("Enter your stream(1-4):");
scanf("%d", &stream);
switch (stream)
{
case 1: printf("Medical");
    break;
case 2: printf("Non-Medical");
    break;
case 3: printf("Commerce");
    break;
case 4: printf("Arts");
    break;
}
// additional subject selection

int ADDSBJ;
printf("\nAdditonal Avialble Subjects\n 1- Physical Education\n 2- Infromatic Practices");
printf("\nChoose your Additional Subject(1-2):");
scanf("%d", &ADDSBJ);

printf("\nPlease confirm your subjects according to your stream");
if(stream==1){
    printf("\n1- Biology\n 2-Chemistry\n 3-English\n 4-Physics");}
    else if (stream==2)
    {
    printf("\n1- Maths\n 2-Chemistry\n 3-English\n 4-Physics");
         }
         else if (stream==3)
         {
            printf("\n1-Bussiness Studies \n2-Accounatncy \n3-English \n4-Economics");
         }
         else{
            printf("\n1-History\n 2-Pol.Science\n 3-English\n 4-Hindi");
         }
        if(ADDSBJ==1){
    printf("\n5- Physical Education");
}
else{
    printf("\n5-Informatic Practices");
}
    

}

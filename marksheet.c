// Gurpreet Singh 11242212  D3
// this is my C project  for class 11 tH marksheet
#include<stdio.h>
#include <string.h>
#include<math.h>

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
char medical[5][20]= {"1-Biology", "\n2-Chemistry", "\n3-English", "\n4-Physics"};
char non_med[5][20]= {"\n1-Mathemetics", "\n2-Chemistry", "\n3-English", "\n4-Physics"};
char commerce[5][20]={"\n1-Business Studies", "\n2-Accountancy", "\n3-English", "\n4-Economics"};
char arts[5][20]= {"\n1-Pol. Science", "\n2-Hindi", "\n3-English", "\n4-History"};
char additional[3][20] = {"Physical Education","computer"};
char selected_subjects[6][20];// Selected Subjects will be stored in this variable
int ADDSBJ, i;
int num_subjects = 0, stream;
printf("Avilable streams\n 1- Medical \n 2-Non-medical \n 3-Commerce\n 4-Arts\n");
label:
printf("Enter your stream(1-4):");
scanf("%d", &stream);
if (stream== 1) {
        for (i = 0; i < 4; i++) {
            strcpy(selected_subjects[num_subjects++], medical[i]);
        }
    }
    else if (stream == 2) {
        for (i = 0; i < 4; i++) {
            strcpy(selected_subjects[num_subjects++], non_med[i]);
        }
    }
    else if (stream == 3) {
        for (i = 0; i < 4; i++) {
            strcpy(selected_subjects[num_subjects++], commerce[i]);
        }
    } else if (stream == 4) {
        for (i = 0; i < 4; i++) {
            strcpy(selected_subjects[num_subjects++], arts[i]);
        }
    } else {
        printf("Invalid stream choice!\n");
        return 1; // Exit if the choice is invalid
    }

printf("\nAdditonal Avialble Subjects \n1-Physical Education \n2-Computer");
printf("\nChoose your Additional Subject(1-2):");
scanf("%d", &ADDSBJ);// print our additional step

printf("\nPlease confirm your subjects according to your stream");
if(stream==1){
    printf("\n1- Biology \n2-Chemistry \n3-English \n4-Physics");}
    else if (stream==2)
    {
    printf("\n1- Maths \n2-Chemistry \n3-English \n4-Physics");
         }
         else if (stream==3)
         {
            printf("\n1-Bussiness Studies \n2-Accounatncy \n3-English \n4-Economics");
         }
         else{
            printf("\n1-History \n2-Pol.Science \n3-English \n4-Hindi");
         }
        if(ADDSBJ==1){
    printf("\n5- Physical Education");
}
else{
    printf("\n5-Computer");
    strcpy(selected_subjects[num_subjects++], additional[ADDSBJ- 1]);// final selected subjects 
}
int Csubj;//for conforming the subjects
printf("\nType 1 if your subjects are correct else type 2:\n");
scanf("%d", &Csubj);
if (Csubj == 2){
    goto label;
}
else{
    printf("\n");
}// label part ends here 
//practical marks 
int marks[6];
    printf("\nEnter marks for the chosen subjects:\n");
    for (i = 0; i < num_subjects; i++) {
        printf("%s: ", selected_subjects[i]);
        scanf("%d", &marks[i]);
    }
   //Practical and lab marks
   int P_marks[6]={0};
   for(i=0; i< num_subjects; i++){
   if(marks[i]>=70){
    P_marks[i]=20;
   }
   else if (marks[i]>=60)
   {
    P_marks[i]=18;
   }
   else if (marks[i]>=50)
   {
    P_marks[i]=16;
   }
   else{
    P_marks[i]=13;
   }
   }
   printf("Practical Marks");
   
   for(i=0; i< num_subjects; i++){
    printf("%d\n", P_marks[i]);
   }
int T_marks[4];// practical marks + theory marks
for(i=0; i< num_subjects; i++){
    T_marks[i]=marks[i]+P_marks[i];
}
for (i = 0; i<=4; i++)
{
    printf("total marks in each subject%d\n", T_marks[i]);
}

int F_marks=0;
for(i=0; i< num_subjects; i++){
    F_marks += T_marks[i];
}
printf("your final marks are:%d", F_marks);
float Percentage;
int total_marks=500;
Percentage=(float)F_marks/total_marks*100;
printf("\nPercentage achieved %.2f", (float)Percentage);
//we are getting percentage till here 
   // Display entered marks
    printf("\nMarks Summary:\n");
    printf("-----------------------------------------------------\n");
    printf("| %-15s | %-5s | %-5s | %-5s\n","Subject","Theory","Practical","Total");
    printf("------------------------------------------------------\n");
    for (i = 0; i < num_subjects; i++) {
        printf("| %-15s | %-5d | %-5d | %-5d\n", selected_subjects[i], marks[i], P_marks[i], T_marks[i]);
    }
    printf("-------------------------\n");
/*printf("\nPROGRESS REPORT-SESSION 2024-25");
int marks[5];
printf("Enter your marks subject wise :");

for(i=0; i<5; i++){
    printf("subjects is :%d", i+1);
    scanf("%d", &marks[i]);
}
    printf("\nYou entered:\n");
for(i = 0; i < 5; i++) {
    printf("Subject %d: %d\n", i + 1, marks[i]);

}
int marks[5]; printf("\nEnter marks for the chosen subjects:\n"); for (i = 0; i < num_subjects; i++) { printf("%s: ", selected_subjects[i]); scanf("%d", &marks[i]); }
}*/
}
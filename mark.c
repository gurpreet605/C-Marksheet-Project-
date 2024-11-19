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
scanf("%[^\n]%*c", name );
printf("Enter Student Father's Name:");
scanf("%[^\n]%*c", F_name ) ;
printf("Enter Student Mother's Name:");
scanf("%[^\n]%*c", M_name);
printf("Enter Student Home address:");
scanf("%[^\n]%*c", address);
printf("Enter your Class:");
scanf("%d", &grade);
printf("Enter your Date of birth(DDMMYYYY):");
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
printf("marks in each subject:");
for (i = 0; i<=4; i++)
{
    printf("%d\n", T_marks[i]);
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
   // to calculate the average 
int aver;
aver=F_marks/5;
printf("\nAverage Marks:%d", aver);
// code to check wether the candidate is passed or fail in the examination
if (Percentage>=33){
    printf("\nPass");
}
else{
    printf("\nfail");
}
//Grade calculation
char calc;
printf("\nGrade:");
if(Percentage>=90){
    printf("\nA1");
    printf("\nExcellent performance! Your hard work and dedication have paid off. Keep up the outstanding efforts to maintain this level of excellence.");
}
else if (Percentage>=80 && Percentage<90)
{
    printf("\nA2");
    printf("\nGreat job! You have demonstrated strong understanding and application of the subjects. With a little more effort, you can achieve even greater heights.");
}else if (Percentage>=70 && Percentage<=80)
{
    printf("\nB1");
    printf("\nGood work! You have a solid foundation. Consistent effort and a bit more focus can help you improve further.");
}
else if (Percentage>=60 && Percentage<=70)
{
    printf("\nB2");
    printf("\nYou have shown potential, but there is room for improvement. Stay focused and work on challenging areas to achieve better results");
}
else if (Percentage>=50 && Percentage<=60)
{
    printf("\nC1");
    printf("\nYou have made progress, but its essential to dedicate more time to studies. Seek help where needed and remain determined to improve.");
}
else if (Percentage>=40 && Percentage<=50)
{
    printf("\nC2");
    printf("\nYou have shown potential and made good progress this term. Your performance indicates a solid understanding of the basics, but theres still room for improvement");
}
else if (Percentage>=33 && Percentage<=40)
{
    printf("\nD");
    printf("\nYou have made progress, but its essential to dedicate more time to studies. Seek help where needed and remain determined to improve");
}
else {
    printf("\nE(Need Improvement)");
    printf("\nIts important to stay motivated and work harder. With consistent effort and guidance, you can overcome challenges and perform better");
}
char calculateGrade(float percentage) {
    if (percentage >= 90) {
        return 'A';
    } else if (percentage >= 80) {
        return 'B';
    } else if (percentage >= 70) {
        return 'C';
    } else if (percentage >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}



FILE *file = fopen("marksheet.html", "w"); // Open a file for writing
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write HTML content
    fprintf(file, "<!DOCTYPE html>\n");
    fprintf(file, "<html lang=\"en\">\n");
    fprintf(file, "<head>\n");
    fprintf(file, "<meta charset=\"UTF-8\">\n");
    fprintf(file, "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n");
    fprintf(file, "<title>Marksheet</title>\n");
    fprintf(file, "<style>\n");
    fprintf(file, "table { border-collapse: 1px solid; width: 100%%; }\n");
    fprintf(file, "#logo { width: 200px; height: auto; }\n");
    fprintf(file, "h1{background-color: black; color:white; text-align:center;}");
    fprintf(file, "h2{color:#262525; text-align:center;}");
    fprintf(file, ".pa{display:inline; font-size1.3rem}")
    fprintf(file, "th, td { border: 1px solid black; padding: 8px; text-align: left; }\n");
    fprintf(file, "</style>\n");
    fprintf(file, "</head>\n");
    fprintf(file, "<body>\n");
    fprintf(file, "<img id=\"logo\" src=\"school.png.png\" alt=\"School Logo\">\n");
    fprintf(file, "<h1>MM INTERNATIONAL SCHOOL</h1>\n");
    fprintf(file, "<h2>MULLANA AMBALA - 133207</h2>\n");
    fprintf(file, "<h2>AFFILATION NUMBER: 530665</h2>\n");
    fprintf(file, "<h1>PROGRESS REPORT-SESSION2024-25");
    fprintf(file, "<p class =\"pa\">NAME%s</p>", name);
    fprintf(file, "<p class =\"pa\">FATHER'S NAME %s</p>", F_name);
    fprintf(file, "<p class =\"pa\">MOTHER'S NAME %s</p>", M_name);
    fprintf(file, "<p class =\"pa\">ADDRESS %s</p>", address);
    fprintf(file, "<p>CLASS %d</p>", grade);
    fprintf(file, "<p>ROLL No. %d</p>", RollNo);
    fprintf(file, "<p>DOB %d</p>", DOB);
    fprintf(file, "<p>ADM_No. %d</p>", ADM_No );
    

    // Print subject details in a table
    fprintf(file, "<h2>Marks Summary:</h2>\n");
    fprintf(file, "<table>\n");
    fprintf(file, "<tr><th>Subject</th><th>Theory</th><th>Practical</th><th>Total</th></tr>\n");

    for (int i = 0; i < num_subjects; i++) {
        fprintf(file, "<tr><td>%s</td><td>%d</td><td>%d</td><td>%d</td></tr>\n", selected_subjects[i], marks[i], P_marks[i], T_marks[i]);
    }

    fprintf(file, "</table>\n");
    fprintf(file, "<p>Total Marks: %d</p>\n", F_marks);
    fprintf(file, "<p>Percentage Achieved: %.2f%%</p>\n", Percentage);
    fprintf(file, "</body>\n");
    fprintf(file, "</html>\n");


    fclose(file); // Close the file
    printf("Marksheet saved as 'marksheet.html'\n");
    return 0;
}

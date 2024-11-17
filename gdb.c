#include <stdio.h>
#include <string.h>

int main() {
    // School Information
    printf("MM INTERNATIONAL SCHOOL\n");
    printf("MULLANA-AMBALA, 133207\n");
    printf("CONTACT NO: 8059930601, EMAIL ID: info@mmismullana.org\n");
    printf("AFFILIATION NO: 530655\n");

    // Student Basic Details
    char name[25], F_name[25], M_name[25], address[100];
    int grade, DOB, RollNo, ADM_No;

    // Student information input.
    printf("Enter Student Name: ");
    scanf("%s", name);
    printf("Enter Student Father's Name: ");
    scanf("%s", F_name);
    printf("Enter Student Mother's Name: ");
    scanf("%s", M_name);
    printf("Enter Student Home address: ");
    scanf(" %[^\n]", address); // Use this to capture spaces in address
    printf("Enter your Grade: ");
    scanf("%d", &grade);
    printf("Enter your Date of birth (DDMMYYYY): ");
    scanf("%d", &DOB);
    printf("Enter your Roll Number: ");
    scanf("%d", &RollNo);
    printf("Enter your Admission number: ");
    scanf("%d", &ADM_No);

    // Stream and subject selection
    char medical[5][20] = {"1-Biology", "2-Chemistry", "3-English", "4-Physics"};
    char non_med[5][20] = {"1-Mathematics", "2-Chemistry", "3-English", "4-Physics"};
    char commerce[5][20] = {"1-Business Studies", "2-Accountancy", "3-English", "4-Economics"};
    char arts[5][20] = {"1-Political Science", "2-Hindi", "3-English", "4-History"};
    
    char additional[3][20] = {"Physical Education", "Informatics Practices"};
    
    char selected_subjects[6][20]; // Increased size to accommodate additional subject
    int ADDSBJ, i;
    
    printf("Available streams:\n1- Medical\n2- Non-medical\n3- Commerce\n4- Arts\n");
    int stream;
    
    printf("Enter your stream (1-4): ");
    scanf("%d", &stream);
    
    int num_subjects = 0;
    
    if (stream == 1) {
        for (i = 0; i < 4; i++) { // Only 4 subjects for medical
            strcpy(selected_subjects[num_subjects++], medical[i]);
        }
    } else if (stream == 2) {
        for (i = 0; i < 4; i++) { // Only 4 subjects for non-medical
            strcpy(selected_subjects[num_subjects++], non_med[i]);
        }
    } else if (stream == 3) {
        for (i = 0; i < 4; i++) { // Only 4 subjects for commerce
            strcpy(selected_subjects[num_subjects++], commerce[i]);
        }
    } else if (stream == 4) {
        for (i = 0; i < 4; i++) { // Only 4 subjects for arts
            strcpy(selected_subjects[num_subjects++], arts[i]);
        }
    } else {
        printf("Invalid stream choice!\n");
        return 1; // Exit if the choice is invalid
    }

    printf("\nAdditional Available Subjects:\n1- Physical Education\n2- Informatics Practices\n");
    
    printf("\nChoose your Additional Subject (1-2): ");
    scanf("%d", &ADDSBJ);
    
    if (ADDSBJ >= 1 && ADDSBJ <= 2) {
        strcpy(selected_subjects[num_subjects++], additional[ADDSBJ - 1]); // Add selected additional subject
    }

   int marks[6]; // Adjusted size to match selected subjects including additional subject

   // Enter marks for the chosen subjects
   printf("\nEnter marks for the chosen subjects:\n");
   for (i = 0; i < num_subjects; i++) {
       printf("%s: ", selected_subjects[i]);
       scanf("%d", &marks[i]);
   }

   // Calculate practical marks based on entered marks
   int P_marks[6] = {0}; // Initialize practical marks array

   for (i = 0; i < num_subjects; i++) {
       if (marks[i] >= 70) {
           P_marks[i] = 20;
       } else if (marks[i] >= 60) {
           P_marks[i] = 18;
       } else if (marks[i] >= 50) {
           P_marks[i] = 16;
       } else if (marks[i] == 0) {
           P_marks[i] = 0;
       } else {
           P_marks[i] = 13;
       }
   }

   int T_marks[6]; // Total marks array

   // Calculate total marks
   for (i = 0; i < num_subjects; i++) {
       T_marks[i] = marks[i] + P_marks[i];
   }

   int F_marks = 0;
   for (i = 0; i < num_subjects; i++) {
       F_marks += T_marks[i];
   }

   float Percentage;
   int total_marks = num_subjects * 100 + num_subjects * 20; // Assuming each subject is out of max marks + practical max
   Percentage = ((float)F_marks / total_marks) * 100;

   printf("\nTotal Marks Obtained: %d\n", F_marks);
   printf("Percentage Achieved: %.2f%%\n", Percentage);

   return 0;
}
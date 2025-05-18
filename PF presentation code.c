#include <stdio.h>
#include <string.h>

int main (){
	char answer[4];
	int missing = 0;
	
	printf("Student Visa Document Chcecklist\n");
	printf("_________________________________\n");
	
	printf("Do you have a university acceptance letter? (yes/no):");
	scanf("%s", answer);
	if(strcmp(answer,"no")== 0){
		printf("Missing: University acceptance letter\n");
		missing++;
	}
	printf("Do you have your IELTS score? (yes/no):");
	scanf("%s",answer);
	if(strcmp(answer,"no")== 0){
		printf("Missing: IELTS score\n");
		missing++;
	}
	printf("Do you have proof of funds? (yes/no):");
	scanf("%s", answer);
	if(strcmp(answer,"no")== 0){
		printf("Missing: Proof of funds\n");
		missing++;
	}
	printf("Do you have a valid passport? (yes/no):");
	scanf("%s",answer);
	if(strcmp(answer,"no")== 0){
		printf("Missing: Visa Passport\n");
		missing++;
	}
	printf("Do you have the visa application form filled? (yes/no):");
	scanf("%s",answer);
	if(strcmp(answer,"no")== 0){
		printf("Missing: Visa application form\n");
		missing++;
	}
	printf("Do you have your academic transcripts? (yes/no):");
	scanf("%s",answer);
	if(strcmp(answer, "no")== 0){
	printf("Missing: Academic transcripts\n");
	missing++;
    }
    printf("Do you have passport-size photos? (yes/no):");
    scanf("%s",answer);
    if(strcmp(answer,"no")== 0){
    	printf("Missing: Passport-size photos\n");
    	missing++;
	}
    printf("Do you have a medical certificate? (yes/no):");
    scanf("%s",answer);
    if(strcmp(answer,"no")== 0){
    	printf("Missing: Medical certificate\n");
    	missing++;
	}
    printf("Do you have a Statement of Purpose (SOP)? (yes/no):");
    scanf("%s",answer);
    if(strcmp(answer,"no")== 0){
    	printf("Missing: Statement of Purpose (SOP)\n");
    	missing++;
	}

//  Final result
    if(missing == 0){
    	printf("\nAll documents are in place. You are ready to apply for your student visa!\n");
	} else{
		printf("\nYou are missing %d document(s). Please complete them before applying.\n",missing);
	}
    return 0;
} 






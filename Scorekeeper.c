#include<stdio.h>
#include<string.h>

main(){
	char username[51]="rey1sCool";
	char password[51]="prestige";
	char u[51]="";
	char p[51]="";
	
	do{
	printf("\n\n\n\n\n\nUsername:");
	scanf("%[^\n]");
	getchar();
	
	printf("Password:");
	scanf("%[^\n]");
	getchar();
	
	
	}while (strcmp(u,username )!=0 || strcmp(p,password)!=0 );
		printf("Try again");
	
	
	readFile();{
	FILE *f = fopen("records.txt", "r");
	
	if(!f){
		printf("No student record found!");
		while(getchar() != '\n');
		return;
	} else {
		while(!feof(f)){
			fscanf(f, "%s %d %d\n", StudentScore);	
			count++;
		}
	}
	
	fclose(f);
}

void view(){
	cls();
	puts("============================================================================================================================");
	puts(" No | Student Name              | Assignment 1     | Assignment 2     | Test 1      |Test 2      |Test 3      |Test 4      |");
	puts("============================================================================================================================");
	int i;
	for(i = 0; i < count; i++){
		printf("  %s | %d | %d| %d| %d| %d| %d|, Name[i], Assignment1[i], Assignment2[i], Test1[i]), Test2[i], Test3[i], Test4[i]");
	}
	puts("");
	printf("Press Enter to continue.....");
	while(getchar() != '\n');
	
	
	
	

}


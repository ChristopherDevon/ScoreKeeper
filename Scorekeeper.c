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
	
	if(strcmp(u,"rey1sCool")==0);
    if(strcmp(p,"prestige")==0);
 		printf("\nWelcome.Login Success!");
	
	}while (strcmp(u,username )!=0 || strcmp(p,password)!=0 );
		printf("Try again")
	
	
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

	view();{		
	cls();
	puts(" ScoreKeeper \n\n =======================================================");
	puts("\n 1.View Student Score: \n 2.Update Student Score: \n 3.Save Student Score: \n 4.Exit \n Choice :");
	
	
	}
	
	
	
	

}


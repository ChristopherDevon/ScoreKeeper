#include<stdio.h>
#include<string.h>

main(){
	char username[51]="rey1sCool";
	char password[51]="prestige";
	char u[51]="";
	char p[51]="";
	
void login (){
	do{
	printf("\n\n\n\n\n\nUsername:");
	scanf("%[^\n]");
	getchar();
	
	printf("Password:");
	scanf("%[^\n\n]");
	getchar();

	while( (p=getch())!= '\n');{
        password[i] = p;
        printf("*");
        i++;
    }
    return 1;
	
	
	}while (strcmp(u,username )!=0 || strcmp(p,password)!=0 );
}
	
	
void cls(){			
	int i;
	for(i = 0; i < 30; i++){
		puts("");
	}
}

	
void readFile();{
	FILE *f = fopen("records.txt", "r");
	
	if(!f){
		printf("No student record found!");
		while(getchar() != '\n');
		return;
	} else {
		while(!feof(f)){
			fscanf(f, "[^#]#%d#%d#%d#%d#%d#%d", Name[count],&Assignmet1[count],&Assignment2[count],&Test1[count],&Test2[count],Test3[count],Test4[count]);	
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
	
void UpdateScore(){	
	
	char name[100] = "";
	
	puts("");
	
	do{
		printf("Input player name[1..10]: ");
		scanf("%s", name);
		while(getchar() != '\n');
	} while(strlen(name) < 1 || strlen(name) > 10);	//Verification for name length
	
	//Find player
	int i;
	for(i = 0; i < count; i++){
		if(strcmp(playerName[i], name) == 0){
			//Read new score
			int newScore = -1;
			do{
				printf("Input player score[0..100]: ");
				scanf("%d", &newScore);
				while(getchar() != '\n');
			} while(newScore < 0 || newScore > 100);	//Verification for score value
			
			//Calculate new average score
			avgScore[i] = ((avgScore[i] * playingNumber[i]) + newScore) / ++playingNumber[i];
			
			puts("");
			puts("Score successfully updated^^");
			
			break;
		}
	}
}

void Save(){	
	FILE *f = fopen("records.txt", "w");
	
	int i;
	for(i = 0; i < count; i++){	
		fprintf(f, "[^#]#%d#%d#%d#%d#%d#%d", Name[count],&Assignmet1[count],&Assignment2[count],&Test1[count],&Test2[count],Test3[count],Test4[count]);
	}
	
	fclose(f);
}

	
int main(){
	int choice = 0;
	
	readFile();
	
	do{
		cls();
		puts("Score Keeper");
		puts("============");
		puts("1.View Student Score");
		puts("2.Update Student Score");
		puts("3.Save Student Score");
		puts("4.Exit (without saving)");
		puts("");
		
		do{
			choice = 0;
			printf("Input your choice[1..4]: ");
			scanf("%d", &choice);
			while(getchar() != '\n');
		} while(choice < 1 || choice > 4);
		
		switch(choice){
			case 1:
				view();
				break;
			case 2:
				UpdateScore();
				break;
			case 3:
				Save();
				break;
			case 4:
				Exit();
				break;
			
		}
	} while(choice != 5);
	
	return 0;
	
	

}



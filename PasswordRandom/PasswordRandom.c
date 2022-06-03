#include <stdio.h>
#include <time.h>
#include "keyboardHash.h"

#pragma warning(disable:4996)

#define APP_VERSION "v1.0"
#define MIN_LENGTH_PASSWORD 4
#define MAX_LENGTH_PASSWORD 516

int stringLen;
int chooseUser;
int randomNumer[MAX_LENGTH_PASSWORD];
char passwordGenerated[MAX_LENGTH_PASSWORD];

FILE* fP;





int main()
{
	//if (!fopen("passwords.txt", "r"))
	//{
		fP = fopen("passwords.txt", "a");
	//}
	
	for(;;)
	{
		printf("\n#######################################\n");
		printf("# Welcome to password generator %s #\n", APP_VERSION);
		printf("#######################################\n");

		printf("Select option: \n");
		printf("1. Generate new password\n");
		printf("2. Options\n");
		printf("3. Exit\n");
		scanf_s("%d", &chooseUser);

		if (chooseUser == 1)
		{
			srand(time(NULL));
			system("cls");
			printf("Enter password length: ");
			scanf_s("%d", &stringLen);
			if (stringLen >= 516 || stringLen < 4)
			{
				for (;;)
				{
					system("cls");
					if (stringLen > 516 || stringLen < 4)
					{
						printf("\nValid password length is between 4 - 516! Please enter valid length: ");
						scanf_s("%d", &stringLen);
					}
					else
					{
						break;
					}
				}
			}
			
			for (int i = 0; i < stringLen; i++)
			{

				randomNumer[i] = rand() % 45;
			}

			printf("\n");
			for (int y = 0; y < stringLen; y++)
			{
				int number;
				number = randomNumer[y];
				passwordGenerated[y] = hash(number);
			}
			printf("Generated password: ");
			for (int a = 0; a < stringLen; a++)
				printf("%c", passwordGenerated[a]);

			fprintf(fP, "Password: ");
			for (int y = 0; y < stringLen; y++)
				fprintf(fP, "%c", passwordGenerated[y]);
			fprintf(fP, "\n");
			printf("\nPress any key to continue");
			getchar();
			getchar();
			system("cls");
		}
		else if (chooseUser == 2)
		{
			for (;;)
			{
				system("cls");
				printf("\n#######################################\n");
				printf("# Options                         %s #\n", APP_VERSION);
				printf("#######################################\n");

				printf("Select option: \n");
				printf("1. Clear password logs in password.txt file\n");
				printf("2. -------\n");
				printf("3. Back\n");

				scanf_s("%d", &chooseUser);

				if (chooseUser == 1)
				{

				}
				else if (chooseUser == 2)
				{

				}
				else
				{
					system("cls");
					break;
				}

			}
		
			
		}
		else if (chooseUser == 3)
			break;
	}

	fclose(fP);

	return 0;
}
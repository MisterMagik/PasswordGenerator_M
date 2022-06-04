#include <stdio.h>

int randomSizeLetter;


char hash(int numberToHash)
{
	int numberToSwitch = numberToHash;
	switch (numberToSwitch)
	{
		case 0:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'a';
			else
				return 'A';
			break;
		}
		case 1:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'b';
			else
				return 'B';
			break;
		}
		case 2:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'c';
			else
				return 'C';
			break;
		}
		case 3:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'd';
			else
				return 'D';
			break;
		}
		case 4:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'e';
			else
				return 'E';
			break;
		}
		case 5:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'f';
			else
				return 'F';
			break;
		}
		case 6:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'g';
			else
				return 'G';
			break;
		}
		case 7:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'h';
			else
				return 'H';
			break;
		}
		case 8:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'i';
			else
				return 'I';
			break;
		}
		case 9:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'j';
			else
				return 'J';
			break;
		}
		case 10:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'k';
			else
				return 'K';
			break;
		}
		//
		case 11:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'l';
			else
				return 'L';
			break;
		}
		case 12:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'm';
			else
				return 'M';
			break;
		}
		case 13:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'n';
			else
				return 'N';
			break;
		}
		case 14:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'o';
			else
				return 'O';
			break;
		}
		case 15:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'p';
			else
				return 'P';
			break;
		}
		case 16:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'q';
			else
				return 'Q';
			break;
		}
		case 17:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'r';
			else
				return 'R';
			break;
		}
		case 18:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 's';
			else
				return 'S';
			break;
		}
		case 19:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 't';
			else
				return 'T';
			break;
		}
		case 20:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'u';
			else
				return 'U';
			break;
		}
		//
		case 21:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'v';
			else
				return 'V';
			break;
		}
		case 22:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'w';
			else
				return 'W';
			break;
		}
		case 23:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'x';
			else
				return 'X';
			break;
		}
		case 24:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'y';
			else
				return 'Y';
			break;
		}
		case 25:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return 'z';
			else
				return 'Z';
			break;
		}
		case 26:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return ',';
			else
				return '<';
			break;
		}
		case 27:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return '`';
			else
				return '`';
			break;
		}
		case 28:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return '.';
			else
				return '>';
			break;
		}
		case 29:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return '/';
			else
				return '?';
			break;
		}
		case 30:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return ';';
			else
				return ':';
			break;
		}
		//
		case 31:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return '[';
			else
				return '{';
			break;
		}
		case 32:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return ']';
			else
				return '}';
			break;
		}
		case 33:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return '-';
			else
				return '_';
			break;
		}
		case 34:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return '=';
			else
				return '+';
			break;
		}
		case 35:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return '1';
			else
				return '!';
			break;
		}
		case 36:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return '2';
			else
				return '@';
			break;
		}
		case 37:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return '3';
			else
				return '#';
			break;
		}
		case 38:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return '4';
			else
				return '$';
			break;
		}
		case 39:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return '5';
			else
				return '%';
			break;
		}
		case 40:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return '6';
			else
				return '^';
			break;
		}
		case 41:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return '7';
			else
				return '&';
			break;
		}
		case 42:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return '8';
			else
				return '*';
			break;
		}
		case 43:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return '9';
			else
				return '(';
			break;
		}
		case 44:
		{
			randomSizeLetter = rand() % 2;
			if (randomSizeLetter == 0)
				return '0';
			else
				return ')';
			break;
		}
		default:
		{
			return "-";
		}
	}


}

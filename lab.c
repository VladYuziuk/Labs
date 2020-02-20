/*
 * lab.c
 * 
 * Copyright 2020 Vladyslav Yuziuk <vladyslav@vladyslav-E403NA>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

static int checker(char input[],char check[]);

int main()
{
	int number;
	char str[25];
	char * yes = "yes";
	char * no = "no";
	printf("\n Hey, man! Guess the number!");
	printf("\n Enter a number.");
	scanf("%d", &number);
	if (number > 10 || number < 10) {
		printf("\n I am sorry, but you did not guess the number:(");
		printf("\n Do you want to try again? Enter yes or no.");
		scanf("%s", str);
		if (checker(str, yes)) {
			main();
		}else{
			if (checker(str, no)) {
				return 0;
			}else{
				printf("\n Told you to enter yes or no.. Now you broke me..");
				return 0;
			}
		}
	}else{
		printf("\n Congrats! You guessed the number, it was %d", number);
	}
	return 0;
}

//https://stackoverflow.com/a/29468820
int checker(char input[],char check[])
{
    int i,result=1;
    for(i=0; input[i]!='\0' || check[i]!='\0'; i++) {
        if(input[i] != check[i]) {
            result=0;
            break;
        }
    }
    return result;
}


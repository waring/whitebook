﻿#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/*작동은 되는데 한행만 작업을 한다. ex16 < ex16 텍스트 파일을 입력해봐도 첫행만 작업하여 출력하는데 왜그런지 모르겠음 */
main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max =0;
    while ((len =getline(line,MAXLINE)) >0){
		copy(longest, line);
        printf ("%d  %s\n", len -1,longest);
        return 0;
    }
}

int getline(char s[], int lim)
{
	int c, i;

	for(i =0; i <lim-1 && (c =getchar()) != EOF && c!='\n'; ++i)
		s[i] =c;
	if (c =='\n'){
		s[i] =c;
		++i;
	}
	s[i] ='\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i =0;
	while ((to[i] = from[i]) !='\0')
		++i;
}
/* File name:		number.c
 * Version:		1.0
 * Description:		this file receives a number and judges if it is valid
 * Authors:		Wen Bo <wenbo1@tp-link.com.cn>
 * Create Date:		2017-07-20
 * History:
 * ---------------------------------
 *  	01, 20Jul17, Wen Bo	create file
 */

#include "type.h"
#include <stdio.h>

/* function declarations */
BOOL begin_with_not_w_or_y(char *);
BOOL begin_with_capital(char *);
BOOL non_num_first(char *);
BOOL non_num_second(char *);
BOOL non_num_third(char *);
BOOL non_num_forth(char *);
BOOL invalid_length(char *);

/* PROB type table */
PROB judge_problem[] = 
{
	{begin_with_not_w_or_y, BEGIN_WITH_NOT_W_OR_Y},
	{begin_with_capital, BEGIN_WITH_CAPITAL},
	{non_num_first, NON_NUM_FIRST},
	{non_num_second, NON_NUM_SECOND},
	{non_num_third, NON_NUM_THIRD},
	{non_num_forth, NON_NUM_FORTH},
	{invalid_length, INVALID_LENGTH}
};

/* param in: the char * type number user input
 * param out: TRUE if number is ok 
 		      FALSE if number has error and print error message
 */
BOOL judge(char *number)
{
	/* get num of struct PROB */
	int driversize = sizeof(judge_problem) / sizeof(PROB);

	/* a flag represent if the input number is valid */
	int flag = 0;

	int i = 0;
	for (i = 0;i < driversize;++i)
	{
		/* if one problem occurs then reverse the flag */
		if (judge_problem[i].judge_func(number) == TRUE)
		{
			printf("%s", judge_problem[i].error_msg);
			flag = 1;
		}
	}
	printf("\n");

	if (flag == 0)
	{
		return TRUE;
	}
	
	return FALSE;
}

int main()
{
	char ch[5];
	scanf("%s",ch);

	if (judge(ch) == TRUE)
	{
		printf("OK\n");
	}
	
	return 0;
}

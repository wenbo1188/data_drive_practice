/* File name:		type.c
 * Version:		1.0
 * Description:		this file realizing 7 judging functions for 7 different errors
 * Authors:		Wen Bo <wenbo1@tp-link.com.cn>
 * Create Date:		2017-07-20
 * History:
 * --------------------------------
 *  	01, 20Jul17, Wen Bo	create file.
 */

#include "type.h"
#include <string.h>

/* judge if number begin with not w or y */
BOOL begin_with_not_w_or_y(char *number)
{
	return (number[0] != 'w' && number[0] != 'y') ? TRUE : FALSE;
}

/* judge if number begin with capital charactor 'W' or 'Y' */
BOOL begin_with_capital(char *number)
{
	return (number[0] == 'W' || number[0] == 'Y') ? TRUE : FALSE;
}

/* judge if the first place is number */
BOOL non_num_first(char *number)
{
	int i = 0;
	for (i = 0;i < 10;++i)
	{
		if (number[1] == i + '0')
		{
			return FALSE;
		}
	}
	return TRUE;
}

/* judge if the second place is number */
BOOL non_num_second(char *number)
{
	int i = 0;
	for (i = 0;i < 10;++i)
	{
		if (number[2] == i + '0')
		{
			return FALSE;
		}
	}
	return TRUE;
}

/* judge if the third place is number */
BOOL non_num_third(char *number)
{
	int i = 0;
	for (i = 0;i < 10;++i)
	{
		if (number[3] == i + '0')
		{
			return FALSE;
		}
	}
	return TRUE;
}

/* judge if the forth place is number */
BOOL non_num_forth(char *number)
{
	int i = 0;
	for (i = 0;i < 10;++i)
	{
		if (number[4] == i + '0')
		{
			return FALSE;
		}
	}
	return TRUE;
}

/* judge if the length of number is 5 */
BOOL invalid_length(char *number)
{
	return strlen(number) == 5 ? FALSE : TRUE;
}



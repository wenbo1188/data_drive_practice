/* 
 * File name:		type.h
 * Version:		1.0
 * Description:		this file defines type of structure during judging valid number
 * Authors:		Wen Bo <wenbo1@tp-link.com.cn>
 * Create Date:		2017-07-20
 * History:
 * ---------------------------
 *  	01, 20Jul17, Wen Bo	create file.
 */

/* define 7 error type */
#define BEGIN_WITH_NOT_W_OR_Y "Begin with not w or y\n"
#define BEGIN_WITH_CAPITAL    "Begin with capital w or capital y\n"
#define NON_NUM_FIRST	      "Non-number in 1st place\n"
#define NON_NUM_SECOND	      "Non-number in 2nd place\n"
#define NON_NUM_THIRD         "Non-number in 3rd place\n"
#define NON_NUM_FORTH         "Non-number in 4th place\n"
#define INVALID_LENGTH	      "Invalid length\n"

/* define TRUE equals 1 and FALSE equals 0 */
#define TRUE 		      1
#define FALSE		      0

/* error message type */
typedef char* ERROR;

/* BOOL type */
typedef int BOOL;

/* function pointer type receiving a char * input
 * and return a BOOL output
 */
typedef BOOL (*BOOL_FUNC_POINT)(char *);

/* structure for judging a problem */
typedef struct JUDGE_PROBLEM
{
	BOOL_FUNC_POINT judge_func; /* function pointer to judge if a certain error exist */
	ERROR error_msg;            /* error message */
}PROB;



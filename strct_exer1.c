//strct_exer1.c
#include <stdio.h>
#include "exer_com.h"

int main(char from,char to,char *msg[])
{
	ST_EXER st_val[2] = {{'1','2',"Good morinig!"},{'3','4',"Good afternoon!"}};
	ST_EXER *st_val_p0 = &st_val[0];
	ST_EXER *st_val_p1 = &st_val[1];

	printf("*** Init ***\n");

	printf("struct from = %c\n",st_val_p0->from);
	printf("struct to = %c\n",st_val_p0->to);
	printf("struct msg = %s\n",st_val_p0->msg);

	printf("struct from = %c\n",st_val_p1 -> from);
	printf("struct to = %c\n",st_val_p1 -> to);
	printf("struct msg = %s\n",st_val_p1 -> msg);

	st_val_p0 -> from = 'A';
	st_val_p0 -> to = 'B';
	st_val_p0 -> msg = "This is a pen";

	printf("*** Modify ***\n");

        printf("struct from = %c\n",st_val[0].from);
        printf("struct to = %c\n",st_val[0].to);
        printf("struct msg = %s\n",st_val[0].msg);

	return 0;
}	

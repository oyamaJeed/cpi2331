#include <stdio.h>

#ifndef USER_COM_ENA
	#define USER_COM_ENA
#endif

#include "user_com.h"

int main(int argv, char *argc[])
{
	ST_SMPL	st_val = {'B',567, {3.14, 6.28}};	
	ST_SMPL *st_val_p = &st_val;

	printf("*** Before ****\n");

	printf("struct c_mnb=%c\n", st_val_p->c_mnb);
	printf("struct i_mnb=%d\n", st_val.i_mnb);
	printf("struct d_mnb[0]=%3.8f d_mnb[1]=%3.8f\n",
				 st_val_p->d_mnb[0], st_val_p->d_mnb[1]);

	st_val.c_mnb = 'A';
	st_val_p->i_mnb = 1234;

	st_val.d_mnb[0] = 1.41421356;
	st_val.d_mnb[1] = 1.7320508;

	printf("*** After ****\n");

	printf("struct c_mnb=%c\n", st_val_p->c_mnb);
	printf("struct i_mnb=%d\n", st_val.i_mnb);
	printf("struct d_mnb[0]=%3.8f d_mnb[1]=%3.8f\n",
				 st_val_p->d_mnb[0], st_val_p->d_mnb[1]);

	printf("COM_VALUE=%d\n", COM_VALUE);

	return 0;
}

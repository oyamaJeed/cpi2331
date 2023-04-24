#include <stdio.h>

#include "user_com.h"

int main(int argv, char *argc[])
{
	UNI_SMPL	uni_val = {0x12345678};	
	UNI_SMPL	*uni_val_p = &uni_val;

	printf("*** Before ****\n");

	printf("union long=%ld\n", uni_val.l_mnb);
	for(int i=0; i<4; i++)	{
		printf("union sary c_ary=0x%02x\n", uni_val.sary.c_ary[i]);
	}

	for(int j=0; j<4; j++)	{
		uni_val_p->sary.c_ary[j] = 0x50 + j;
	}

	printf("*** After ****\n");

	printf("union long=%ld\n", uni_val_p->l_mnb);
	for(int i=0; i<4; i++)	{
		printf("union sary c_ary=0x%02x\n", uni_val_p->sary.c_ary[i]);
	}

	printf("COM_VALUE=%d\n", COM_VALUE);

	return 0;
}

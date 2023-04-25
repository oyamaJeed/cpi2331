//strct_exer1.c
#include <stdio.h>
#include "exer_com.h"

int main(char from,char to,char *msg[])
{
	ST_EXER st_val[2] = {{'1','2',"Good morinig!"},{'3','4',"Good afternoon!"}};
	ST_EXER *st_val_p = st_val;

	printf("*** Init ***\n");

	printf("struct from = %c\n",st_val_p->from);
	printf("struct to = %c\n",st_val_p->to);
	printf("struct msg = %s\n",st_val_p->msg);

	st_val_p=st_val_p+1;
	printf("struct from = %c\n",st_val_p -> from);
	printf("struct to = %c\n",st_val_p -> to);
	printf("struct msg = %s\n",st_val_p -> msg);

	st_val_p=st_val_p-1;
	st_val_p -> from = 'A';
	st_val_p -> to = 'B';
	char a[]="This is a pen";
	for(int i=0;i<30;i++){
		st_val_p -> msg[i] = a[i];
	}

	printf("*** Modify ***\n");

        printf("struct from = %c\n",st_val[0].from);
        printf("struct to = %c\n",st_val[0].to);
        printf("struct msg = %s\n",st_val[0].msg);

	return 0;
}	

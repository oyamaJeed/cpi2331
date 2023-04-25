//uni_exer1.c
#include <stdio.h>
#include "exer_com.h"

int main(int argv,char *argc[])
{	
	char text[]="This is an apple!";
	UNI_EXER uni_val;
	uni_val.exer = (ST_EXER){'C','D',"Good evening!"};
	UNI_EXER *uni_val_p = &uni_val;
	printf("*** Init ***\n");
	printf("%c\n",uni_val.exer.from);
        printf("%c\n",uni_val.exer.to);
        printf("%s\n",uni_val.exer.msg);

	uni_val_p->sary.c_ary[0] = 'E';
	uni_val_p->sary.c_ary[1] = 'F';
	
	for(int i=2;i<32;i++){
		uni_val_p->sary.c_ary[i]=text[i-2];
	}

	printf("%c\n",uni_val.exer.from);
	printf("%c\n",uni_val.exer.to);
        printf("%s\n",uni_val.exer.msg);




	return 0;
}

#include <stdio.h>

#define ARY_MAX 3
#define STR_MAX 10
char **get_modify_str_ary(int len_ary1,char inp_ary1);

int main(int argc ,char *argv[])
{
	char inp_ary1[][8] = {"Appl","Orang","Banan"};
	for(int i=0; i<ARY_MAX;i++){
		printf("Before str ary[%d]=%s\n",i,inp_ary1[i]);
	}
	
	get_modify_str_ary(3,inp_ary1);
	
	printf("------------------------------------\n");
	for(int k=0; k<ARY_MAX;k++){
                printf("After str ary[%d]=%s\n",k,inp_ary1[k]);
        }

	return 0;
}

char **get_modify_str_ary(int len_ary1,char inp_ary1[][8]){
	char add_str[][2] = {"e","e","a"};
	char new_ary[][8];
	for(int i=0;i<ARY_MAX;i++){
		for(int t=0;t<STR_MAX;t++){
			new_ary[i][t] = inp_ary1[i][t];
			if(inp_ary1[i][t]=='\0'){
				new_ary[i][t] = add_str[i][2];
			}
		}
	}
	return new_ary;
}


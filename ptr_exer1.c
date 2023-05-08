#include <stdio.h>
#include <string.h>

#define ARY_MAX 3

char **get_modify_str_ary(char inp_ary1[][8],int ary1_line);

int main(int argc ,char *argv[])
{
	char inp_ary1[][8] = {"Appl","Orang","Banan"};
	for(int i=0; i<ARY_MAX;i++){
		printf("Before str ary[%d]=%s\n",i,inp_ary1[i]);
	}
	
	**get_modify_str_ary(inp_ary1,3);
	
	printf("------------------------------------\n");
	for(int k=0; k<ARY_MAX;k++){
                printf("After str ary[%d]=%s\n",k,inp_ary1[k]);
        }

	return 0;
}

char **get_modify_str_ary(char inp_ary1[][8],int ary1_line){
	char add_str[][2] = {"e","e","a"};
	for(int i=0;i<ary1_line;i++){
		strcat(inp_ary1[i],add_str[i]);
	//	printf("%s",inp_ary1[i]);
	}
		
		
}


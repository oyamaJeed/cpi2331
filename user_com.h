/*--------------------------------------
 User common header file
--------------------------------------*/
#ifdef USER_COM_ENA
	#define	COM_VALUE	100
#else
	#define COM_VALUE	200
#endif

#define COM_OK	0	//正常終了

//----構造体定義----------------------------------
struct st_smpl {
	char c_mnb;
	int i_mnb;
	double d_mnb[2];
};

typedef struct st_smpl	ST_SMPL;

struct st_ary	{
	char c_ary[4];
};

typedef struct st_ary ST_ARY;

//----共用体定義----------------------------------
union uni_smpl	{
	long	l_mnb;
	ST_ARY sary;
};

typedef union uni_smpl UNI_SMPL;


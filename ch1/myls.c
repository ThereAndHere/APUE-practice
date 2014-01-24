/***********************************************
 * FileName： 	myls.c
 * Author:	ThereAndHere
 * Date:	12.01.24
 * Description:
 * 	列出目录中所有文件
 * **********************************************/
#include<sys/types.h>
#include<dirent.h>
#include"../include/errmsg.h"

int main(int argc, char* argv[])
{
	DIR	*dp;
	struct dirent 	*dirp;
	if(argc != 2)
		err_msg("usage: ls directory_name");
	if((dp = opendir(argv[1])) == NULL)
		err_msg("Can't open");
	while((dirp = readdir(dp)) != NULL)
		printf("%s\n", dirp->d_name);

	closedir(dp);
	exit(0);
}

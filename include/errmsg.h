/*********************************************
 * FileName: 	errmsg.h
 * Author: 	ThereAndHere
 * Date:	14.01.24
 * Description:	
 * 	提供错误信息
 **********************************************/
#ifndef _ERRMSG_H
#define _ERRMSG_H

#include<stdio.h>
#include<errno.h>

void err_msg(const char* msg)
{
	perror("msg");
	exit(1);
}


#endif /*_ERRMSG_H*/

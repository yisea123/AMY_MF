
#include "config.h"

/*********************************************************************
 ** 函数名称: strsearch ()
 ** 函数功能: 在指定的数组里连续找到相同的内容
 ** 入口参数: ptr2要查找的内容, ptr1当前数组
 ** 出口参数: 0-没有 找到   >1 查找到
 *********************************************************************/
u8 strsearch(u8 *ptr2,u8 *ptr1_at,u8 Rxx)//查字符串*ptr2在*ptr1中的位置
//本函数是用来检查字符串*ptr2是否完全包含在*ptr1中
//返回:  0  没有找到
//255 从第N个字符开始相同
{
u8 i,j,k;
        

	
	if(Rxx==0) return(0);
	
	for(i=0,j=0;i<Rxx;i++)
	{
        	if(ptr1_at[i]==ptr2[j])
       		{	//第一个字符相同
        		for(k=i;k<Rxx+1;k++,j++)
        		{

        			if(ptr2[j]==0)//比较正确
        			{
                                  return(k);               //返回值是整数，不含0
                                }
        			if(ptr1_at[k]!=ptr2[j]) break;

        		}
        		j=0;
        	}
	}
	return(0);
}

/*********************************************************************
 ** 函数名称: strsearch_h ()
 ** 函数功能: 在指定的数组里连续找到相同的内容
 ** 入口参数: ptr2要查找的内容, ptr1当前数组
 ** 出口参数: 0-没有 找到   >1 查找到
 *********************************************************************
u16 strsearch_h(u8 *ptr2,u8 *ptr1_at,u16 Rx)//查字符串*ptr2在*ptr1中的位置
//本函数是用来检查字符串*ptr2是否完全包含在*ptr1中
//返回:  0  没有找到
//65535 从第N个字符开始相同
{
u16 i,j,k;
        
      
	if(Rx==0) return(0);
	
	for(i=0,j=0;i<Rx;i++)
	{
        	if(ptr1_at[i]==ptr2[j])
       		{	//第一个字符相同
        		for(k=i;k<Rx+1;k++,j++)
        		{

        			if(ptr2[j]==0)//比较正确
        			{                return(k);               //返回值是整数，不含0
                                }
        			if(ptr1_at[k]!=ptr2[j]) break;

        		}
        		j=0;
        	}
	}
	return(0);
}
*/
/*********************************************************************
 ** 函数名称: strsearch_qwl ()
 ** 函数功能: 在指定的数组里连续找到相同的内容
 ** 入口参数: ptr2要查找的内容, ptr1当前数组
 ** 出口参数: 0-没有 找到   >1 查找到
 *********************************************************************/
u16 strsearch_qwl(u8 *ptr2,u8 *ptr1_at,u16 Rx,u16 ptr2_len)//查字符串*ptr2在*ptr1中的位置
//本函数是用来检查字符串*ptr2是否完全包含在*ptr1中
//返回:  0  没有找到
//65535 从第N个字符开始相同
{
u16 i,j,k;
        
      
	if(Rx==0) return(0);
	
	for(i=0,j=0;i<Rx;i++)
	{
        	if(ptr1_at[i]==ptr2[j])
       		{	//第一个字符相同
        		for(k=i;k<Rx+1;k++,j++)
        		{

        			if(j==ptr2_len)//比较正确
        			{                return(k);               //返回值是整数，不含0
                                }
        			if(ptr1_at[k]!=ptr2[j]) break;

        		}
        		j=0;
        	}
	}
	return(0);
}


//
//  main.c
//  GPSread
//
//  Created by 20161104613 on 2017/6/16.
//  Copyright © 2017年 20161104613. All rights reserved.
//

#include <stdio.h>

int main()
{
    char str1[70];
    char str2[70];
    char lat[8];
    //char lon[8];
    int i;
    FILE *fp1;
    //Users/a20161104613/Downloads/TRAC-master/GPS170510.log
    fp1=fopen("//Users//a20161104613//Downloads//TRAC-master//GPS170510.log","r");
    //fp2=fopen("//Users//a20161104613//Desktop//GPSread//read.txt","w");
    if(fp1==NULL)
    {
        printf("打开文件错误！\n");
    }
    else
    {
        fscanf(fp1,"%s%s",str1,str2);
        printf("结果是：\n%s\n%s\n",str1,str2);
        for(i=0;i<8;i++)
            lat[i]=str1[i+16];
        lat[8]='\0';
        if(str1[18]='N')
        {
        printf("纬度：北纬%s\n",lat);
        }
    else
    {
        printf("纬度：南纬%s\n",lat);
    }
        fclose(fp1);
        return 0;
    }
    
}

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
    char a[65];
    int j,i,t;;
    FILE *fp1,*fp2;
    fp1=fopen("//Users//a20161104613//Downloads//TRAC-master//GPS170510.log ","r");
    fp2=fopen("//Users//a20161104613//Desktop//GPSread//read.txt","w");
    if(fp1==NULL)
    {
        printf("打开文件错误！\n");
    }
    else
    {
        
    }
}

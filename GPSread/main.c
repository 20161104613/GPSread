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
    char time[10],gps,lat1,lon1,year[10],s[5];
    double lat,lon,v,course;
    FILE *fp1;
    fp1=fopen("//Users//a20161104613//Downloads//TRAC-master//GPS170510.log","r");
    //fp2=fopen("//Users//a20161104613//Desktop//GPSread//read.txt","w");
    if(fp1==NULL)
    {
        printf("打开文件错误！\n");
    }
    else
    {
        fscanf(fp1,"$GPRMC,%6s,%c,%8s,%c,%9s,%c,%lf,%lf,%6s,,%3s\n$GPGGA,%6s,%lf,%8c,%lf,%c,%lf,%c,%d,%2s,,%4s,M,,M,,%3s\n",time,&gps,lat,&lat1,lon,&lon1,&v,&course,year,s,Time,&Lat,&Lat1,&Lon,&Lon1,&gps);
        //printf("$GPRMC,%6s,%c,%lf,%c,%lf,%c,%lf,%lf,%6s,,%s",time,&gps,&lat,&lat1,&lon,&lon1,&v,&course,year,s);
        if(gps=='A')
        {
            printf("当前为%c%c年%c%c月%c%c日%c%c时%c%c分%c%c秒\n",year[0],year[1],year[2],year[3],year[4],year[5],time[0],time[1],time[2],time[3],time[4],time[5]);
            if(lat1=='N')
            {
                printf("纬度：北纬%lf\n",lat);
            }
            else
            {
                printf("纬度：南纬%lf\n",lat);
            }
            if(lon1=='E')
            {
                printf("经度：东经%lf\n",lon);
            }
            else
            {
                printf("经度：西经%lf\n",lon);
            }
            printf("地面速率是%lf节，地面航向是%lf度\n",v,course);
        }
        else
        {
            printf("无效定位\n");
        }
        return 0;
    }
}

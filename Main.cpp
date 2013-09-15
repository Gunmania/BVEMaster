//BVEMaster Beta 0.65 Source Code
//Programming by Gunmania
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	FILE *output;
	long sec;
	sec=2;
	int num=0,num2=0,num3=0,num4=0,input,j=0;
	int i=0;
	char buffer[5000]={0,},filename[500]={0,};
	printf("저장할 파일이름 입력(확장자 빼고 입력,이어쓰려면 이어쓸 파일 이름입력) : ");
	gets(filename);
	printf("\n");
	for(j=0;j<500;j++)
	{
		if(filename[j]=='\0')
		{
			filename[j]='.';
			filename[j+1]='c';
			filename[j+2]='s';
			filename[j+3]='v';
			filename[j+4]='\0';
			break;
		}
	}
	output=fopen(filename,"a");
	menu:
		printf("      BVEMaster Ver.0.65 \n");
		printf("---------------------------\n");
		printf("-일반 구문-\n");
		printf("1.거리입력(M) \n");
		printf("2.한줄 띄기 \n");
		printf("-Route 구문-\n");
		printf("3.열차 설명(Route.Comment) \n");
		printf("4.시간표 설명(Route.Timetable) \n");
		printf("5.궤간(Route.Gauge) \n");
		printf("6.개발자 ID(Route.DeveloperID) \n");
		printf("-Train 구문-\n");
		printf("7.차량 폴더(Train.Folder)\n");
		printf("---------------------------\n");
		printf("번호 입력(프로그램을 종료하려면 0 입력) : ");
	scanf("%d",&input);
	if(input==1)
	{
		printf("입력 : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : %s \n\n",buffer);
		fprintf(output,"%s\n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==2)
	{
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : (한줄띄기)\n\n");
		fprintf(output,"\n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==3)
	{
		printf("입력 : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : Route.Comment %s \n\n",buffer);
		fprintf(output,"Route.Comment %s \n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==4)
	{
		printf("입력 : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : Route.Timetable %s \n\n",buffer);
		fprintf(output,"Route.Timetable %s \n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==5)
	{
		printf("입력 : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : Route.Gauge %s \n\n",buffer);
		fprintf(output,"Route.Gauge %s \n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==6)
	{
		printf("입력 : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : Route.DeveloperID %s \n\n",buffer);
		fprintf(output,"Route.DeveloperID %s\n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==7)
	{
		printf("입력 : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : Train.Folder %s \n\n",buffer);
		fprintf(output,"Train.Folder %s\n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	printf("\n이용해 주셔서 감사합니다. -건매니아-\n");
	Sleep(sec*5000);
	return 0;
}

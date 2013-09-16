//BVEMaster Beta 0.65 Source Code (2009. 3. 14)
//Programming by Gunmania
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_COLS 32768

int main()
{
	FILE *output;
	long sec;
	sec=2;
	int num=0,num2=0,num3=0,num4=0,input;
	int i=0, j=0, k=0;
	char buffer[5000]={0,},filename[500]={0,}, textBuffer[MAX_COLS];;
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
	menu:
		output=fopen(filename,"a+");
		printf("      BVEMaster Ver.0.65 \n");
		printf("---------------------------\n");
		printf("1. 파일 내용 출력 \n");
		printf("-일반 구문-\n");
		printf("2. 거리입력(M) \n");
		printf("3. 한줄 띄기 \n");
		printf("4. 주석 입력(;) \n");
		printf("-Route 구문-\n");
		printf("5. 열차 설명(.Comment) \n");
		printf("6. 시간표 설명(.Timetable) \n");
		printf("7. 궤간(.Gauge) \n");
		printf("8. 열차 거리(.RunInterval) \n");
		printf("9. 개발자 ID(.DeveloperID) \n");
		printf("-Train 구문-\n");
		printf("10. 차량 폴더(.Folder)\n");
		printf("---------------------------\n");
		printf("번호 입력(프로그램을 종료하려면 0 입력) : ");
	scanf("%d",&input);
	if(input==1)
	{
		printf("\n");
		for (k=1;;k++)
		{
			if (fgets(textBuffer,256,output)==NULL)
				break;
			printf("%d:%s",k,textBuffer);
		}
		k=1;
		fclose(output);
		goto menu;
	}
	if(input==2)
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
	if(input==3)
	{
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : (한줄띄기)\n\n");
		fprintf(output,"\n",buffer);
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
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : ; %s \n\n",buffer);
		fprintf(output,"; %s \n",buffer);
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
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : Route.Comment %s \n\n",buffer);
		fprintf(output,"Route.Comment %s \n",buffer);
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
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : Route.Timetable %s \n\n",buffer);
		fprintf(output,"Route.Timetable %s \n",buffer);
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
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : Route.Gauge %s \n\n",buffer);
		fprintf(output,"Route.Gauge %s \n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==8)
	{
		printf("입력 : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : Route.Interval %s \n\n",buffer);
		fprintf(output,"Route.Interval %s \n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==9)
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
	if(input==10)
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
	if(input==0)
	{
		printf("\n이용해 주셔서 감사합니다. -건매니아-\n");
		Sleep(sec*5000);
	}
	printf("잘못 입력하셨습니다.\n");
	goto menu;
	return 0;
}
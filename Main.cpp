//BVEMaster Beta 0.70 Source Code (2011. 3. 27)
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
	char buffer[5000]={0,},filename[500]={0,}, textBuffer[MAX_COLS];
	char buffer2[5000]={0,}, buffer3[5000]={0,},buffer4[5000]={0,},buffer5[5000]={0,};
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
		printf("      BVEMaster Ver.0.70 \n");
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
		printf("-Track 구문-\n");
		printf("11. 레일 추가/수정(.Rail)\n");
		printf("12. 레일 종료(.RailEnd)\n");
		printf("13. 안개(.Fog)\n");
		printf("14. 정차 위지(.Stop)\n");
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
	if(input==11)
	{
		printf("선로 번호 : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("X 방향 거리 : ");
		fflush(stdin);
		gets(buffer2);
		fflush(stdin);
		printf("Y 방향 거리 : ");
		fflush(stdin);
		gets(buffer3);
		fflush(stdin);
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : Track.Rail %s; %s; %s;\n\n",buffer,buffer2,buffer3);
		fprintf(output,"Track.Rail %s; %s; %s;\n",buffer,buffer2,buffer3);
		for(i=0;i<5000;i++)
		{
			buffer[i]=0;
			buffer2[i]=0;
			buffer3[i]=0;
		}
		goto menu;
	}
	if(input==12)
	{
		printf("선로 번호 : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("X 방향 거리 (옵션) : ");
		fflush(stdin);
		gets(buffer2);
		fflush(stdin);
		printf("Y 방향 거리 (옵션) : ");
		fflush(stdin);
		gets(buffer3);
		fflush(stdin);
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : Track.RailEnd %s; %s; %s\n\n",buffer,buffer2,buffer3);
		fprintf(output,"Track.RailEnd %s; %s; %s\n",buffer,buffer2,buffer3);
		for(i=0;i<5000;i++)
		{
			buffer[i]=0;
			buffer2[i]=0;
			buffer3[i]=0;
		}
		goto menu;
	}
	if(input==13)
	{
		printf("시작 : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("종료 : ");
		fflush(stdin);
		gets(buffer2);
		fflush(stdin);
		printf("Red (0~255) : ");
		fflush(stdin);
		gets(buffer3);
		fflush(stdin);
		printf("Green (0~255) : ");
		fflush(stdin);
		gets(buffer4);
		fflush(stdin);
		printf("Blue (0~255) : ");
		fflush(stdin);
		gets(buffer5);
		fflush(stdin);
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : Track.Fog %s; %s; %s; %s; %s\n\n",buffer,buffer2,buffer3,buffer4,buffer5);
		fprintf(output,"Track.Fog %s; %s; %s; %s; %s\n",buffer,buffer2,buffer3,buffer4,buffer5);
		for(i=0;i<5000;i++)
		{
			buffer[i]=0;
			buffer2[i]=0;
			buffer3[i]=0;
			buffer4[i]=0;
			buffer5[i]=0;
		}
		goto menu;
	}
	if(input==14)
	{
		printf("표지판 방향 (-1 : 좌, 1 : 우 , 0 : 없음) : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("구문 생성 성공,파일에 쓰기 성공\n생성된 구문 : Track.Stop %s\n\n",buffer);
		fprintf(output,"Track.Stop %s\n",buffer);
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
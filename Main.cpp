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
	printf("������ �����̸� �Է�(Ȯ���� ���� �Է�,�̾���� �̾ ���� �̸��Է�) : ");
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
		printf("-�Ϲ� ����-\n");
		printf("1.�Ÿ��Է�(M) \n");
		printf("2.���� ��� \n");
		printf("-Route ����-\n");
		printf("3.���� ����(Route.Comment) \n");
		printf("4.�ð�ǥ ����(Route.Timetable) \n");
		printf("5.�˰�(Route.Gauge) \n");
		printf("6.������ ID(Route.DeveloperID) \n");
		printf("-Train ����-\n");
		printf("7.���� ����(Train.Folder)\n");
		printf("---------------------------\n");
		printf("��ȣ �Է�(���α׷��� �����Ϸ��� 0 �Է�) : ");
	scanf("%d",&input);
	if(input==1)
	{
		printf("�Է� : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : %s \n\n",buffer);
		fprintf(output,"%s\n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==2)
	{
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : (���ٶ��)\n\n");
		fprintf(output,"\n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==3)
	{
		printf("�Է� : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : Route.Comment %s \n\n",buffer);
		fprintf(output,"Route.Comment %s \n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==4)
	{
		printf("�Է� : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : Route.Timetable %s \n\n",buffer);
		fprintf(output,"Route.Timetable %s \n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==5)
	{
		printf("�Է� : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : Route.Gauge %s \n\n",buffer);
		fprintf(output,"Route.Gauge %s \n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==6)
	{
		printf("�Է� : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : Route.DeveloperID %s \n\n",buffer);
		fprintf(output,"Route.DeveloperID %s\n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==7)
	{
		printf("�Է� : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : Train.Folder %s \n\n",buffer);
		fprintf(output,"Train.Folder %s\n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	printf("\n�̿��� �ּż� �����մϴ�. -�ǸŴϾ�-\n");
	Sleep(sec*5000);
	return 0;
}

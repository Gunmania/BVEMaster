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
	menu:
		output=fopen(filename,"a+");
		printf("      BVEMaster Ver.0.70 \n");
		printf("---------------------------\n");
		printf("1. ���� ���� ��� \n");
		printf("-�Ϲ� ����-\n");
		printf("2. �Ÿ��Է�(M) \n");
		printf("3. ���� ��� \n");
		printf("4. �ּ� �Է�(;) \n");
		printf("-Route ����-\n");
		printf("5. ���� ����(.Comment) \n");
		printf("6. �ð�ǥ ����(.Timetable) \n");
		printf("7. �˰�(.Gauge) \n");
		printf("8. ���� �Ÿ�(.RunInterval) \n");
		printf("9. ������ ID(.DeveloperID) \n");
		printf("-Train ����-\n");
		printf("10. ���� ����(.Folder)\n");
		printf("-Track ����-\n");
		printf("11. ���� �߰�/����(.Rail)\n");
		printf("12. ���� ����(.RailEnd)\n");
		printf("13. �Ȱ�(.Fog)\n");
		printf("14. ���� ����(.Stop)\n");
		printf("---------------------------\n");
		printf("��ȣ �Է�(���α׷��� �����Ϸ��� 0 �Է�) : ");
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
	if(input==3)
	{
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : (���ٶ��)\n\n");
		fprintf(output,"\n",buffer);
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
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : ; %s \n\n",buffer);
		fprintf(output,"; %s \n",buffer);
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
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : Route.Comment %s \n\n",buffer);
		fprintf(output,"Route.Comment %s \n",buffer);
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
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : Route.Timetable %s \n\n",buffer);
		fprintf(output,"Route.Timetable %s \n",buffer);
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
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : Route.Gauge %s \n\n",buffer);
		fprintf(output,"Route.Gauge %s \n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==8)
	{
		printf("�Է� : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : Route.Interval %s \n\n",buffer);
		fprintf(output,"Route.Interval %s \n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==9)
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
	if(input==10)
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
	if(input==11)
	{
		printf("���� ��ȣ : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("X ���� �Ÿ� : ");
		fflush(stdin);
		gets(buffer2);
		fflush(stdin);
		printf("Y ���� �Ÿ� : ");
		fflush(stdin);
		gets(buffer3);
		fflush(stdin);
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : Track.Rail %s; %s; %s;\n\n",buffer,buffer2,buffer3);
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
		printf("���� ��ȣ : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("X ���� �Ÿ� (�ɼ�) : ");
		fflush(stdin);
		gets(buffer2);
		fflush(stdin);
		printf("Y ���� �Ÿ� (�ɼ�) : ");
		fflush(stdin);
		gets(buffer3);
		fflush(stdin);
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : Track.RailEnd %s; %s; %s\n\n",buffer,buffer2,buffer3);
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
		printf("���� : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("���� : ");
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
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : Track.Fog %s; %s; %s; %s; %s\n\n",buffer,buffer2,buffer3,buffer4,buffer5);
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
		printf("ǥ���� ���� (-1 : ��, 1 : �� , 0 : ����) : ");
		fflush(stdin);
		gets(buffer);
		fflush(stdin);
		printf("���� ���� ����,���Ͽ� ���� ����\n������ ���� : Track.Stop %s\n\n",buffer);
		fprintf(output,"Track.Stop %s\n",buffer);
		for(i=0;i<5000;i++)
			buffer[i]=0;
		goto menu;
	}
	if(input==0)
	{
		printf("\n�̿��� �ּż� �����մϴ�. -�ǸŴϾ�-\n");
		Sleep(sec*5000);
	}
	printf("�߸� �Է��ϼ̽��ϴ�.\n");
	goto menu;
	return 0;
}
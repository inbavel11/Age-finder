
#include <stdio.h>
#include<conio.h>
int date(int d, int m, int y,int d1,int m1,int y1)
{
	int s = 0, f;
	for (int i = y1; i < y; i++)

	{
		if (i % 400 == 0)
			s = s + 366;

		else if (i % 4 == 0 && i % 100 != 0)
			s = s + 366;
		else
			s = s + 365;
	}
	if (y % 400 == 0)
		f = 29;
	else if (y % 4 == 0 && y % 100 != 0)
		f = 29;
	else
		f = 28;
	switch (m)
	{
	case 1:
		s = d + s;
		break;
	case 2:
		s = s + 31 + d;
		break;
	case 3:
		s = s + 31 + f + d;
		break;
	case 4:
		s = s + 62 + f + d;
		break;
	case 5:
		s = s + 92 + f + d;
		break;
	case 6:
		s = s + 123 + f + d;
		break;
	case 7:
		s = s + 153 + f + d;
		break;
	case 8:
		s = s + 184 + f + d;
		break;
	case 9:
		s = s + 215 + f + d;
		break;
	case 10:
		s = s + 245 + f + d;
		break;
	case 11:
		s = s + 276 + f + d;
		break;
	case 12:
		s = s + 306 + f + d;
		break;
	}
	
	if (y1 % 400 == 0)
		f = 29;
	else if (y1 % 4 == 0 && y1 % 100 != 0)
		f = 29;
	else
		f = 28;
	switch(m1)
	{
		case 1:
		s=s-d1;
		break;
	case 2:
		s = s -31-d1;
		break;
	case 3:
		s = s -f-31-d1;
		break;
	case 4:
		s = s - 62 - f -d1;
		break;
	case 5:
		s = s - 92 - f -d1;
		break;
	case 6:
		s = s - 123 - f - d1;
		break;
	case 7:
		s = s - 153 - f - d1;
		break;
	case 8:
		s = s - 184 - f - d1;
		break;
	case 9:
		s = s - 215 - f - d1;
		break;
	case 10:
		s = s - 245 - f - d1;
		break;
	case 11:
		s = s - 276 - f -d1;
		break;
	case 12:
		s = s - 306 - f - d1;
		break;
}

return s;
}
	int main()
{
	int d, m, y,d1,m1,y1;
	for (int i = 1; i > 0; i++)
	{
		
		printf("\ntoday DATE=");
		scanf("%d %d %d", &d, &m, &y);
		printf("\nYour hbd=");
		scanf("%d %d %d",&d1,&m1,&y1);
	
		printf("\n%d years ",date(d, m, y,d1,m1,y1)/365);
		printf("\n%d months",(date(d, m, y,d1,m1,y1)*12/365));
			printf("\n%d weeks",(date(d, m, y,d1,m1,y1)/7));
			printf("\n%d days\n", date(d, m, y,d1,m1,y1));
	}
	return 0;
}
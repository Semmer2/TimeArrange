#include"iostream"
#include"conio.h"
using namespace std;

int* CalTime(int Current, int Len, int width, int days);
int InOrNot(int time);

int main()
{

	char ch;
	int time=1;
	cout << "��������Ʒ����ʱ�䣺";
	cin >> time;
	int Count = InOrNot(time);
	if (!Count)
		cout << "δ�ҵ��������" << endl;
	else cout << "��" << Count << "��ʱ��" << endl;
	getch();
	return 0;
}

int InOrNot(int time)
{
	int count = 0;

	const int min1 = 10;
	const int min2 = 15;
	const int min3 = 20;

	//
	int* time1 = CalTime(min1, time, 2, 0);
	switch (time1[0])
	{
	case min1:
		cout << "��10h���������ڵ�" << time1[1] << "��10h��¯" << endl;
		count++;
		break;
	case min1+1:
		cout << "��10h���������ڵ�" << time1[1] << "��11h��¯" << endl;
		count++;
		break;
	case min1+2:
		cout << "��10h���������ڵ�" << time1[1] << "��12h��¯" << endl;
		count++;
		break;
	case min2:
		cout << "��10h���������ڵ�" << time1[1] << "��15h��¯" << endl;
		count++;
		break;
	case min2+1:
		cout << "��10h���������ڵ�" << time1[1] << "��16h��¯" << endl;
		count++;
		break;
	case min3:
		cout << "��10h���������ڵ�" << time1[1] << "��20h��¯" << endl;
		count++;
		break;
	case min3+1:
		cout << "��10h���������ڵ�" << time1[1] << "��21h��¯" << endl;
		count++;
		break;
	case min3+2:
		cout << "��10h���������ڵ�" << time1[1] << "��22h��¯" << endl;
		count++;
		break;
	default:
		break;
	}
	switch (time1[0]+1)
	{
	case min1:
		cout << "��11h���������ڵ�" << time1[1] << "��10h��¯" << endl;
		count++;
		break;
	case min1 + 1:
		cout << "��11h���������ڵ�" << time1[1] << "��11h��¯" << endl;
		count++;
		break;
	case min1 + 2:
		cout << "��11h���������ڵ�" << time1[1] << "��12h��¯" << endl;
		count++;
		break;
	case min2:
		cout << "��11h���������ڵ�" << time1[1] << "��15h��¯" << endl;
		count++;
		break;
	case min2 + 1:
		cout << "��11h���������ڵ�" << time1[1] << "��16h��¯" << endl;
		count++;
		break;
	case min3:
		cout << "��11h���������ڵ�" << time1[1] << "��20h��¯" << endl;
		count++;
		break;
	case min3 + 1:
		cout << "��11h���������ڵ�" << time1[1] << "��21h��¯" << endl;
		count++;
		break;
	case min3 + 2:
		cout << "��11h���������ڵ�" << time1[1] << "��22h��¯" << endl;
		count++;
		break;
	default:
		break;
	}
	switch (time1[0] + 2)
	{
	case min1:
		cout << "��12h���������ڵ�" << time1[1] << "��10h��¯" << endl;
		count++;
		break;
	case min1 + 1:
		cout << "��12h���������ڵ�" << time1[1] << "��11h��¯" << endl;
		count++;
		break;
	case min1 + 2:
		cout << "��12h���������ڵ�" << time1[1] << "��12h��¯" << endl;
		count++;
		break;
	case min2:
		cout << "��12h���������ڵ�" << time1[1] << "��15h��¯" << endl;
		count++;
		break;
	case min2 + 1:
		cout << "��12h���������ڵ�" << time1[1] << "��16h��¯" << endl;
		count++;
		break;
	case min3:
		cout << "��12h���������ڵ�" << time1[1] << "��20h��¯" << endl;
		count++;
		break;
	case min3 + 1:
		cout << "��12h���������ڵ�" << time1[1] << "��21h��¯" << endl;
		count++;
		break;
	case min3 + 2:
		cout << "��12h���������ڵ�" << time1[1] << "��22h��¯" << endl;
		count++;
		break;
	default:
		break;
	}

	//
	int *time2 = CalTime(min2, time, 1, 0);
	switch (time2[0])
	{
	case min1:
		cout << "��15h���������ڵ�" << time2[1] << "��10h��¯" << endl;
		count++;
		break;
	case min1 + 1:
		cout << "��15h���������ڵ�" << time2[1] << "��11h��¯" << endl;
		count++;
		break;
	case min1 + 2:
		cout << "��15h���������ڵ�" << time2[1] << "��12h��¯" << endl;
		count++;
		break;
	case min2:
		cout << "��15h���������ڵ�" << time2[1] << "��15h��¯" << endl;
		count++;
		break;
	case min2 + 1:
		cout << "��15h���������ڵ�" << time2[1] << "��16h��¯" << endl;
		count++;
		break;
	case min3:
		cout << "��15h���������ڵ�" << time2[1] << "��20h��¯" << endl;
		count++;
		break;
	case min3 + 1:
		cout << "��15h���������ڵ�" << time2[1] << "��21h��¯" << endl;
		count++;
		break;
	case min3 + 2:
		cout << "��15h���������ڵ�" << time2[1] << "��22h��¯" << endl;
		count++;
		break;
	default:
		break;
	}
	switch (time2[0] + 1)
	{
	case min1:
		cout << "��16h���������ڵ�" << time2[1] << "��10h��¯" << endl;
		count++;
		break;
	case min1 + 1:
		cout << "��16h���������ڵ�" << time2[1] << "��11h��¯" << endl;
		count++;
		break;
	case min1 + 2:
		cout << "��16h���������ڵ�" << time2[1] << "��12h��¯" << endl;
		count++;
		break;
	case min2:
		cout << "��16h���������ڵ�" << time2[1] << "��15h��¯" << endl;
		count++;
		break;
	case min2 + 1:
		cout << "��16h���������ڵ�" << time2[1] << "��16h��¯" << endl;
		count++;
		break;
	case min3:
		cout << "��16h���������ڵ�" << time2[1] << "��20h��¯" << endl;
		count++;
		break;
	case min3 + 1:
		cout << "��16h���������ڵ�" << time2[1] << "��21h��¯" << endl;
		count++;
		break;
	case min3 + 2:
		cout << "��16h���������ڵ�" << time2[1] << "��22h��¯" << endl;
		count++;
		break;
	default:
		break;
	}

	//
	int *time3 = CalTime(min3, time,2,0);
	switch (time3[0])
	{
	case min1:
		cout << "��20h���������ڵ�" << time2[1] << "��10h��¯" << endl;
		count++;
		break;
	case min1 + 1:
		cout << "��20h���������ڵ�" << time2[1] << "��11h��¯" << endl;
		count++;
		break;
	case min1 + 2:
		cout << "��20h���������ڵ�" << time2[1] << "��12h��¯" << endl;
		count++;
		break;
	case min2:
		cout << "��20h���������ڵ�" << time2[1] << "��15h��¯" << endl;
		count++;
		break;
	case min2 + 1:
		cout << "��20h���������ڵ�" << time2[1] << "��16h��¯" << endl;
		count++;
		break;
	case min3:
		cout << "��20h���������ڵ�" << time2[1] << "��20h��¯" << endl;
		count++;
		break;
	case min3 + 1:
		cout << "��20h���������ڵ�" << time2[1] << "��21h��¯" << endl;
		count++;
		break;
	case min3 + 2:
		cout << "��20h���������ڵ�" << time2[1] << "��22h��¯" << endl;
		count++;
		break;
	default:
		break;
	}
	switch (time3[0] + 1)
	{
	case min1:
		cout << "��21h���������ڵ�" << time3[1] << "��10h��¯" << endl;
		count++;
		break;
	case min1 + 1:
		cout << "��21h���������ڵ�" << time3[1] << "��11h��¯" << endl;
		count++;
		break;
	case min1 + 2:
		cout << "��21h���������ڵ�" << time3[1] << "��12h��¯" << endl;
		count++;
		break;
	case min2:
		cout << "��21h���������ڵ�" << time3[1] << "��15h��¯" << endl;
		count++;
		break;
	case min2 + 1:
		cout << "��21h���������ڵ�" << time3[1] << "��16h��¯" << endl;
		count++;
		break;
	case min3:
		cout << "��21h���������ڵ�" << time3[1] << "��20h��¯" << endl;
		count++;
		break;
	case min3 + 1:
		cout << "��21h���������ڵ�" << time3[1] << "��21h��¯" << endl;
		count++;
		break;
	case min3 + 2:
		cout << "��21h���������ڵ�" << time3[1] << "��22h��¯" << endl;
		count++;
		break;
	default:
		break;
	}
	switch (time1[0] + 2)
	{
	case min1:
		cout << "��22h���������ڵ�" << time3[1] << "��10h��¯" << endl;
		count++;
		break;
	case min1 + 1:
		cout << "��22h���������ڵ�" << time3[1] << "��11h��¯" << endl;
		count++;
		break;
	case min1 + 2:
		cout << "��22h���������ڵ�" << time3[1] << "��12h��¯" << endl;
		count++;
		break;
	case min2:
		cout << "��22h���������ڵ�" << time3[1] << "��15h��¯" << endl;
		count++;
		break;
	case min2 + 1:
		cout << "��22h���������ڵ�" << time3[1] << "��16h��¯" << endl;
		count++;
		break;
	case min3:
		cout << "��22h���������ڵ�" << time3[1] << "��20h��¯" << endl;
		count++;
		break;
	case min3 + 1:
		cout << "��22h���������ڵ�" << time3[1] << "��21h��¯" << endl;
		count++;
		break;
	case min3 + 2:
		cout << "��22h���������ڵ�" << time3[1] << "��22h��¯" << endl;
		count++;
		break;
	default:
		break;
	}

	return count;
}

int* CalTime(int Current, int Len, int width, int days)
{
	int i = days;
	if ((Current + Len) > 24)
	{
		return CalTime(0, Current + Len - 24,width,i+1);
	}
	else
	{
		int Res[3] = { Current + Len ,i + 1,Current+Len+width };
		return Res;
	}
}
#include"iostream"
#include"conio.h"
using namespace std;

int* CalTime(int Current, int Len, int width, int days);
int InOrNot(int time);

int main()
{

	char ch;
	int time=1;
	cout << "请输入样品所需时间：";
	cin >> time;
	int Count = InOrNot(time);
	if (!Count)
		cout << "未找到解决方案" << endl;
	else cout << "共" << Count << "个时间" << endl;
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
		cout << "可10h放样，并于第" << time1[1] << "天10h灭炉" << endl;
		count++;
		break;
	case min1+1:
		cout << "可10h放样，并于第" << time1[1] << "天11h灭炉" << endl;
		count++;
		break;
	case min1+2:
		cout << "可10h放样，并于第" << time1[1] << "天12h灭炉" << endl;
		count++;
		break;
	case min2:
		cout << "可10h放样，并于第" << time1[1] << "天15h灭炉" << endl;
		count++;
		break;
	case min2+1:
		cout << "可10h放样，并于第" << time1[1] << "天16h灭炉" << endl;
		count++;
		break;
	case min3:
		cout << "可10h放样，并于第" << time1[1] << "天20h灭炉" << endl;
		count++;
		break;
	case min3+1:
		cout << "可10h放样，并于第" << time1[1] << "天21h灭炉" << endl;
		count++;
		break;
	case min3+2:
		cout << "可10h放样，并于第" << time1[1] << "天22h灭炉" << endl;
		count++;
		break;
	default:
		break;
	}
	switch (time1[0]+1)
	{
	case min1:
		cout << "可11h放样，并于第" << time1[1] << "天10h灭炉" << endl;
		count++;
		break;
	case min1 + 1:
		cout << "可11h放样，并于第" << time1[1] << "天11h灭炉" << endl;
		count++;
		break;
	case min1 + 2:
		cout << "可11h放样，并于第" << time1[1] << "天12h灭炉" << endl;
		count++;
		break;
	case min2:
		cout << "可11h放样，并于第" << time1[1] << "天15h灭炉" << endl;
		count++;
		break;
	case min2 + 1:
		cout << "可11h放样，并于第" << time1[1] << "天16h灭炉" << endl;
		count++;
		break;
	case min3:
		cout << "可11h放样，并于第" << time1[1] << "天20h灭炉" << endl;
		count++;
		break;
	case min3 + 1:
		cout << "可11h放样，并于第" << time1[1] << "天21h灭炉" << endl;
		count++;
		break;
	case min3 + 2:
		cout << "可11h放样，并于第" << time1[1] << "天22h灭炉" << endl;
		count++;
		break;
	default:
		break;
	}
	switch (time1[0] + 2)
	{
	case min1:
		cout << "可12h放样，并于第" << time1[1] << "天10h灭炉" << endl;
		count++;
		break;
	case min1 + 1:
		cout << "可12h放样，并于第" << time1[1] << "天11h灭炉" << endl;
		count++;
		break;
	case min1 + 2:
		cout << "可12h放样，并于第" << time1[1] << "天12h灭炉" << endl;
		count++;
		break;
	case min2:
		cout << "可12h放样，并于第" << time1[1] << "天15h灭炉" << endl;
		count++;
		break;
	case min2 + 1:
		cout << "可12h放样，并于第" << time1[1] << "天16h灭炉" << endl;
		count++;
		break;
	case min3:
		cout << "可12h放样，并于第" << time1[1] << "天20h灭炉" << endl;
		count++;
		break;
	case min3 + 1:
		cout << "可12h放样，并于第" << time1[1] << "天21h灭炉" << endl;
		count++;
		break;
	case min3 + 2:
		cout << "可12h放样，并于第" << time1[1] << "天22h灭炉" << endl;
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
		cout << "可15h放样，并于第" << time2[1] << "天10h灭炉" << endl;
		count++;
		break;
	case min1 + 1:
		cout << "可15h放样，并于第" << time2[1] << "天11h灭炉" << endl;
		count++;
		break;
	case min1 + 2:
		cout << "可15h放样，并于第" << time2[1] << "天12h灭炉" << endl;
		count++;
		break;
	case min2:
		cout << "可15h放样，并于第" << time2[1] << "天15h灭炉" << endl;
		count++;
		break;
	case min2 + 1:
		cout << "可15h放样，并于第" << time2[1] << "天16h灭炉" << endl;
		count++;
		break;
	case min3:
		cout << "可15h放样，并于第" << time2[1] << "天20h灭炉" << endl;
		count++;
		break;
	case min3 + 1:
		cout << "可15h放样，并于第" << time2[1] << "天21h灭炉" << endl;
		count++;
		break;
	case min3 + 2:
		cout << "可15h放样，并于第" << time2[1] << "天22h灭炉" << endl;
		count++;
		break;
	default:
		break;
	}
	switch (time2[0] + 1)
	{
	case min1:
		cout << "可16h放样，并于第" << time2[1] << "天10h灭炉" << endl;
		count++;
		break;
	case min1 + 1:
		cout << "可16h放样，并于第" << time2[1] << "天11h灭炉" << endl;
		count++;
		break;
	case min1 + 2:
		cout << "可16h放样，并于第" << time2[1] << "天12h灭炉" << endl;
		count++;
		break;
	case min2:
		cout << "可16h放样，并于第" << time2[1] << "天15h灭炉" << endl;
		count++;
		break;
	case min2 + 1:
		cout << "可16h放样，并于第" << time2[1] << "天16h灭炉" << endl;
		count++;
		break;
	case min3:
		cout << "可16h放样，并于第" << time2[1] << "天20h灭炉" << endl;
		count++;
		break;
	case min3 + 1:
		cout << "可16h放样，并于第" << time2[1] << "天21h灭炉" << endl;
		count++;
		break;
	case min3 + 2:
		cout << "可16h放样，并于第" << time2[1] << "天22h灭炉" << endl;
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
		cout << "可20h放样，并于第" << time2[1] << "天10h灭炉" << endl;
		count++;
		break;
	case min1 + 1:
		cout << "可20h放样，并于第" << time2[1] << "天11h灭炉" << endl;
		count++;
		break;
	case min1 + 2:
		cout << "可20h放样，并于第" << time2[1] << "天12h灭炉" << endl;
		count++;
		break;
	case min2:
		cout << "可20h放样，并于第" << time2[1] << "天15h灭炉" << endl;
		count++;
		break;
	case min2 + 1:
		cout << "可20h放样，并于第" << time2[1] << "天16h灭炉" << endl;
		count++;
		break;
	case min3:
		cout << "可20h放样，并于第" << time2[1] << "天20h灭炉" << endl;
		count++;
		break;
	case min3 + 1:
		cout << "可20h放样，并于第" << time2[1] << "天21h灭炉" << endl;
		count++;
		break;
	case min3 + 2:
		cout << "可20h放样，并于第" << time2[1] << "天22h灭炉" << endl;
		count++;
		break;
	default:
		break;
	}
	switch (time3[0] + 1)
	{
	case min1:
		cout << "可21h放样，并于第" << time3[1] << "天10h灭炉" << endl;
		count++;
		break;
	case min1 + 1:
		cout << "可21h放样，并于第" << time3[1] << "天11h灭炉" << endl;
		count++;
		break;
	case min1 + 2:
		cout << "可21h放样，并于第" << time3[1] << "天12h灭炉" << endl;
		count++;
		break;
	case min2:
		cout << "可21h放样，并于第" << time3[1] << "天15h灭炉" << endl;
		count++;
		break;
	case min2 + 1:
		cout << "可21h放样，并于第" << time3[1] << "天16h灭炉" << endl;
		count++;
		break;
	case min3:
		cout << "可21h放样，并于第" << time3[1] << "天20h灭炉" << endl;
		count++;
		break;
	case min3 + 1:
		cout << "可21h放样，并于第" << time3[1] << "天21h灭炉" << endl;
		count++;
		break;
	case min3 + 2:
		cout << "可21h放样，并于第" << time3[1] << "天22h灭炉" << endl;
		count++;
		break;
	default:
		break;
	}
	switch (time1[0] + 2)
	{
	case min1:
		cout << "可22h放样，并于第" << time3[1] << "天10h灭炉" << endl;
		count++;
		break;
	case min1 + 1:
		cout << "可22h放样，并于第" << time3[1] << "天11h灭炉" << endl;
		count++;
		break;
	case min1 + 2:
		cout << "可22h放样，并于第" << time3[1] << "天12h灭炉" << endl;
		count++;
		break;
	case min2:
		cout << "可22h放样，并于第" << time3[1] << "天15h灭炉" << endl;
		count++;
		break;
	case min2 + 1:
		cout << "可22h放样，并于第" << time3[1] << "天16h灭炉" << endl;
		count++;
		break;
	case min3:
		cout << "可22h放样，并于第" << time3[1] << "天20h灭炉" << endl;
		count++;
		break;
	case min3 + 1:
		cout << "可22h放样，并于第" << time3[1] << "天21h灭炉" << endl;
		count++;
		break;
	case min3 + 2:
		cout << "可22h放样，并于第" << time3[1] << "天22h灭炉" << endl;
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
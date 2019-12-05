#include<iostream>
#include<string>
using namespace std;
int main()
{
	 const int size = 5;
	string Names[size];
	for (int i = 0; i<5; i++)
	{
		cout << "Enter "<<i+1<<" student name : ";
		cin >> Names[i];
	}
	double score[size][4];
	double avg[size];
	double sum[size] = { 0,0,0,0,0 };
	for (int x = 0; x<5; x++)
	{
		for (int y = 0; y<4; y++)
		{
			cout << "Enter the score for student " << (x + 1) << " ";
			cin >> score[x][y];
			while (score[x][y]<0 || score[x][y]>100)
			{
				cout << "Error.The range of score is 0 to 100. Reenter : ";
				cin >> score[x][y];
			}
			sum[x] += score[x][y];
		}
	}
	double lowest[size];
	for (int a = 0; a<5; a++)
	{
		lowest[a] = score[a][0];
		for (int b = 1; b<4; b++)
		{
			if (lowest[a] > score[a][b])
			{
				lowest[a] = score[a][b];
			}
		}
		sum[a] -= lowest[a];
	}
	for (int c = 0; c < 5; c++)
	{
		avg[c] = sum[c] / 3.0;
	}
	char grade[size];
	for (int d = 0; d<5; d++)
	{
		if (avg[d] >= 90)
		{
			grade[d] = 'A';
		}
		else if (avg[d] >= 80)
		{
			grade[d] = 'B';
		}
		else if (avg[d] >= 70)
		{
			grade[d] = 'C';
		}
		else if (avg[d] >= 60)
		{
			grade[d] = 'D';
		}
		else grade[d] = 'F';
		cout << "\nStudent " << Names[d] << " got " << grade[d]<<endl;
	}
	system("pause");
}


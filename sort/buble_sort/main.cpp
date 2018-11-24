#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int N,temp;
	bool flag;
	int parition(vector<int>vec, int low, int high);
	void swap(int &,int &);
	cout << "请输入要排序数据的长度：" << endl;
	cin >> N;
	vector<int>vec;
	cout << "请依次输入排序数据：" << endl;
	for (int i = 0; i < N;i++)
	{
		cin >> temp;
		vec.push_back(temp);
	}
/*	
/*冒泡排序
	for (int i = 0; i < vec.size() - 1; i++)
	{
		flag = false;
		for (int j = 0; j < vec.size() - i-1; j++)
		{
			if (vec[j]>vec[j + 1])
			{
				swap(vec[j + 1], vec[j]);
				flag = true;
			}
		}
			if (flag == false)
				break;
	}
	*/
/*快速排序*/

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	return 0;
}
	void swap(int &a, int &b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	int parition(vector<int>vec, int low,int high)
	{
		int temp = vec[low];
		int i = low, j = high;
		while (i < j)
		{
			while (i < j&&vec[j] > temp)j--;
			if (i < j){ vec[i] = vec[j]; i++; }
			while (i < j&&vec[i] < temp)i++;
			if (i < j){
				vec[j] = vec[i]; j--;
			}
		}
		vec[j + 1] = temp;
		return j;
	}
	void Quick_sort(vector<int>vec, int low, int high){
		if (low < high){
			int num = parition(vec, low, high);
			parition(vec, low, num - 1);
			parition(vec, num + 1, high);
		}
	}
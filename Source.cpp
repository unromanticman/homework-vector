#include <iostream>
#include <Vector>
#include <ctime>
#include <algorithm> 
using namespace std;

template<typename T> 
vector<T> makeArray(vector<T> a1, vector<T>a2){
	int size = a1.size() + a2.size();
	vector<T> ouput(size);
	
	for (int i = 0,k=0; i < size; i+=2){
		ouput.at(i) = a1[k++];
	}
	for (int i = 1,k=0; i < size; i+=2){
		ouput.at(i) = a2[k++];
	}
	return ouput;
}
int main(){
	srand(time(NULL));
	/*1.#include<Vector>。
		(a) 創造一個內容為亂數數字的向量。
		(b) 將此向量從小到大排好。
		(c) 創造一個隨機長度的向量(10~20)，將值依照長度遞減塞進去({ 5, 4, 3, 2, 1 })。
		(d)將兩個長度一樣的向量內容交叉排列近一個新向量({ 1, 2, 3 }*{4, 5, 6} = { 1, 4, 2, 5, 3, 6 })*/

	int size=(rand()%10)+10;
	vector<int> v1(size);
	vector<int> v2(size);
	for (int i = 0; i < v1.size(); i++){
		v1[i] = rand()%20;
		v2[i] = rand() % 20;
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	vector<int> makevector=makeArray<int>(v1, v2);
	cout << "v1:" << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << "\nv2:" << endl;
	for (int i = 0; i < v2.size(); i++)
	{

		cout << v2[i] << " ";
	}
	cout << "\nv1*v2:" << endl;
	for (int i = 0; i < makevector.size(); i++)
		cout<<makevector[i]<<" ";

	system("pause");
	return 0;
}


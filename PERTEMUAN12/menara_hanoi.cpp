#include <iostream>
using namespace std;

int fak(int n)
{
	if(n == 0)
		return 1;
	else
		return n * fak(n-1);
}

void hanoi(int n, char a, char b, char c)
{
	if(n==1)
	cout<<"Pindahkan Piringan Dari "<<a<<" Ke "<<b<<endl;
	else
	{
		hanoi(n-1,a,c,b);
		cout<<"Pindahkan Piringan Dari "<<a<<" Ke "<<b<<endl;
		hanoi(n-1,c,b,a);
	}
}

int main()
{
	int jum_piring;
	cout<<"Teknik Hanoi Memindahkan Piring"<<endl;
	cout<<"Masukan Jumlah Piring = ";cin>>jum_piring;
	hanoi(jum_piring, 'A','B','C');
	cin.get();
	return 0;
}

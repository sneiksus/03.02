#include <iostream>
#include<string>
using namespace std;
//int main()
//{
//	const int size=5;
//	int n[size][size]{};
//	for (int r = 0; r < size ; r++)
//	{
//		for (int a = r; r + a < size; a++)
//			n[r][a] = 1;
//	}
//	
//		//for (int c = 0; c < size; c++)
//		//{
//		//	if (r+c <= size-1)
//		//		n[r][c] = 1;
//		//}
//	//for (int i = 0,f=size; i < size;i++)
//	//{  
//	//	n[i][i] = 1;
//	//	n[i][size-i-1]=2;
//	//}
//	for (int i = 0; i < size; ++i)
//	{
//		for (int a = 0; a < size; a++)
//		{
//			cout << n[i][a] << " ";
//		}
//		cout << endl;
//	}
//}

void SayHello(string name="there",short counter=2 )
{
	for(int i =0;i<counter;i++)
		cout << "Hello, " << name <<endl ;
	cout << endl << endl;
}

int main()
{
	SayHello("Ivan", 4);
	SayHello("Oleg");
	SayHello();
}
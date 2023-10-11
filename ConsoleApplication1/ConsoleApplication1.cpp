//#include<iostream>;
//#include<cmath>;
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	cout << "введите кол-во риса\n";
//	int  b, s;
//	float a;
//	cin >>s ;
//	a = 5.5/23;
//	b = a * s;
//	cout << "dlina risa:" <<b;
//}
//#include<iostream>;
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	cout << "кол во пк:\n";
//	int z;
//	cin >> z;
//	cout << "какова цена пк:\n";
//	int y;
//	cin >> y;
//	cout << "кол во планшетов:\n";
//	int x ;
//	cin >> x;
//	cout << "какова цена планшетов:\n";
//	int h ;
//	cin >>h ;
//	int obsh;
//	obsh = (z * y) + (x * h);
//	cout << "общая стоимость:" << obsh; 
//}
//#include<iostream>;
//#include<cmath>;
//using namespace std;
//int main()
//{
//	setlocale(0,"");
//	cout << " dlina storoni:\n";
//	int a, obem, polnpov;
//	cin >> a;
//	obem = pow(a, 3);
//	polnpov = 6 * pow(a, 2);
//	cout << "obem kuba:" << obem << "\n";
//	cout << "polnaya poverhnosti:" << polnpov;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	cout << " poloshadi treygolnika:\n";
//	float S, a, b;
//	cin >> S;
//	cout << "dlina st a:";
//	cin >> a;
//	b = S / a;
//	float pirimitter;
//	pirimitter = 2 * (a + b);
//	cout << "pirimitter pryamo ugol: " << pirimitter;
//}
//
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	cout << "vvedite 3-x zn chislo";
//	int a, b, c,e;
//	cin >> e;
//	a = e / 100;
//	b = (e / 10) % 10;
//	c = e % 10;
//	cout << a << b << c <<"\n";
//	cout << a << c << b << "\n";
//	cout << b << a << c << "\n";
//	cout << b << c << a << "\n";
//	cout << c << a << b << "\n";
//	cout << c << b << a << "\n";
//}
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	cout << "Длина полотна:";
//	float n;
//	cin >> n;
//	cout << "Ширина полотна:";
//	float m;
//	cin >> m;
//	cout << "Диаметр окруности:";
//	float d, diamtr , plokr,plpolotna ;
//	int kolvokrug;
//	cin >> d;
//	plpolotna = n * m;
//	diamtr = pow(d, 2);
//	kolvokrug = plpolotna / diamtr;
//	cout << kolvokrug;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	cout << "vvedite st piroshka v rub:";
//	int a;
//	int b;
//	int n;
//	cin >> a;
//	cout << "vvedite st piroshka v copie:";
//	cin >> b;
//	int f;
//	f = a * 100;
//	cout << "vvedite сколько перожков вы скушаете:";
//	cin >> n;
//	int k;
//	k = f + b;
//	int l;
//	l = k * n;
//	int p;
//	p = l / 100;
//	int cop;
//	cop = l % 100;
//	cout << "rub" << p << "cop" << cop;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	int n, g,sum;
//	cin >> n;
//	sum = 0;
//	g = 1;
//	for (int i = 1; i <=n; i++) {
//		g=g * i;
//        sum = sum + g;
//	}
//    cout << sum;
//}
//int dru1d(int n)
//{
//    if (n == 0) return 1;
//    else {
//        int F = 1;
//        int sum = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            F *= i;
//            sum += F;
//        }
//        return sum;
//
//    }
//
//
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    setlocale(0, "");
//    cout << dru1d(n);
//}
//#include <iostream>
//#include<cmath>
//using namespace std;
//int main()
//{ 
//	setlocale(0, "");
//	cout << "vvedite k "<< endl; 
//	int a, k, rs=1,p=0,w ;
//	cin >> k;
//	cout << "vveditev posledovatelinosti: " << endl;
//	cin >> a;
//	while (a != 0) 
//	{
//		if (a > k) p = rs;
//		rs++;
//		cin >> a;
//	}
//	cout << p <<"  chislo: "<< a ;
//	return 0;
//}
//#include <iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	cout << "vveditew posled: ";
//	int a, d=0;
//	cin >> a;
//	while(a>10)
//	{
//		if ((a % 10) > ((a / 10) % 10))
//		{
//			d++;
//		}
//		cin >> a;
//	}
//	cout << "kolvo chisel: " << d;
//	return 0;
//}
//#include <iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	cout << "vveditew posled: "<< endl;
//	int a, minch=0;
//	cin >> a;
//	minch = a;
//	while (a != 0) 
//	{
//		if ((a % 2 == 0) && (a < minch)) minch = a;
//		cin >> a;
//	}
//	cout << "min chet ch:"<< minch;
//	return 0;
//}
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	float y, x = -10;
//	do
//	{
//		if (x < -5)
//		{
//			y = (2 * x) + 5;
//		}
//		if ((x>-5)&&(x<5))
//		{
//			y = 1.5;	
//		}
//		if (x>5)
//		{
//			y = pow(x,3);	
//		}
//		if (x!=-5 && x!=5) cout << "x=" << x << "y=" << y<<"\n";
//		x++;
//	} while (x <=10);
//	return 0;
//}
//#include<iostream> 
//#include<iostream> 
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	int n, a=-1 , b=1,y ;
//	cout << "введите придел суммы ряда:";
//	cin >> n;
//	cout << "введите y:";
//	cin >> y;
//	if (y >= 1)
//	{
//		float c = (y * y * y),s=0;
//		for (int k = 1; k <= n; k++)
//		{
//			b = (b * k);
//			c = c *y;
//			s += (a * (b+4)) / c ;
//		}
//		cout << "сумма ряда:" <<s;
//	}
//	else
//	{
//		cout << "введите y больше или равный 1!!!!!!";
//	}
//	return 0;
//}
//#include<iostream>
//#include<iostream>
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	float  n,  x, a = 1, b = 1 , c = 1 ;
//	cout << "введите придел суммы ряда:";
//	cin >> n;
//	cout << "введите x:";
//	cin >> x;
//	float s = 0;
//	for (int k = 1; k <= n; k++)
//	{
//		a = a * (-1);
//		b = b * x ;
//		c = c * k;
//		s += (a * b) / c;
//	}
//	cout << "сумма ряда:" << s;
//	return 0;
//}
//#include<iostream>
//#include<iostream>
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	cout << "vvedi 1 chislo posled:";
//	int a1;
//	cin >> a1;
//	cout << "vvedi 2 chislo posled:";
//	int a2 ;
//	cin >> a2 ;
//	cout << "vvedi 3 chislo posled:";
//	int a3 ;
//	cin >> a3 ;
//	if ((a1 == 0) || (a2 == 0) || (a3 == 0))
//	{
//		cout << "break";
//		return 0;
//	}
//	if ((a1 % 2 == 0) && (a2 % 2 != 0) && (a3 % 2 == 0))
//	{
//		cout << "является  послед!!!!!";
//	}
//	else
//	{
//		cout << "break";
//		return 0;
//	}
//	return 0;
//}
////#include<iostream>
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	cout << "введите 1-ое число последовательности: ";
//	int a1;
//	cin >> a1;
//	if (a1 == 0)
//	{
//		cout << "Усл не выполн: "; return 0;
//
//	}
//	cout << "введите 2-ое число последовательности: ";
//	int a2;
//	cin >> a2;
//	if (a2 == 0)
//	{
//		cout << "Усл не выполн: "; return 0;
//
//	}
//	cout << "введите 3-ое число последовательности: ";
//	int a3;
//	cin >> a3;
//	if (a3 == 0)
//	{
//		cout << "Усл не выполн: "; return 0;
//
//	}
//	while (a3!=0)
//	{
//		if ((a1%2==0) && (a2 != 0)&& (a3%2==0))
//		{
//			a1 = a2;
//			a2 = a3;
//			cin >> a3;
//		}
//		else
//		{
//			cout << " нет таких чисел:";
//			return 0;
//		}
//
//	}
//	cout << "яв послед";
//	return 0;
//
//}
//#include<iostream>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = -1;
//	while (a!=0)
//	{
//		if (a == -1)
//		{
//			cout << "ввкдите число:";
//			cin >> a;
//		}
//		else
//		{
//			int tmpa=a;
//			cout << "ввкдите число:";
//			cin >> a;
//			if ((a % 2 == 0 && tmpa % 2 == 0) || (a % 2 != 0 && tmpa % 2 != 0))
//			{
//				cout << "error";
//				return 0;
//			}
//
//		}
//
//	}
//	cout << "яв послед!!!!!";
//	return 0;
//}
#include<iostream>
#include<iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	float n, x, a = 1, b = 1, c = 1;
	cout << "введите придел суммы ряда:";
	cin >> n;
	cout<< "введите x:";
	cin >>x;
	float s = 0;
	for (int k = 1; k <= n; k++)
	{
		a = a * (-1);
		b = b * x;
		c = c * k;
		s += (a * b) / c;
	}
	cout << "сумма ряда:"<< s;
	return 0;
}


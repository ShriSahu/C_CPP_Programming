//Area of Triangle
//#include<iostream>
//using namespace std;
//int main()
//{
//	float a, b, h;
//	cout << "Please enter Base & Height" << endl;
//	cin >> b >> h;
//	a = (b * h) / 2;
//	cout << "Aria is " << a << endl;
//
//	return 0;
//}

//******Finding sum of first N natutal numbers ******************
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int sum, n;
//	cout << "Please enter N value" << endl;
//	cin >> n;
//	sum = (n * (n + 1)) / 2;
//	cout << "Sum of first " << n << "natural numbers are : " << sum;
//	return 0;
//}

//******Finding roots of quadratic equation and Area of Circle ******************
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main()
//{
//	int a, b, c;
//	float radius, area;
//
//	int root1, root2;
//
//	cout << "please enter values for a, b and c in a*x*x+ b*x +c " << endl,
//	cin >> a >> b >> c,
//
//	root1 = (-b + sqrt(b * b + 4 * a * c)) / (2 * a);
//	root2 = (-b - sqrt(b * b + 4 * a * c)) / (2 * a);
//
//	cout << "roots are : " << root1 << " " << root2 << endl;
//
//	cout << " enter radius" << endl;
//	cin >> radius;
//	area = (float)22 / 7 * radius * radius;
//	cout << " area of the circle is : " << area << endl;
//
//	return 0;
//
//}

////*********Bitwise operator*********************
//#include<iostream>
//using namespace std;
//int main()
//{
//	char x = 10;
//
//	int y = (int )x << 2;
//
//	cout << y << endl;
//
//    return 0;
//}

////*********enum and typedef*********************
//#include<iostream>
//using namespace std;
//
//enum day {mon, tue, wed, thu, fri, sat , sun};
//enum department { cs=2, it, ece};
//typedef int marks;
//int main()
//{
//	day d = tue;
//	department dp1 = it, dp2 = ece;
//
//	cout << d << endl;
//
//	day d2 = sun;
//
//	cout << d2 << endl;
//
//	cout << dp1 << endl;
//	cout << dp2 << endl;
//
//	marks m1, m2;
//	m1 = 100;
//	m2 = 200;
//
//	cout << m1 << " "<<m2 << endl;
//
//	return 0;
//
//}
////*********Conditional Statement*********************
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	float a, b, c;
//
//	cout << "enter  and b" << endl;
//	cin >> a >> b;
//
//	if (b == 0)
//	{
//		cout << "devided by zero not allowed" << endl;
//		return 0;
//	}
//		
//	else
//	{
//		c = a / b;
//		return 0;
//	}
//		
//}

////*********Conditional Statement Finding Max of 3 no *********************
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a, b, c;
//
//	cout << "enter  a , b and c" << endl;
//	cin >> a >> b >> c;
//
//	if (a > b && a > c)
//		cout << "a is maximum no" << endl;
//	else if (b > c)
//		cout << "b is maximum no" << endl;
//	else
//		cout << "c is maximum no" << endl;
//
//	return 0;
//}

///*********Nature of Quadratic roots*****************************
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	float  a, b, c;
//
//	cout << "enter  a , b and c" << endl;
//	cin >> a >> b >> c;
//
//	int d = (b * b) - (4 * a * c);
//
//	if (d == 0)
//	{
//		int root = -b / (2 * a);
//		cout << "real and equal roots : " << root << endl;
//	}
//	else if (d > 0)
//	{
//		float root1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
//		float root2 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
//
//		cout << "real and unequal roots are : " << root1 << " "<<root2 << endl;
//	}
//	else
//	{
//		cout << "roots are imaginary" << endl;
//	}
//	
//
//	return 0;
//}


///*********Student Grades*****************************
#include<iostream>
using namespace std;

int main()
{
	int  m1, m2, m3;

	cout << "enter Marks m1, m2 and m3" << endl;
	cin >> m1 >> m2 >> m3;

	int avgMarks = m1 + m2 + m3 / 3;

	if (avgMarks >= 65)
	{
		
		cout << "Grade A : " <<endl;
	}
	else if ( avgMarks < 65 && avgMarks >=35 )
	{
		
		cout << "Grade B : " << endl;
	}
	else
	{
		cout << "Grade C" << endl;
	}


	return 0;
}

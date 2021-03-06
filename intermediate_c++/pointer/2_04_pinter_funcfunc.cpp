#include <iostream>
using namespace std;
//pointers to functions as parameters of another function

int squere(int); //prototype of function
int cube (int); //prototype of function
int sum (int (*)(int),int); //prototype of function



int main()
{
	cout<< sum(squere,3)<<endl;     //14

	cout<< sum(cube,2)<<endl;     //9
	return 0;
}

// Function sum in first input arguments catch p pointer to a function
// (like cube) which has one input argument. In secend input arguments
// catch value of inputs of function(like sum).
int sum(int(*p) (int) ,int a)
{	int s = 0;
	for(int i = 1; i <= a; i++)
		s+=(*p)(i); // eample (squere,3)=> s=1+4+9
	return s;
}

//-------squere0----------
int squere(int a)
{
	return a*a;
}

//-----cube----------
int cube(int a)
{
	return a*a*a;
}

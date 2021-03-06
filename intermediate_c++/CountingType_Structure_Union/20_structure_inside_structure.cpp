//=====================================================
//  Title:            Exercise of learning c++ course                       
//  Course teacher:   Mr. Shirafkan                         
//  Chapter:          Structure 
//  Date:             21/10/2021
//  Author :          Hesam E. Derakhshan                                       
//=====================================================

//  Course title: structure inside structure
//-----------------------------------------------------
//libraries
#include <iostream>
#include <curses.h>
#include <cmath>
using namespace std;
//------------------------------------------------------

struct Name {
  char firstname[80];
  char lastname[80];
 };


struct Date {
  int   day;
  int   month;
  int   year;
 };
         
struct Person {
  Name   person_name;
  Date   person_date;
 };



int main() 
{
  Person p = { { "Hesam", "Derakhshan" } , {1, 4, 2000 }  };
  
  cout<<sizeof(p.person_name)<<endl;                 // 160(Name)
  cout<<sizeof(p)<<endl;                             // 172 = 12(Date) + 160(Name)
   
  cout<< p.person_name.firstname<<endl;             // ali
  cout<< p.person_date.year;                        // 2000
 
	 return 0;
}
  

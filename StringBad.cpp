#include <cstring>
#include "StringBad.h"
using std::cout;

 //initializing static class member
int StringBad::num_strings = 0;

//class method
//constuct StringBad class from cstring
StringBad::StringBad(const char *st)
{
	len = std::strlen(st);//set size
	str = new char[len+1];//allocate memory
	std::strcpy(str,st);//set value
	num_strings++;
	cout<<num_strings<<":\""<<str<<"\"object created\n";
}
//default constrc=uctor
StringBad::StringBad()
{
	len = 4;
	str = new char[len+1];
	std::strcpy(str,"C++");
	num_strings++;
	cout<<num_strings<<":\""<<str<<"\"default object created\n";
}

StringBad::~StringBad()
{
	cout << "\"" << str << "\" object deleted, ";
	--num_strings;
	cout << num_strings << " left\n";
	delete []str; 
}

std::ostream & StringBad::operator<<(std::ostream & ou,const StringBad & st)
{
	ou<<str;
	return ou;
}
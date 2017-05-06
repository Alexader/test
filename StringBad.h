#include <iostream>
#ifndef SRRINGBAD_H
#define SRRINGBAD_H

class StringBad
{
public:
	StringBad(const char *s);
	~StringBad();
	StringBad();
	friend std::ostream &operator<<(std::ostream &out,const StringBad &s);
private:
	int len;
	char *str;
	static int num_strings;
};

#endif // SRRINGBAD_H

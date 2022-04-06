#include <iostream>
#include<iostream>
#include<string.h>
using namespace std;


class charInput{
public:
void add(char c) { }
std::string getValue()
{
	return NULL;
}
};


class numInput : public charInput {

public:
string array;
void add(char c)
{
if(int(c)>47 && int(c)<58)
{
	array += c;
}
//cout<<arr<<endl;
}


void getvalue()
{
	cout<<"current value is: "<<array<<endl;;
}

};


int main()
{
	numInput in;
	in.add('1');
	in.add('c');
	in.add('0');
	in.getvalue();


}

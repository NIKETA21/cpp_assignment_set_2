#include <iostream>
#include <string>
using namespace std;
class charInput{
public:
void add(char c) {
	cin>>c;	
 }
std::string getValue() { return NULL; }
};
class numInput : public charInput {
void add (char c)
{
char current = ' ' ;
if( (c>=0) && (c<=9))
{
	cin>>c;
	current = current+c;
	return current ;
}
else
{
    cout<<"ignore"<<endl;
	
	//return 0;
}
}

 };
int main(){
charInput* inputC = new charInput();
numInput* inputN = new numInput();
input->add('1');
input->add('a');
input->add('0');
cout << input->getValue();
// the output should be 10
}

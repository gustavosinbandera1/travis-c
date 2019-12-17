#include<iostream>
#include<sstream>
using namespace std;
void MyPrint(ostream& stream)
{
    cout<<stream.rdbuf()<< endl;
}
int main()
{
  /*   stringstream ss;
    ss<<"hello there";
    MyPrint(ss);                //Prints fine

    ostringstream oss;
    oss<<"hello there";
    MyPrint(oss);               //Does not print anything
    getchar(); */

stringstream s1;
int i = 22;
s1 << "Hello " << i << endl;
string s2 = s1.str();
cout << s2;
getchar();

}
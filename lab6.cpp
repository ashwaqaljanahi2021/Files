#include <iostream>
#include <fstream>

using namespace std;

int main()
{

ifstream iFile;
ofstream oFile; 
int word = 0;
string words;

oFile.open("Out.txt");
if(!oFile.is_open())
{
    cout<<"Error"<<endl;
}

iFile.open("/Users/ashwaqaljanahi/Lab6/wake.txt");
if(iFile.is_open())
{
while(iFile>>words)
{
    word++;
}
 oFile<<word<<endl;
}
else
cout<<"Error. File does not exist"<<endl;

iFile.close();
oFile.close();
}
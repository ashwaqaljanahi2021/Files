//This program will showcase the steps for creating and deploying Files//
#include <iostream>
#include <fstream>//this is the library to use to access files on your computer and the object of file class
using namespace std;

int main()
{
ofstream Out; // this declartion of object states the name that will be used to write the file
Out.open("out.txt"); //this creates the file that we want to write in also it has to be in a string
if(Out.is_open())
{
 
Out<<"Hello my name is Ashwaq!"<<endl; //Out acts like a cout, but it will be displayed in the file rather than the console! 

Out.close( ); //It is important to close the files to avoid any bugs

}
Out.open("out.txt",ios::app); //app will add to our file that we created
if(Out.is_open())
{
  
  Out<<"Nice to meet you!!"<<endl;
  Out.close();
  
  
  
}




}

//This program will showcase the steps for creating and deploying Files//
#include <iostream>
#include <fstream>//this is the library to use to access files on your computer and the object of file class
using namespace std;

int main()
{
ofstream Out // this declartion of object states the name that will be used to write the file
ifstream In// this declaration of object states the name that will be used to read the file into the console
char ch; //this is for the input file to get the characters of the out.txt file

Out.open("out.txt"); //this creates the file that we want to write in also it has to be in a string

Out<<"Hello my name is Ashwaq!"<<endl; //Out acts like a cout, but it will be displayed in the file rather than the console! 

Out.close( ); //It is important to close the files to avoid any bugs

In.open("out.txt"); //for the input file we must have the path or the exact name of the file around a string for a mac and two // for a windows

if(In)//while the File is open 
{
In.get( ); //to get any white spaces 
cout<<ch<<endl; // will display in console 


}

In.cloe(); // Close file to avoid bugs 









}

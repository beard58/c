#include<iostream>
using namespace std;
class Country
{
char name[20];
char Pname[30];
int no;
int age;
float avg;
public:
void getdata()
{
cout<<"\nenter the country name ";
cin>>name;
cout<<"\nenter the player name ";
cin>>Pname;
cout<<"\nenter the matches ";
cin>>no;
cout<<"\nenter the age of player ";
cin>>age;
cout<<"\nenter the batting avg of player ";
cin>>avg;
 
 }
 void showdata()
{

cout<<"\n country name is ="<<name;
cout<<"\n player name is ="<<Pname;
cout<<"\n matches plays are ="<<no;
cout<<"\n player age is ="<<age;
cout<<"\n batting avg of player is ="<<avg;


}
 };
 int main()
{
Country s;
s.getdata();
s.showdata();
}
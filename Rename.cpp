#include<iostream>
#include<string>

#include<cstring>
using namespace std;
int main ()
{
	int num;
	string nam,nam1,name,name2;
	cout<<"\nEnter the first part name of the old file:"; getline(cin,nam);
	cout<<"\nEnter the second part name of the old file(+File Type for example .mp4):"; getline(cin,nam1);
	cout<<endl; cout<<"Enter the first part name of the new file:"; getline(cin,name);
	cout<<endl; cout<<"Enter the last part name of the new file(+File Type for example .mp4):"; getline(cin,name2); cout<<endl;
	cout<<"Enter the number of episodes or files please:";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		rename(string(nam+""+to_string(i)+""+nam1).c_str(),string(name+""+to_string(i)+""+name2).c_str());
		rename(string(nam+"0"+to_string(i)+""+nam1).c_str(),string(name+"0"+to_string(i)+""+name2).c_str());
	}



	return 0;
}

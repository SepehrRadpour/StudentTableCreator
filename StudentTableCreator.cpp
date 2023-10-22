#include<iostream>
#include<string>
using namespace std;
char menu(){
	for(int i=1;i<59;i++)
	{
		if(i<=20)
			cout<<" ";
		else
			cout<<"_";
	}
	cout<<endl;
	for(int j=1;j<=15;j++)
	{
		for(int i=1;i<60;i++)
		{
			if(i==20 ||i==59)
				cout<<"|";
			if(i<20)
				cout<<" ";
			if(i>20 && i<59)
			{
				if(j%3==0)
				{
					if(j==3)
					{
						cout<<"1_"<<"SUBMIT IMFORMATION";
						for(int k=41;k<59;k++)
						{
							cout<<" ";
						}
					}
					if(j==6)
					{
						cout<<"2_"<<"SEARCH";
						for(int k=29;k<59;k++)
						{
							cout<<" ";
						}	
					}
					if(j==9)
					{
						cout<<"3_"<<"EDIT";
						for(int k=27;k<59;k++)
						{
							cout<<" ";
						}	
					}
					if(j==12)
					{
						cout<<"4_"<<"EXIT";
						for(int k=27;k<59;k++)
						{
							cout<<" ";
						}	
					}
					if(j==15)
					{
						for(int k=21;k<59;k++)
							cout<<"_";
					}
					i=58;
				}
				else
					cout<<" ";
			}
		}
		cout<<endl;
	}
	
}
int main()
{
	int z=0,p=0;
	int m=0;
	int nafar=0;
	int n=100;
	string array[n][5];
	while(z<1)
	{
		menu();
		int a;
		cin>>a;
		system("cls");
		if(a==1)
		{
				cout<<"first name:";
				cin>>array[nafar][m];
				m++;
				cout<<"last name:";
				cin>>array[nafar][m];
				m++;
				cout<<"code:";
				cin>>array[nafar][m];
				m++;
				cout<<"class:";
				cin>>array[nafar][m];
				m++;
				cout<<"score:";
				cin>>array[nafar][m];
				int p=0;
				for(int i=0;i<n;i++)
				{
					if(array[nafar][2]==array[i][2])
						p++; 
				}
				if(p==2)
				{
					cout<<"repeated";
					nafar--;
				}
			nafar++;
			m=0;
		}
		if(a==2)
		{
			string code[1];
			cout<<"code:";
			cin>>code[0];
			int o=-1;
			for(int i=0;i<n;i++)
			{
				if(code[0]==array[i][2])
					o=i;
			}
			if(o!=-1)
			{
			cout<<"first name:";
			cout<<array[o][0]<<endl;
			cout<<"last name:";
			cout<<array[o][1]<<endl;
			cout<<"code:";
			cout<<array[o][2]<<endl;
			cout<<"class:";
			cout<<array[o][3]<<endl;
			cout<<"score:";
			cout<<array[o][4]<<endl;
			}
			else
				cout<<"this code is none"<<endl;
		}
		if(a==3)
		{
			string code[1];
			cout<<"code:";
			cin>>code[0];
			int o=-1;
			for(int i=0;i<n;i++)
			{
				if(code[0]==array[i][2])
					o=i;
			}
			if(o!=-1)
			{
			cout<<"first name:";
				cin>>array[o][0];
				cout<<"last name:";
				cin>>array[o][1];
				//cout<<"code:";
				//cin>>array[o][2];
				cout<<"class:";
				cin>>array[o][3];
				cout<<"score:";
				cin>>array[o][4];
			}
			else
				cout<<"this code is none"<<endl;
		}
		if(a==4)
			z=1;
		int s=0;
		while(s<1000000000)
			s++;
		system("cls");
	}
	return 0;
}

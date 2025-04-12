#include<iostream>
#include<fstream>
using namespace std;


class temp{
	string userName,Email,password;
	string searchName,searchPassword,searchEmail;
	public:
	void login();
	void signUp();
	void forgotPassword();
}obj;
int main(){
	char choice;
	cout<<"\n1- Login";
	cout<<"\n2- Sign Up";
	cout<<"\n3- Forgot Password";
	cout<<"\n4- Exit";
	cout<<"Enter Your Choice :";
	cin>>choice;


	switch(choice){
		case '1':
			obj.login();
		break;
		case '2':
			obj.signUp();
		break;
		case '3':
			obj.forgotPassword();
		break;
		case '4':
			return 0;
		break;
		default:
			cout<<"\nInvalid Choice";
	}
																								 )
}
void temp::signUp(){
		cout<<"\nEnter Your User Name : ";
		getline()(cin,userName);
		cout<<"\nEnter Email : ";
		getline(cin,Email);
		cout<<"\nEnter Your Password : ";
		getline(cin,password);
		/*ofstream write("data.txt",ios::app);
		write<<userName<<" "<<Email<<" "<<password<<endl;
		cout<<"\nSign Up Successful";*/
		file.open("loginData.txt",ios :: out | ios :: app);
		file<<userName<<"-"<<Email<<"-"<<password<<endl;
		file.close();
}										
	void temp::login(){
	
		cout<<"------------LOGIN------------"<<endl;
		cout<<"\nEnter Your User Name : ";
		getline(cin,searchName);
		cout<<"\nEnter Your Password : ";
		getline(cin,searchPassword);

	file.open("loginData.txt",ios::in);
	getline(file,userName,'*');
	getline(file,Email,'*');
	getline(file,password,'\n');
	while(!file.eof()){
		if(userName==searchName){
			if(password==searchPassword){
				cout<<"\nAccount Login Successfull..! ";
				cout<<"\nUser Name : "<<userName<<endl;
				cout<<"\nEmail : "<<Email<<endl;
				cout<<"\nPassword : "<<password<<endl;
			}else{
				cout<<"\nInvalid Password";
			}
		}
	getline(file,userName,'*');
	getline(file,Email,'*');
	getline(file,password,'\n');
	}
	file.close();
}
void	temp::forgotPassword(){		
		cout<<"\nEnter Your UserName : ";
		getline(cin,searchName);
		cout<<"\nEnter Your Email : ";
		getline(cin,searchEmail);

		file.open("loginData.txt",ios::in);
		getline(file,userName,'*');
		getline(file,Email,'*');
		getline(file,password,'\n');
		while(!file.eof()){
			if(userName==searchName){
				if(Email==searchEmail){
					cout<<"\nAccount Found..!";
					cout<<"\nYour Password is : "<<password<<endl;
				}else{
					cout<<"\nNot Found...!";
		        }
			}else{
					cout<<"\nNot Found...!";
		    }
		}
		file.close();
}
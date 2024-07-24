#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<conio.h>

using namespace std;

string name1,rname,name[25],rollno[25],course[25],clas[25],contact[25]; // For adding student details (Global Variables)
int total;

void login(){
	int count;
	char ch;
	string luserid,lpassword,id,pass,npass;
	cout<<"\tEnter the Username/Email : ";
	cin>>luserid;
	cout<<"\tEnter the Password : ";
	ch=getch();
	while(ch!=13){
		lpassword.push_back(ch);
		cout<<"*";
		ch=getch();
	}
//	cout<<lpassword;
     npass=lpassword;
	ifstream read ("record.txt");
	while(read>>name1>>id>>pass){
		if(id==luserid &&  pass==lpassword){
			count=1;
		}
	}
	read.close();
	if(count==1){
		cout<<"\n\tLOGIN SUCCESSFULLY !!!!"<<endl<<endl;
		system("cls");
	}
	else{
		cout<<"\n\tLOGIN ERROR \n Please Check your Username/Email and Password."<<endl<<endl;
		login();
	}
}

void registration(){
 string ruserid,rpassword,rid,rpass,pass;
 char ch;
 cout<<"\tEnter your Name : ";
 cin>>rname;
 cout<<"\tEnter your UserName/Email : ";
 cin>>ruserid;
 cout<<"\tEnter your Password : ";
 ch=getch();
 while(ch!=13){
 	rpassword.push_back(ch);
 	cout<<"*";
 	ch=getch();
 }
// cout<<rpassword;
 if(rpassword.size()<8){
 	cout<<"\n\nPassword Must Contains 8 letters. "<<endl;
 	cout<<"Enter your Password : ";
 	ch=getch();
	while(ch!=13){
		pass.push_back(ch);
		cout<<"*";
		ch=getch();
	rpassword=pass;
	} 	
 }	
 
 ofstream f1("record.txt",ios::app);
 f1<<rname<<' '<<ruserid<<' '<<rpassword<<endl;
 system("cls");
 cout<<"\t\n\nRegistration is Successfull !!!";
 cout<<"\t\t\n\n Now LOGIN to the System "<<endl;
 login();
} 

void enter_data_of_student(){
	int choice;
	cout<<"\nHow many Students do you want to enter ? ";
	cin>>choice;
	if(total==0){
	total=total+choice;
	for(int i=0;i<choice;i++){
		cout<<"\nData of Student "<<i+1<<endl<<endl;
		cout<<"Enter the Name of Student : ";
		cin>>name[i];
		cout<<"Enter the Roll Number of Student : ";
		cin>>rollno[i];
		cout<<"Enter the Class of Student : ";
		cin>>clas[i];
		cout<<"Enter the Course of Student : ";
		cin>>course[i];
		cout<<"Enter the Contact Number of Student : ";
		cin>>contact[i];
		cout<<endl<<endl;
	}
}
else{
		for(int i=total;i<total+choice;i++){
		cout<<"\nData of Student "<<i+1<<endl<<endl;
		cout<<"Enter the Name of Student : ";
		cin>>name[i];
		cout<<"Enter the Roll Number of Student : ";
		cin>>rollno[i];
		cout<<"Enter the Class of Student : ";
		cin>>clas[i];
		cout<<"Enter the Course of Student : ";
		cin>>course[i];
		cout<<"Enter the Contact Number of Student : ";
		cin>>contact[i];
		cout<<endl<<endl;
}
   total=total+choice;
}
}
void show_data_of_student(){
	if(total==0){
		cout<<"\nWe are unable to find data. So we conclude that !!!No Data is Entered!!!."<<endl<<endl;
	}
	else{
	for(int i=0;i<total;i++){
		cout<<"\nData of Student "<<i+1<<endl<<endl;
		cout<<"Name of Student : "<<name[i]<<endl;
		cout<<"Roll Number of Student : "<<rollno[i]<<endl;
		cout<<"Class of Student : "<<clas[i]<<endl;
		cout<<"Course of Student : "<<course[i]<<endl;
		cout<<"Contact Number of Student : "<<contact[i]<<endl;
		cout<<endl;
	}
}
}
void search_data_of_student(){
	if(total==0){
		cout<<"\nWe are unable to find data. So we conclude that !!!No Data is Entered!!!."<<endl<<endl;
	}
	else{
	string rollnum;
	cout<<"\nEnter the Roll Number of Student which you want to search : ";
	cin>>rollnum;
	for(int i=0;i<total;i++){
		if(rollnum==rollno[i]){
		cout<<"\nData of Student "<<i+1<<endl<<endl;
		cout<<"Name of Student : "<<name[i]<<endl;
		cout<<"Roll Number of Student : "<<rollno[i]<<endl;
		cout<<"Class of Student : "<<clas[i]<<endl;
		cout<<"Course of Student : "<<course[i]<<endl;
		cout<<"Contact Number of Student : "<<contact[i]<<endl;
		cout<<endl;
		}
	}
}
}
void update_data_of_student(){
    if(total==0){
		cout<<"\nWe are unable to find data. So we conclude that !!!No Data is Entered!!!."<<endl<<endl;
	}
	else{
	string rollnum;
	cout<<"\n Enter the Roll Number of Student which's data you want to update : ";
	cin>>rollnum;
	for(int i=0;i<total;i++){
			if(rollnum==rollno[i]){
		cout<<"\n Previous Data of Student "<<i+1<<endl<<endl;
		cout<<"Name of Student : "<<name[i]<<endl;
		cout<<"Roll Number of Student : "<<rollno[i]<<endl;
		cout<<"Class of Student : "<<clas[i]<<endl;
		cout<<"Course of Student : "<<course[i]<<endl;
		cout<<"Contact Number of Student : "<<contact[i]<<endl;
		cout<<endl;
		cout<<"Enter New Data of Student "<<endl<<endl;
		cout<<"Enter Name of Student : ";
		cin>>name[i];
		cout<<"Enter the Roll Number of Student : ";
		cin>>rollno[i];
		cout<<"Enter Class of Student : ";
		cin>>clas[i];
		cout<<"Enter Course of Student : ";
		cin>>course[i];
		cout<<"Enter Contact Number of Student : ";
		cin>>contact[i];
		cout<<endl<<endl;
		}
		
	}
}
}
void delete_data_of_student(){
    if(total==0){
		cout<<"\nWe are unable to find data. So we conclude that !!!No Data is Entered!!!."<<endl<<endl;
	}
	else{
	int del;
	cout<<"Press 1 to Delete All Records of Student"<<endl;
	cout<<"Press 2 to Delete Specific Records of Student"<<endl<<endl;
	cout<<"Choose the Option : ";
	cin>>del;
	if(del==1){
		total=0;
		cout<<"\n All Records are Successfully Deleted!!!"<<endl;
	}
	else if(del==2){
		string rollnum;
		cout<<"Enter the Roll Number of Student which's data you want to Delete : ";
		cin>>rollnum;
		for(int i=0;i<total;i++){
			if(rollnum==rollno[i]){
				for(int j=i;j<total;j++){
					name[j]=name[j+1];
					rollno[j]=rollno[j+1];
					clas[j]=clas[j+1];
					course[j]=course[j+1];
					contact[j]=contact[j+1];
				}
				total--;
				cout<<"\nYour Specific Record of Student is Successfully Deleted!!!"<<endl<<endl;
			}
		}
	}
}
}


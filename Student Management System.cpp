#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<conio.h>
#include "Source.h"
using namespace std;

 
 
int main(){
	

 int num;
 char ch;
 system("Color 09");
 cout<<"\n\n\n\t\t\t---------STUDENT MANAGEMENT SYSTEM SIGN-UP/REGISTRATION FORM FOR TEACHERS-----------\n\n\n\n";
 
 cout<<"\n\t\tPress L for LOGIN "<<endl;
 cout<<"\n\t\tPress R for Registration"<<endl<<endl;
 cout<<"\n\tChoose from above : ";
 cin>>ch;
cout<<endl;

 if(ch=='L' || ch=='l'){
 	login();
 }
 else if(ch=='R' ||ch=='r'){
 	registration();
 }
 else{
 	cout<<"\tInvalid Input.\n\t Try Again!!!";
 	main();
 }
if(ch=='L' || ch=='l' || ch=='R' ||ch=='r'){
   cout<<"\n\n\n\t\t---------WELCOME TO STUDENT MANAGEMENT SYSTEM---------"; 
   
 while(true){
// if(rname==name1)
 cout<<"\t\t\n\n\n\n";

 cout<<"\t\t || Press 1 to Enter the Data of Student  ||"   <<endl;
 cout<<"\t\t || Press 2 to Show the Data of Student   ||"   <<endl;
 cout<<"\t\t || Press 3 to Search the Data of Student ||"   <<endl;
 cout<<"\t\t || Press 4 to Update the Data of Student ||"   <<endl;
 cout<<"\t\t || Press 5 to Delete the Data of Student ||"   <<endl;
 cout<<"\t\t || Press 6 to Exit"<<endl;
 cout<<endl;
 cout<<"Select from above choices : ";
 cin>>num;
 cout<<endl;
 switch(num){
 	case 1: 
	 system("cls");
	 system("Color 8B");
//	  cout<<"\n\n\t\t\t\t\t\t\t\t                     Teacher Account Name : "<<rname;
	 cout<<"\n\n\t\t\t\t Process of Entering the Data of Student"<<endl;
	 enter_data_of_student();
 		break;
 	
	case 2: 
	system("cls");
	system("Color B4");
//	cout<<"\n\n\t\t\t\t\t\t\t\t                     Teacher Account Name : "<<rname;
	cout<<"\n\n\t\t\t\t Process of Showing the Data of Student"<<endl;
	show_data_of_student();
 		break;
 		
 	case 3: 
	 system("cls");
	 system("Color ED");
//	 cout<<"\n\n\t\t\t\t\t\t\t\t                     Teacher Account Name : "<<rname;
	 cout<<"\n\n\t\t\t\t Process of Searching the Data of Student"<<endl;
	 search_data_of_student();
 		break;
 	
 	case 4: 
	 system("cls");
	 system("Color 57");
//	 cout<<"\n\n\t\t\t\t\t\t\t\t                     Teacher Account Name : "<<rname;
	 cout<<"\n\n\t\t\t\t Process of Updating the Data of Student"<<endl;
	 update_data_of_student();
 		break;
 		
 	case 5: 
	 system("cls");
	 system("Color AF");
//	 cout<<"\n\n\t\t\t\t\t\t\t\t                     Teacher Account Name : "<<rname;
	 cout<<"\n\n\t\t\t\t Process of Deleting the Data of Student"<<endl;
	 delete_data_of_student();
 		break;
 		
 	case 6: exit(0);
 		break;
 		
 	default: cout<<"Invalid Input "<<endl;
 		   break;
 }
}
}
}


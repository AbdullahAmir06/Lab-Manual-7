#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int option=1,counter=0;
    char grade1,grade2,grade3,grade4,grade5;
    int marks,marks1=-1,marks2=-1,marks3=-1,marks4=-1,marks5=-1;
    string name,student1="NV",student2="NV",student3="NV",student4="NV",student5="NV";
    string username="Administrator",password="PF2020";

        cout<<"*********************************************************************************"<<endl;
        cout<<"                           Univeristy Grading System                             "<<endl;
        cout<<"*********************************************************************************"<<endl; 
        cout<<"                    Please Enter the Administration Credential!                  "<<endl;   
        cout<<"*********************************************************************************"<<endl;
        cout<<"Username      : ";
        cin>>username;
        cout<<"Password      : ";
        cin>>password;
        if(username == "Administrator" && password == "PF2020"){
        cout<<"*********************************************************************************"<<endl;
        cout<<"Choose the option from the menu: "<<endl; 
        cout<<"Enter 1 to add a student "<<endl;
        cout<<"Enter 2 to search a student "<<endl;
        cout<<"Enter 3 to delete a student "<<endl;
        cout<<"Enter 4 to update the data of a student "<<endl;
        cout<<"Enter 5 to display number of students in the system "<<endl;
        cout<<"Enter 6 to display list of all students without grade" <<endl;
        cout<<"Enter 7 to display list of all students with grade "<<endl;
        cout<<"Enter 0 to close program "<<endl;


        cout<<"Enter Input: ";
        cin>>option;
        
        if(option==0)
        cout<<"Program close sussessfully!";

        while(option!=0){
        switch(option)
        {
            case 0:                   
                cout<<"Program Stops"<<endl; 
            break;

            case 1:            
                cout<<"           Add a student"<<endl;
                cout<<"Enter Student Name   : ";
                cin>>name;
                cout<<"Enter Student Marks  : ";
                cin>>marks;
                if(student1=="NV"){
                    student1=name;
                    marks1=marks;
                }
                else
                if(student2=="NV"){
                    student2=name;
                    marks2=marks;
                }
                else
                if(student3=="NV"){
                    student3=name;
                    marks3=marks;
                }
                else
                if(student4=="NV"){
                    student4=name;
                    marks4=marks;
                }
                else
                if(student5=="NV"){
                    student5=name;
                    marks5=marks;
                }
                else
                cout<<endl<<"Memory is Full,no student can be added"<<endl;
            break;

            case 2:               
                cout<<"                   Search a student"<<endl;
                cout<<"Enter Student Name   :";
                cin>>name;
                cout<<endl<<endl;
                if(name==student1 || name==student2 || name==student3 || name==student4 || name==student5 ){
                //   cout<<"Student Name       :"<<name<<endl<<endl;
                  if(name==student1){
                  cout<<"Student Name       :"<<name<<endl;
                  cout<<"Marks              :"<<marks1<<endl;
                  marks=marks1;
                  if(marks>=85)  
                  grade1='A';
                  else
                  if(marks>=70)
                  grade1='B';
                  else
                  if(marks>=55)
                  grade1='C';
                  else
                  if(marks>=40)
                  grade1='D';
                  else
                  if(marks<40)
                  grade1='F';
                  cout<<"Grade              :"<<grade1<<endl;
                }
                else
                if(name==student2){
                  cout<<"Student Name       :"<<name<<endl;
                  cout<<"Marks              :"<<marks<<endl;
                  marks=marks2;
                  if(marks>=85)  
                  grade2='A';
                  else
                  if(marks>=70)
                  grade2='B';
                  else
                  if(marks>=55)
                  grade2='C';
                  else
                  if(marks>=40)
                  grade2='D';
                  else
                  if(marks<40)
                  grade2='F';
                  cout<<"Grade              :"<<grade2<<endl;
                }
                else
                if(name==student3){
                  cout<<"Student Name       :"<<name<<endl;
                  cout<<"Marks              :"<<marks<<endl;
                  marks=marks3;
                  if(marks>=85)  
                  grade3='A';
                  else
                  if(marks>=70)
                  grade3='B';
                  else
                  if(marks>=55)
                  grade3='C';
                  else
                  if(marks>=40)
                  grade3='D';
                  else
                  if(marks<40)
                  grade3='F';
                  cout<<"Grade              :"<<grade3<<endl;
                }
                else
                if(name==student4){
                  cout<<"Student Name       :"<<name<<endl;
                  cout<<"Marks              :"<<marks<<endl;
                  marks=marks4;
                  if(marks>=85)  
                  grade4='A';
                  else
                  if(marks>=70)
                  grade4='B';
                  else
                  if(marks>=55)
                  grade4='C';
                  else
                  if(marks>=40)
                  grade4='D';
                  else
                  if(marks<40)
                  grade4='F';
                  cout<<"Grade              :"<<grade4<<endl;
                }
                else
                if(name==student5){
                  cout<<"Student Name       :"<<name<<endl;
                  cout<<"Marks              :"<<marks<<endl;
                  marks=marks5;
                  if(marks>=85)  
                  grade5='A';
                  else
                  if(marks>=70)
                  grade5='B';
                  else
                  if(marks>=55)
                  grade5='C';
                  else
                  if(marks>=40)
                  grade5='D';
                  else
                  if(marks<40)
                  grade5='F';
                  cout<<"Grade              :"<<grade5<<endl;
                }
            }
                else
                cout<<"No Student Found!";
            break;

            case 3:
                cout<<"               Delete Student Record"<<endl;
                cout<<"Enter Student Name   :";
                cin>>name;
                cout<<endl<<endl;
                if(name==student1 || name==student2 || name==student3 || name==student4 || name==student5 ){
                    if(name==student1){
                        student1="NV";
                        marks1=-1;
                    }
                    else
                    if(name==student2){
                        student2="NV";
                        marks2=-1;
                    }
                    else
                    if(name==student3){
                        student3="NV";
                        marks3=-1;
                    }
                    else
                    if(name==student4){
                        student4="NV";
                        marks4=-1;
                    }
                    else
                    if(name==student5){
                        student5="NV";
                        marks5=-1;
                    }
                }
                else
                cout<<"Student Record Not Found! ";
            break;
            case 4:
                cout<<"                     Update Student Record"<<endl;
                cout<<"Enter Student Name    : ";
                cin>>name;
                cout<<endl<<endl;
                if(name==student1 || name==student2 || name==student3 || name==student4 || name==student5 ){
                    if(name==student1){
                        cout<<"Student Name  : "<<name<<endl;
                        cout<<"Student Marks : "<<marks1<<endl;
                        cout<<"Enter Student Marks : ";
                        cin>>marks1;
                        cout<<"Student Record Updates SUCCESSFULLY!"<<endl;
                    }
                    else
                    if(name==student2){
                        cout<<"Student Name  : "<<name;
                        cout<<"Student Marks : "<<marks2;
                        cout<<"Enter Student Marks : ";
                        cin>>marks;
                        marks2=marks;
                        cout<<"Student Record Updates SUCCESSFULLY!"<<endl;
                    }
                    else
                    if(name==student3){
                        cout<<"Student Name  : "<<name;
                        cout<<"Student Marks : "<<marks3;
                        cout<<"Enter Student Marks : ";
                        cin>>marks;
                        marks3=marks;
                        cout<<"Student Record Updates SUCCESSFULLY!"<<endl;
                    }
                    else
                    if(name==student4){
                        cout<<"Student Name  : "<<name;
                        cout<<"Student Marks : "<<marks4;
                        cout<<"Enter Student Marks : ";
                        cin>>marks;
                        marks4=marks;
                        cout<<"Student Record Updates SUCCESSFULLY!"<<endl;
                    }
                    else
                    if(name==student5){
                        cout<<"Student Name  : "<<name;
                        cout<<"Student Marks : "<<marks5;
                        cout<<"Enter Student Marks : ";
                        cin>>marks;
                        marks5=marks;
                        cout<<"Student Record Updates SUCCESSFULLY!"<<endl;
                    }
                }
            break;
            case 5:
                cout<<"display number of students in the system"<<endl;
                if(student1 != "NV")
                counter++;
                if(student2 !="NV")
                counter++;
                if(student3 !="NV")
                counter++;
                if(student4 !="NV")
                counter++;
                if(student5 !="NV")
                counter++;

                if(counter>0)
                cout<<"Total number of student in system: "<<counter<<endl;
                break;


            case 6:
                cout<<"               Display Students Record Without Grade"<<endl<<endl;
                cout<<"*********************************************************************"<<endl<<fixed;
                cout<<left<<setw(20)<<"Student Name"<<setw(23)<<"Marks"<<endl;
                cout<<"*********************************************************************"<<endl;
                if(student1 !="NV")
                    cout<<left<<setw(20)<<student1<<setw(23)<<marks1<<endl;
                if(student2 !="NV")
                    cout<<left<<setw(20)<<student2<<setw(23)<<marks2<<endl;
                if(student3 !="NV")
                    cout<<left<<setw(20)<<student3<<setw(23)<<marks3<<endl;
                if(student4 !="NV")
                    cout<<left<<setw(20)<<student4<<setw(23)<<marks4<<endl;
                if(student5 !="NV")
                    cout<<left<<setw(20)<<student5<<setw(23)<<marks5<<endl;
                cout<<"*********************************************************************"<<endl;
            break;
            case 7:
                cout<<"Student Recors with Grade"<<endl;
                cout<<"*********************************************************************"<<endl<<fixed;
                cout<<left<<setw(20)<<"Student Name"<<setw(23)<<"Marks"<<setw(23)<<"Grades"<<endl;
                cout<<"*********************************************************************"<<endl;
                if(student1 !="NV"){
                    
                    if(marks1>=85)  
                  grade1='A';
                  else
                  if(marks1>=70)
                  grade1='B';
                  else
                  if(marks1>=55)
                  grade1='C';
                  else
                  if(marks1>=40)
                  grade1='D';
                  else
                  if(marks1<40)
                  grade1='F';
                    cout<<left<<setw(20)<<student1<<setw(23)<<marks1<<setw(23)<<grade1<<endl;
                    }
                if(student2 !="NV"){
                    marks = marks2;
                    if(marks>=85)  
                  grade2='A';
                  else
                  if(marks>=70)
                  grade2='B';
                  else
                  if(marks>=55)
                  grade2='C';
                  else
                  if(marks>=40)
                  grade2='D';
                  else
                  if(marks<40)
                  grade2='F';
                    cout<<left<<setw(20)<<student2<<setw(23)<<marks2<<setw(23)<<grade2<<endl;
                }
                if(student3 !="NV"){
                    marks = marks3;
                    if(marks>=85)  
                  grade3='A';
                  else
                  if(marks>=70)
                  grade3='B';
                  else
                  if(marks>=55)
                  grade3='C';
                  else
                  if(marks>=40)
                  grade3='D';
                  else
                  if(marks<40)
                  grade3='F';
                    cout<<left<<setw(20)<<student3<<setw(23)<<marks3<<setw(23)<<grade3<<endl;
                    }
                if(student4 !="NV"){
                    marks = marks4;
                    if(marks>=85)  
                  grade4='A';
                  else
                  if(marks>=70)
                  grade4='B';
                  else
                  if(marks>=55)
                  grade4='C';
                  else
                  if(marks>=40)
                  grade4='D';
                  else
                  if(marks<40)
                  grade4='F';
                    cout<<left<<setw(20)<<student4<<setw(23)<<marks4<<setw(23)<<grade4<<endl;
                }
                if(student5 !="NV"){
                    marks = marks5;
                    if(marks>=85)  
                  grade5='A';
                  else
                  if(marks>=70)
                  grade5='B';
                  else
                  if(marks>=55)
                  grade5='C';
                  else
                  if(marks>=40)
                  grade5='D';
                  else
                  if(marks<40)
                  grade5='F';
                    cout<<left<<setw(20)<<student5<<setw(23)<<marks5<<setw(23)<<grade5<<endl;
                }
            break;
            default :
                if(option>7 || option<1)
                cout<<endl<<"Invalid Input "<<endl;
            
        }
            cout<<endl<<endl<<"Choose the option from the menu: "<<endl; 
            cout<<"Enter 1 to add a student "<<endl;
            cout<<"Enter 2 to search a student "<<endl;
            cout<<"Enter 3 to delete a student "<<endl;
            cout<<"Enter 4 to update the data of a student "<<endl;
            cout<<"Enter 5 to display number of students in the system "<<endl;
            cout<<"Enter 6 to display list of all students without grade" <<endl;
            cout<<"Enter 7 to display list of all students with grade "<<endl;
            cout<<"Enter 0 to close program "<<endl;
            cout<<"Enter Input: ";
            cin>>option;
        
        }
    }
        if(username != "Administrator" && password != "PF2020")
        cout<<"Credential are invalid! ";    
        
}
       



        

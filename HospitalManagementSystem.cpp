#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
     string Fname;
     string Lname;
     string Dob;
     void setinfo(){
        cout<<"Enter First Name"<<endl;
        cin>>Fname;
        cout<<"Enter Last Name"<<endl;
        cin>>Lname;
        cout<<"Enter Dob"<<endl;
        cin>>Dob;
     }
     void printinfo(){
        cout<<Fname<<"||"<<Lname<<"||"<<Dob<<endl;
     }

};
class Doctor : public Person{
    private:
    string qualification;
    string Specialization;
    string Appointment;
    public:
    void setdoctordata(){
        cout<<"Enter Qualification of Doctor"<<endl;
        cin>>qualification;
        cout<<"Enter Specialization of Doctor"<<endl;
        cin>>Specialization;
        cout<<"Enter Appointment"<<endl;
        cin>>Appointment;
    }
    void printdoctordata(){
        cout<<qualification<<"||"<<Specialization<<"||"<<Appointment<<endl;
        
        
    }
};
class Staff :public Person{
    private:
    string qualification;
    string Dateofjoining;
    int salary;
    string dutystart;
    string dutyend;
    public:
    void setstaffdata(){
        cout<<"Enter Qualification"<<endl;
        cin>>qualification;
        cout<<"Enter Dateofjoining"<<endl;
        cin>>Dateofjoining;
        cout<<"Enter Salary"<<endl;
        cin>>salary;
        cout<<"Enter dutystart"<<endl;
        cin>>dutystart;
        cout<<"Enter dutyend"<<endl;
        cin>>dutyend;
    }
    void printstaffdata(){
        cout<<qualification<<"||"<<Dateofjoining<<"||"<<salary<<"||"<<dutystart<<"||"<<dutyend<<endl;
        
    }
};
int main(){
    
    Doctor doc[3];
    for(int i=0;i<3;i++){
        doc[i].setinfo();
    doc[i].printinfo();
    doc[i].setdoctordata();
    doc[i].printdoctordata();
    }
    
    Staff stf[3];
    for(int i=0;i<3;i++){
stf[i].setinfo();
    stf[i].printinfo();
    stf[i].setstaffdata();
    stf[i].printstaffdata();
    }
    
}


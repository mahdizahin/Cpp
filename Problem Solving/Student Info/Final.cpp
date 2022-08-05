#include<iostream>
using namespace std;
class Person
{
    protected :
        string name;
        string gender;
        string dateofbirth;
        int    age;
        string skin_tone;
        double    height;
        string institute;
    public:
        Person ()
        {

        }
        Person(string n,string g,string db,int a,string st,double h,string inst)
        {
            name       =n ;
            gender     =g ;
            dateofbirth=db;
            age        =a ;
            skin_tone  =st;
            height     =h ;
            institute  =inst;
        }
        void setname(string Name)
        {
            name=Name;
        }
        string getname()
        {
        return name;
        }
        void setgender(string Gender)
        {
            gender=Gender;
        }
        string getgender()
        {
            return gender;
        }
        void setdateofbirth(string dateOFbirth)
        {
            dateofbirth=dateOFbirth;
        }
         string getdateofbirth()
        {
            return dateofbirth;
        }
        void setage (int aGe)
        {
            age=aGe;
        }
        int getage()
        {
            return age;
        }
        void setskintone(string skinTone)
        {
            skin_tone=skinTone;
        }
         string getskintone()
        {
            return skin_tone;
        }
        void setheight (int Height)
        {
            height=Height;
        }
        double getheight()
        {
            return height;
        }
        void setinstitutename(string Inst)
        {
            institute=Inst;
        }
         string getinstitute()
        {
            return institute;
        }


        void showpensoninfo()
        {
            cout<<"============================================================================================="<<endl;
            cout <<"The name of the person                        : "<<name<<endl;
            cout <<"The gender of this person                     : "<<gender<<endl;
            cout <<"The date of birth of this person              : "<<dateofbirth<<endl;
            cout <<"The age of this person                        : "<<age<<endl;
            cout <<"The skin tone of this  person                 : "<<skin_tone<<endl;
            cout <<"The height of the person                      : "<<height<<" foot"<<endl;
            cout <<"This person's university name                 : "<<institute<<endl;

        }

};
class Employee: public Person
{
    protected :
        string post;
        string mailaddress;
    public:
        Employee()
        {

        }
        Employee(string n,string g,string db,int a,string st,double h,string inst,string pOst,string mail):Person( n, g,db, a, st, h,inst)
        {
            post=pOst;
            mailaddress=mail;
        }
        void setpost(string Post)
        {
            post=Post;
        }
         string getpost()
        {
            return post;
        }
        void setmailadd(string mail)
        {
            mailaddress=mail;
        }
         string getmailadd()
        {
            return mailaddress;
        }
        void showeminfo ()
        {
            cout <<"The post of the person in this institute      : " <<post<<endl;
            cout <<"Mail address of this person                   : "<<mailaddress<<endl;
        }
};
 class Officer : public Employee
 {
     protected:
        string position;
        string work ;
        string graduationBSC;
        string graduationMSC;
        int phonenum;
     public :
         Officer()
         {

         }
        Officer(string n,string g,string db,int a,string st,double h,string inst,string pOst,string mail,string posi,string woRk,string BSC,string MSC,int num)
        :Employee( n, g,db, a, st, h,inst,pOst,mail)
        {
            position     =posi;
            work         =woRk;
            graduationBSC=BSC;
            graduationMSC=MSC;
            phonenum     =num;
        }
         void setposition(string Position)
        {
            position=Position;
        }
         string getposition()
        {
            return position;
        }
         void setwork(string woRk)
        {
            work=woRk;
        }
         string getwork()
        {
            return work;
        }
         void setgraduationBSC(string BSC)
        {
            graduationBSC=BSC;
        }
         string getgraduationBSC()
        {
            return graduationBSC;
        }
         void setgraduationMSC(string MSC )
        {
            graduationMSC=MSC;
        }
         string getgraduationMSC()
        {
            return graduationMSC;
        }
         void setphonenum (int number)
        {
            phonenum=number;
        }
        int getphonenum()
        {
            return phonenum;
        }
        void showofficerinfo()
        {
            cout<<"The position of this officer                  : "<<position<<endl;
            cout<<"The main work of this officer                 : "<<work<<endl;
            cout<<"This officer  passed BSC from                 : "<<graduationBSC<<endl;
            cout<<"This officer  passed MSC from                 : "<<graduationMSC<<endl;
            cout<<"The phone number  of this officer             : "<<phonenum<<endl;

        }
 };
 class Faculty: public Employee
{
    protected:
        string department ;
        string position ;
        string subjectname;
        string roomnum;
        string graduationBSC;
        string graduationMSC;
    public :
        Faculty()
        {

        }
        Faculty( string n,string g,string db,int a,string st,double h,string inst,string pOst,string mail,string dept,string posi,string subname,string room,string BSC,string MSC)
        :Employee( n, g,db, a, st, h,inst,pOst,mail)
        {
            department   =dept;
            position     =posi;
            subjectname  =subname;
            roomnum      =room;
            graduationBSC=BSC;
            graduationMSC=MSC;
        }
         void setdepartment(string dept)
        {
            department=dept;
        }
         string getdepartment()
        {
            return department;
        }
         void setposition(string possi)
        {
            position=possi;
        }
         string getposition()
        {
            return position;
        }
         void setsubjectname(string subname)
        {
            subjectname=subname;
        }
         string getsubjectname()
        {
            return subjectname;
        }
         void setroomnum(string room)
        {
            roomnum=room;
        }
         string getroomnum()
        {
            return roomnum;
        }
        void setgraduationBSC(string BSC)
        {
           graduationBSC =BSC;
        }
         string getgraduationBSC()
        {
            return graduationBSC;
        }
        void setgraduationMSC(string MSC )
        {
          graduationMSC  =MSC;
        }
         string getgraduationMSC()
        {
            return graduationMSC;
        }
        void showFacultyinfo()
        {
            cout<<"This person is the Faculty of                 : "<<department<<endl;
            cout<<"The position of the person                    : "<<position<<endl;
            cout<<"The teacher/faculty teaches                   : "<<subjectname<<endl;
            cout<<"The room  of the faculty                      : "<<roomnum<<endl;
            cout<<"This person  passed BSC from                  : "<<graduationBSC<<endl;
            cout<<"This person   passed MSC from                 : "<<graduationMSC<<endl;
        }
};
class Student : public Person
 {
 protected:
     string id;
     string mail;
     string department;
     string semister;
     string section;
     int    roll;
     double CGPA;


 public:
    Student()
    {

    }
    Student(string n,string g,string db,int a,string st,double h,string inst,string ID, int rOll,string Department,string Semister,string Section,double cGPA,string Mail)
    :Person( n, g,db, a, st, h,inst)
    {

        id        =ID;
        roll      =rOll;
        department=Department;
        semister  =Semister;
        section   =Section;
        CGPA      =cGPA;
        mail      =Mail;

    }
    void setid(string ID)
    {
        id=ID;
    }
    string getid()
    {
        return id;
    }
     void setroll(int rOll)
    {
        roll=rOll;
    }
    int getroll()
    {
        return roll;
    }
       void setdepartment(string Department)
    {
        department=Department;
    }
    string getdepartment()
    {
        return department;
    }
    void setsection( string Section)
    {
        section =Section;
    }
    string getsection()
    {
        return section;
    }
    void setsemister(string Semister)
    {
        semister =Semister;
    }
      string getsemister()
    {
        return semister;
    }
    void setCGPA(double cGPA)
    {
        CGPA =cGPA;
    }
      double getCGPA()
    {
        return CGPA;
    }
     void setmail(string Mail)
    {
        mail =Mail;
    }
     string getmail()
    {
        return mail;
    }
    void showstudentinfo()
    {
       // Person::showpensoninfo();
        cout<< "The student id                                : "<<id        <<endl;
        cout<< "The student roll                              : "<<roll      <<endl;
        cout<< "The student's Department                      : "<<department<<endl;
        cout<< "The student's Semester                        : "<<semister  <<endl;
        cout<< "The student's Section                         : "<<section   <<endl;
        cout<< "The student's cGPA                            : "<<CGPA      <<endl;
        cout<< "The student's Mail                            : "<<mail      <<endl;
    }

 };
 class GraduateStudent : public Student

{
protected :

    string batch;
    int    passingyear;
public:
    GraduateStudent()
    {

    }
GraduateStudent(string n,string g,string db,int a,string st,double h,string inst,string ID, int rOll,string Department,string Semister,string Section,double cGPA,string Mail,string Batch,int Passingyear)
     :Student( n, g, db, a, st, h,inst, ID,rOll,Department, Section, Semister, cGPA, Mail)
    {

        batch=Batch;
        passingyear=Passingyear;
    }
     void setbatch(string Batch)
    {
        batch=Batch;
    }
     string getbatch()
    {
        return batch;
    }
     void setpassingyear(int Passingyear)
    {
        passingyear=Passingyear;
    }
       int getpassingyear()
    {
        return passingyear;
    }
    void showgraduatestudentinfo()
    {
        cout <<"********This student is already a graduated*********  "<<endl;
        cout << " Student's batch                              : "<<batch      <<endl;
        cout << " Student's passing year                       : "<<passingyear<<endl;
    }
};

class TeachingAssistant: public Student,public Faculty
{
    protected:
        int numofinterns;
        string mainteacher;
    public :
        TeachingAssistant()
        {

        }

        TeachingAssistant(string n,string g,string db,int a,string st,double h,string inst,string ID, int rOll,string Department,string Semister,string Section,double cGPA,string Mail,string pOst,string mail,string dept,string posi,string subname,string room,string BSC,string MSC,int interns,string mt)
        :Student(n, g, db, a, st, h,inst, ID,rOll,Department, Section, Semister, cGPA, Mail ),Faculty(n, g,db, a, st, h,inst,pOst, mail,dept,posi,subname,room,BSC,MSC )

        {
            numofinterns=interns;
            mainteacher=mt;
        }

         void setNumofinterns(int numofinternS)
         {
          numofinterns=numofinternS;
         }
         int getNumofinterns()
         {
         return numofinterns;
         }
         void setNameofmainteacher(string Ta)
         {
          mainteacher=Ta;
         }
         string getNamefmainteacher()
         {
          return mainteacher;
         }


         void showTeachingAssistant ()
         {
            cout <<"******This person is student as well as teaching assistant******"<<endl;
            cout<< "Number of completed intern course             : "<<numofinterns <<endl;
            cout<< "Name of  main teacher                         : "<<mainteacher<<endl;
         }

};

int main()
{
   /*Officer obj("CAHNDRA","MALE", "1 january 2000", 22, "CHOCOLATE", 5.6, "AIUB", "OFFICER", "roy@aiub.edu", "ACCOUNTING HEAD", "SEEING LOT'S OF MONEY" , "AIUB", "AIUB" , 0177654);
   obj.showpensoninfo();
   obj.showeminfo();
   obj.showofficerinfo();*/

   Officer obj1;
   obj1.setname("PRITHOY");
   obj1.setgender("MALE");
   obj1.setdateofbirth("1 january 2000");
   obj1.setage(22);
   obj1.setskintone("CHOCOLATE");
   obj1.setheight(5.6);
   obj1.setinstitutename("AIUB");
   obj1.setpost("OFFICER");
   obj1.setmailadd("roy@aiub.edu");
   obj1.setposition("ACCOUNTING HEAD");
   obj1.setwork("SEEING LOT'S OF MONEY");
   obj1.setgraduationBSC("AIUB");
   obj1.setgraduationMSC("AIUB");
   obj1.setphonenum(456769);
   obj1.showpensoninfo();
   obj1.showeminfo();
   obj1.showofficerinfo();

   /*Faculty f1("MD.NAZMUL HOSSAIN","MALE", "1 MAY 1994", 26, "WHITE", 5.6, "AIUB", "FACULTY", "nazmul@aiub.edu", "COMPUTER SCIENCE", "LECTURER", "IP", "DNGA10", "AIUB", "AIUB");
   f1.showpensoninfo();
   f1.showeminfo();
   f1.showFacultyinfo();*/

   Faculty tr;
   tr.setname("MD.NAZMUL HOSSAIN");
   tr.setgender("MALE");
   tr.setdateofbirth("1 MAY 1994");
   tr.setage(26);
   tr.setskintone("WHITE");
   tr.setheight(5.6);
   tr.setinstitutename("AIUB");
   tr.setpost("FACULTY");
   tr.setmailadd("nazmul@aiub.edu");
   tr.setdepartment("COMPUTER SCIENCE");
   tr.setposition("LECTURER");
   tr.setsubjectname("IP ");
   tr.setroomnum("DNGA10 ");
   tr.setgraduationBSC("AIUB ");
   tr.setgraduationMSC("AIUB ");
   tr.showpensoninfo();
   tr.showeminfo();
   tr.showFacultyinfo();

   /*Student s1("NILOY","MALE", "2 january 2000", 22, "BLACK AND WHITE", 5.6, "AIUB", "22-46459-1",69, "CSE", "1ST", "B8", 0.00, "22-46459-1@student.aiub.edu" );
    s1.showpensoninfo();
    s1.showstudentinfo();*/

  Student s2 ;
   s2.setname("NILOY");
   s2.setgender("MALE");
   s2.setdateofbirth("2 january 2000");
   s2.setage(22);
   s2.setskintone("BLACK AND WHITE");
   s2.setheight(5.6);
   s2.setinstitutename("AIUB");
   s2.setid("22-46459-1");
   s2.setroll(69);
   s2.setdepartment("CSE");
   s2.setsemister("1ST");
   s2.setsection("B8");
   s2.setCGPA(0.00);
   s2.setmail("22-46459-1@student.aiub.edu");
   s2.showpensoninfo();
   s2.showstudentinfo();

   /*GraduateStudent g1("Fuad","MALE", "3 january 2000", 22, "DARK", 5.6, "AIUB", "22-46467-1",96, "CSE", "PASSED", "B8", 4.00, "22-46467-1@student.aiub.edu", "17-18", 2022);
   g1.showpensoninfo();
   g1.showstudentinfo();
   g1.showgraduatestudentinfo();*/

   GraduateStudent g2;
   g2.setname("FUAD");
   g2.setgender("MALE");
   g2.setdateofbirth("3 january 2000");
   g2.setage(22);
   g2.setskintone("DARK");
   g2.setheight(5.6);
   g2.setinstitutename("AIUB");
   g2.setid("22-46467-1");
   g2.setroll(96);
   g2.setdepartment("CSE");
   g2.setsemister("PASSED");
   g2.setsection("B8");
   g2.setCGPA(4.00);
   g2.setmail("22-46467-1@student.aiub.edu");
   g2.setbatch("17-18");
   g2.setpassingyear(2022);
   g2.showpensoninfo();
   g2.showstudentinfo();
   g2.showgraduatestudentinfo();

   TeachingAssistant t1("ZAHIN","MALE", "5 january 2000", 22, "WHITE", 5.5, "AIUB", "22-46447-1",60, "CSE", "PASSED", "B8", 4.00, "22-46447-1@student.aiub.edu", "TEACHING ASSISTANT", "zahin@aiub.edu", "COMPUTER SCIENCE", "ASSISTANT TEACHER", "ICS", "A101", "AIUB", "STUDING", 22, "MD.SAKIR HOSSAIN");
  // t1.showpensoninfo();
   t1.showstudentinfo();
   t1.showeminfo();
   t1.showFacultyinfo();
   t1.showTeachingAssistant();
}



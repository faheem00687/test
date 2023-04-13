///////                                                                         password is:   faheem


#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;
void greet(){
	
	
				cout<<"\t\t\t\t\t----------------------------------------\n";
       cout<<"\t\t\t\t\tPlease Provide Your Personal Details  : \n";
       cout<<"\t\t\t\t\t----------------------------------------\n\n";
       cout<<"\n\t\t\tNOTE: PROVIDE FIRST NAME ONLY, DONOT ENTER SPACE WHILE PROVIDING NAME,\n\tPAYMENT WON'T PROCEED IF THE GIVEN AMOUNT IS LESS THEN THE RATE OF CAR\n\n\n\n";
      
}

namespace first{
	string input;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
class info {
    
    public:
    info();
    
};
//seperate interface for implementation
   info::info()
    	{
		 string decide ="yes" ;
     cout<<"\t\t\t\t----------------------------------------------\n";    
     cout<<"\t\t\t\t\tSIMPLE CAR RENTAL SYSTEM \n";
     cout<<"\t\t\t\tWelcome to Our Company ,Choose from the menu : "<<endl;
     cout<<"\t\t\t\t----------------------------------------------\n";
		
	} 
	//////////////////////////////////////////////////////////////////////////////////////////////////////	
class car {
public:

	car	(){
	cout<<"\t\t\t\t";
    cout<<"Enter " <<1<<"\t- To Select  Audi"<<endl;
    cout<<"\t\t\t\t";
    cout<<"Enter " <<2<<"\t- To Select  BMW"<<endl;
    cout<<"\t\t\t\t";
    cout<<"Enter " <<3<<"\t- To Select  Hyundai"<<endl;
    cout<<"\t\t\t\t";
    cout<<"Enter " <<4<<"\t- To Select  Mercedes"<<endl;
	cout<<"\t\t\t\t";
    cout<<"Enter " <<5<<"\t- To Select  Tesla"<<endl;
	cout<<"\t\t\t\t";
    cout<<"Enter " <<6<<"\t- To Select  Skoda"<<endl;
	cout<<"\t\t\t\t";
    cout<<"Enter " <<7<<"\t- To Select  Volkswagun"<<endl;
	cout<<"\t\t\t\t";
    cout<<"Enter " <<8<<"\t- To Select  Toyota"<<endl;
    cout<<"\t\t\t\t";
    cout<<"Enter " <<9<<"\t- To Select  Ford"<<endl;
    
	}
    virtual void display() {
        
    }
};
 
class audi : public car {
public:
    void display() {
       
        system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - Audi"<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : 2016MD"<<endl;
     cout<<"\t\t\tColor : Red"<<endl;
     cout<<"\t\t\tMaximum Speed : 100 Km/h"<<endl;
     cout<<"\t\t\tPrice : 1000"<<endl;
       
    }
};

///////////////////////////////////////////////
class bmw : public car {
public:
    void display() {
         system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - bmw"<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : 2019MD"<<endl;
     cout<<"\t\t\tColor : Red"<<endl;
     cout<<"\t\t\tMaximum Speed : 1200 Km/h"<<endl;
     cout<<"\t\t\tPrice : 2000"<<endl;
    }
};

///////////////////////////////////////////////
class Hyundai : public car {
public:
    void display() {
         system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - Hyundai"<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : 2016MD"<<endl;
     cout<<"\t\t\tColor : Red"<<endl;
     cout<<"\t\t\tMaximum Speed : 700 Km/h"<<endl;
     cout<<"\t\t\tPrice : 800"<<endl;
    }
};

///////////////////////////////////////////////
class Mercedes : public car {
public:
    void display() {
         system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - Mercedes"<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : 2023MD"<<endl;
     cout<<"\t\t\tColor : black"<<endl;
     cout<<"\t\t\tMaximum Speed : 400 Km/h"<<endl;
     cout<<"\t\t\tPrice : 420"<<endl;
    }
};

///////////////////////////////////////////////
class Tesla : public car {
public:
    void display() {
         system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - Tesla"<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : 2020MD"<<endl;
     cout<<"\t\t\tColor : green"<<endl;
     cout<<"\t\t\tMaximum Speed : 350 Km/h"<<endl;
     cout<<"\t\t\tPrice : 500"<<endl;
    }
};
///////////////////////////////////////////////
class Skoda : public car {
public:
    void display() {
         system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - Skoda"<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : 2022MD"<<endl;
     cout<<"\t\t\tColor : purple"<<endl;
     cout<<"\t\t\tMaximum Speed : 400 Km/h"<<endl;
     cout<<"\t\t\tPrice : 600"<<endl;
    }
};

///////////////////////////////////////////////
class Volkswagun : public car {
public:
    void display() {
         system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - Volkswagun"<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : 2019MD"<<endl;
     cout<<"\t\t\tColor : red"<<endl;
     cout<<"\t\t\tMaximum Speed : 750 Km/h"<<endl;
     cout<<"\t\t\tPrice : 700"<<endl;
    }
};
///////////////////////////////////////////////
class Toyota : public car {
public:
    void display() {
         system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - Toyota"<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : 2018MD"<<endl;
     cout<<"\t\t\tColor : yellow"<<endl;
     cout<<"\t\t\tMaximum Speed : 800 Km/h"<<endl;
     cout<<"\t\t\tPrice : 900"<<endl;
    }
};
///////////////////////////////////////////////
class ford : public car {
public:
    void display() {
         system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - ford"<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : 2021MD"<<endl;
     cout<<"\t\t\tColor : blue"<<endl;
     cout<<"\t\t\tMaximum Speed : 950 Km/h"<<endl;
     cout<<"\t\t\tPrice : 1000"<<endl;
    }
};


////////////////////////////////////////////////////////////////
class User {

    private:
  string name_;
  string address_;
  int pay_;
  
 public:
 	
 	int amout;
 	User(){
 		amout=0;
	 }
  User(const string &name, const string &address, int pay)
      : name_(name), address_(address), pay_(pay) {}
  virtual void Print() const {
  	cout<< "_.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._your information_.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._\n\n\n";
  	cout<<"\t\t\t\t\t";
    cout << "Name: " << name_ << endl;
    cout<<"\t\t\t\t\t";
    cout << "Address: " << address_ <<endl;
    cout<<"\t\t\t\t\t";
    cout << "your payable amout: " << pay_ <<endl;
}	 

};

				
			
		


/////////////
class design {
private:
  string myString;
  friend void setString(design& obj);
public:
  void printString() {
  	for(int s=0;s<=119;s++)
	  {
	  
    cout << myString;
  }}
};

void setString(design& obj) {
  obj.myString = "-_";
}




int main()
{
	


		
	design obj;
  setString(obj);
  obj.printString();
  
  
	int login();
    login();
    info c ;
car a,*p;
    {
    using namespace first;
    cout << "\n\n\t\nYour choice   :     ";
    cin >> input;

   if (input == "1") {
        p = new audi;
    } else if (input == "2") {
        p = new bmw;
    } else if (input == "3") {
        p = new Hyundai;
    } else if (input == "4") {
        p = new Mercedes;
    } else if (input == "5") {
        p = new Tesla;
    } else if (input == "6") {
        p = new Skoda;
    } else if (input == "7") {
        p = new Volkswagun;
    } else if (input == "8") {
        p = new Toyota;
    } else if (input == "9") {
        p = new ford;
    }
	 else {
        cout << "Invalid input\n";
        return 1;
    }

    p->display();
    // exception handling
      try {
    string decide;
    cout<<"\n\n\n\t\t\tAre You Sure, you want to rent this Car? (yes /no  ) : ";
    cin>>decide;
    if (decide == "no") {
      throw ("break");
       
    }
    system("continue");
  } catch (string) {

   system("break");
  }
  /////////////////////////////////////////////////////
  system("cls");
  string name, address;
  int pay;
  
   greet();
    
  cout << "   _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._ _.-._.-._.-._.-_.-._.-._.-._.-._.-._.-._.-._.-._.-._  ";
  void greet();
  cout<<"\t\t\t";
  cout << "Enter your name: ";
  cin >> name;
  cout<<"\t\t\t";
  cout << "Enter your address: ";
  cin >> address;
  cout<<"\t\t\t";
  cout << "Enter your payment amout: ";
  cin >> pay;
  int jo =pay;

  User *user = new User(name, address, pay);
  system("cls");
  user->Print();
  cout<<"\t\t\t\t\t";
  int amout;
  if (input == "1") {
        cout<<"you booked the  : audi\n";
        amout=1000-pay;
        cout<<"\t\t\t\t\t";
        cout<<"you have to pay "<<amout<<"   rupees in delivery time"<<endl;
    } else if (input == "2") {
        cout<<"you booked the  : bmw\n";
        amout=2000-pay;
        cout<<"\t\t\t\t\t";
        cout<<"you have to pay "<<amout<<"   rupees in delivery time"<<endl;
    } else if (input == "3") {
       cout<<"you booked the  : Hyundai\n";
	   amout=800-pay;
	   cout<<"\t\t\t\t\t";
        cout<<"you have to pay "<<amout<<"   rupees in delivery time"<<endl;
    } else if (input == "4") {
        cout<<"you booked the  :  Mercedes\n";
        amout=420-pay;
        cout<<"\t\t\t\t\t";
        cout<<"you have to pay "<<amout<<"   rupees in delivery time"<<endl;
    } else if (input == "5") {
        cout<<"you booked the  :  Tesla\n";
        amout=500-pay;
        cout<<"\t\t\t\t\t";
        cout<<"you have to pay "<<amout<<"   rupees in delivery time"<<endl;
    } else if (input == "6") {
       cout<<"you booked the  :  Skoda\n";
       amout=600-pay;
       cout<<"\t\t\t\t\t";
        cout<<"you have to pay "<<amout<<"   rupees in delivery time"<<endl;
    } else if (input == "7") {
        cout<<"you booked the  : Volkswagun\n";
        amout=800-pay;
        cout<<"\t\t\t\t\t";
        cout<<"you have to pay "<<amout<<"   rupees in delivery time"<<endl;
    } else if (input == "8") {
        cout<<"you booked the  :  Toyota\n";
        amout=900-pay;
        cout<<"\t\t\t\t\t";
        cout<<"you have to pay "<<amout<<"   rupees in delivery time"<<endl;
    } else if (input == "9") {
        cout<<"you booked the  : ford\n";
        amout=1000-pay;
        cout<<"\t\t\t\t\t";
        cout<<"you have to pay "<<amout<<"   rupees in delivery time"<<endl;
    }
   
    
    system("pause");
    system("cls");
    cout<<"\n\n\n\n\n\n\n--------------------------------------THANK YOU-----------------------------------------------\n\n\n\n\n\n;/\n";

return 0;
}
}
//function
int login(){
	system("COLOR A");
	
   string pass ="";
   char ch;
   
   
   cout <<"\n\n\n\n\n\n\n\t\t\t\t\t  Simple Car Rental System Login";
   cout << "\n\n\n\n\n\n\n\t\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "faheem"){
      cout << "\n\n\n\n\t\t\t\t\t  Access Granted! Welcome To Our System \n\n";
      system("PAUSE");
      system("CLS");
      
   }else{
      cout << "\n\n\n\n\t\t\t\t\tAccess Aborted...Please Try Again!!\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}



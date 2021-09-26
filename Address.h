#ifndef ADDRESS
#define ADDRESS

#include <stdio.h>
#include <iostream>
#include<string.h>

#include "EirCode.h" //include the EirCode.h file 


using namespace std;


 
#define SIZEOFSTREET 40
#define SIZEOFAREA 40
#define SIZEOFADDRESS 40 


class Address
{
public:
	Address();                                     //default constructor
	Address(int aNumber,char* aStreet,char* aArea);//regular constructor
	~Address();                                   //deconstructor

	void askTheValues();                         //ask values of address
	void setTheValues();                         //set the address values

	int   getTheNumber();
	char* getTheStreet();
	char* getTheArea();

	
	void displayFullAddress();                    //display full address 
	

	void askUserRoutingKey();
	void setTheRoutingKey();
	void getTheRoutingKey();
	

	void askuserUniqueIdentifier();
	void setTheUniqueIdentifier();
	void getTheUniqueIdentifier();


protected:


private:

	int Number;                        //save the number of the address here
	char theStreet[SIZEOFSTREET];     //save the street of the address here
	char theArea[SIZEOFAREA];        //save the area of the address here

	EirCode      theEirCode;

};



#endif




//---------------Functions-----------------

inline Address:: Address()                           // Default Constructor
{
	strcpy_s(theStreet, "long island");         //copy "long island" to the attribute theStreet
	strcpy_s(theArea, "Dublin");               //copy "long island" to the attribute theArea
      	Number = 55;                              //save "55" to the attribute Number

	cout << "\nDebug from Default Constructor OF ADDRESS" << endl;
	cout << "Default:The  Default Number  = " <<Number << endl;
	cout << "Default:The  Default Street  = " <<theStreet << endl;
	cout << "Default:The  Default Area    = " <<theArea << endl;

}

inline Address::Address(int aNumber,char* aStreet,char* aArea)//regular constructor
{
        strcpy_s(theStreet, aStreet);
	strcpy_s(theArea, aArea);
        Number = aNumber;

	cout << "\nDebug from Regular Constructor OF ADDRESS" << endl;
	cout << "Default:The  Regular Number  = " <<Number << endl;
	cout << "Default:The  Regular Street  = " <<theStreet << endl;
	cout << "Default:The  Regular Area    = " <<theArea << endl;

}




inline void Address::askTheValues()               //request user input
{
	cout<<"\nDebug from askTheValues():Enter The Number Then Street Then Area"<<endl;
}

inline void Address::setTheValues()//save values to the attributes

{
	cout<<"Debug from setTheValues():Enter Here =>";
        cin>>Number>>theStreet>>theArea;


}

inline int Address::getTheNumber()            //store Number for later use
{
	return Number;
}

inline char* Address::getTheStreet()          //store theStreet for later use
{
	return theStreet;
}


inline char* Address::getTheArea()            //store theArea for later use
{
	return theArea;
}

inline void Address::displayFullAddress()    //show Full Address to user
{
	cout<<"\nDebug from DisplayFullAddress():The Full Address = "<<Number<<" "<<theStreet<<" "<<theArea<<" " << endl;
	
}


inline void Address::askUserRoutingKey()         //request user input
{
	theEirCode.askUserRoutingKey();
}

inline void Address::setTheRoutingKey()       //store the input to the attribute routingKey
{
	
	theEirCode.setTheRoutingKey();
}

 inline void Address::getTheRoutingKey()      //store RoutingKey for later use
{
		
	theEirCode.getTheRoutingKey();
}



inline void Address::askuserUniqueIdentifier()  //request Identifier value
{
	theEirCode.askuserUniqueIdentifier();
}

inline void Address::setTheUniqueIdentifier()  //store the input to the attribute UniqueIdentifier
{
	theEirCode.setTheUniqueIdentifier();
}

inline void Address::getTheUniqueIdentifier()   //store Identifer for later use
{
	theEirCode.getTheUniqueIdentifier();
}


inline Address::~Address() // DeConstructor
{
	cout << "\nDebug from default Deconstructor OF ADDRESS" << endl;
	cout << "Default:The Number = " <<Number << endl;
	cout << "Defaul:The  Street = " <<theStreet << endl;
	cout << "Defaul:The  Area   = " <<theArea << endl;

}


#ifndef EIRCODE
#define EIRCODE

#include <stdio.h>
#include <iostream>
#include<string.h>


using namespace std; 


#define SIZEOFKEY 10
#define SIZEOFID 10

class EirCode
{
public: 
	EirCode();                        //constructor
	EirCode(char* Key,char* ID);      //regualr constructor
	~EirCode();//deconstructor

	void askUserRoutingKey();        //ask for routing value
	void setTheRoutingKey();
	char* getTheRoutingKey(void);
	

	void askuserUniqueIdentifier();   //ask for Identifier value
	void setTheUniqueIdentifier();
	char* getTheUniqueIdentifier(void);

        void displayEirCodeDetails();        //display full EirCode


private: 

	    char  routingKey[SIZEOFKEY];        //store the RoutingKey value here
	    char  uniqueIdentifier[SIZEOFID];   //store the Identifier value here

};


inline EirCode :: EirCode()                        // Default Constructor
{
	strcpy_s(routingKey, "K000");
	strcpy_s(uniqueIdentifier, "K123");

	cout << "\nDebug from Default Constructor OF EirCode" << endl;
	cout << "Default:The  routingKey       = " <<routingKey << endl;
	cout << "Default:The  uniqueIdentifier = " <<uniqueIdentifier << endl;

}

inline EirCode::EirCode(  char* Key,  char* ID)       //regular constructor
{
	strcpy_s(routingKey, Key);
	strcpy_s(uniqueIdentifier, ID);

	cout << "\nDebug from Regualr Constructor OF EirCode" << endl;
	cout << "Default:The  routingKey       = " <<routingKey << endl;
	cout << "Default:The  uniqueIdentifier = " <<uniqueIdentifier << endl;
}





inline void EirCode::askUserRoutingKey()           //request user input
{
	cout<<"\nDebug from askUserRoutingKey():Enter A Routing Key value = ";

}

inline void EirCode::setTheRoutingKey()            //store the input to the attribute routingKey
{
	cin>>routingKey;
	cout<<"Debug from setTheRoutingKey():RoutingKey is saved "<<endl;
}

inline char* EirCode::getTheRoutingKey()            //store RoutingKey for later use
{
		return routingKey;
}

inline void EirCode::askuserUniqueIdentifier()     //request Identifier value
{
	cout<<"\nDebug from askserUniqueIdentifier():Enter A UniqueIdentifier value = ";
}

inline void EirCode::setTheUniqueIdentifier()       //store the input to the attribute UniqueIdentifier
{
	cin>>uniqueIdentifier;
	cout<<"Debug from setTheUniqueIdentifier(): The UniqueIdentifier is saved "<<endl;
}

inline char* EirCode::getTheUniqueIdentifier()      //store Identifer for later use
{
		return uniqueIdentifier;
}


inline void EirCode::displayEirCodeDetails()          //show EirCode details to user
{
	cout<<"Debug from DisplayEirCode.Details():The EirCode is = "<<routingKey<<" "<<uniqueIdentifier<<endl;
}


inline EirCode::~EirCode()                              // DeConstructor
{
	cout << "\nDebug from default Deconstructor OF EirCode" << endl;
	cout << "Default:The  RoutingKey       value = " <<routingKey << endl;
	cout << "Default:The  UniqueIdentifier value = " <<uniqueIdentifier << endl;

}

#endif
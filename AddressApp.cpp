#include "Address.h"

int main (void) 
{
	cout << "-----------Main is starting-----------" << endl;




	int N;

	Address      myFirstAddress;
	Address      mySecondAddress(55,"Long Island","Dublin");

        EirCode      myFirstEirCode;
	EirCode      mySecondEirCode("D123","E123");
	
      
	
        myFirstAddress.askTheValues();
        myFirstAddress.setTheValues();

        cout<<"\nDebug from getTheNumber():The number is = "<<  myFirstAddress.getTheNumber() << endl;
        cout<<"Debug from getTheStreet():The Street is = "<<   	myFirstAddress.getTheStreet() << endl;
        cout<<"Debug from getTheArea()  :The Area   is = "<<   	myFirstAddress.getTheArea()   << endl;


	myFirstAddress.askUserRoutingKey();
	myFirstEirCode.setTheRoutingKey();
	myFirstAddress.askuserUniqueIdentifier();
	myFirstEirCode.setTheUniqueIdentifier();
	cout<<"\nDebug  from    getTheRoutingKey():The RoutingKey = "<<myFirstEirCode.getTheRoutingKey() << endl;
        cout<<"Debug from getTheUniqueIdentifier():The Identifier = "<<myFirstEirCode.getTheUniqueIdentifier() << endl;

        myFirstAddress.displayFullAddress();
	myFirstEirCode.displayEirCodeDetails(); 
	





	cout << " -----------Main is ending-----------" << endl;

	return 0;
}
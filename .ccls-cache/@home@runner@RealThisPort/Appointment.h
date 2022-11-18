//IT21834592 Chethani A.V.S
//Event Photography management system
//Appointment.h

#include <iostream>
#include <cstring>
using namespace std;

class Appointment
{
	protected:
	char appoinment_id[20];
	char appoinment_date[20];
	char appoinment_time[20];
	char user_id[20];
	char status[20];
//	Admin* ad[SIZE];
//	Registereduser* regmeb2;
	
	public:
		Appointment();
		Appointment(const char aId[], const char aDate[], const char aTime[], const char uId[], const char sta[]);
		void placeAppoinment(const char uId[]);
	    void displayStatus();
		~Appointment();
	
};

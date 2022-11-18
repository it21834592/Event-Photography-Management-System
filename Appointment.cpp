//IT21834592 Chethani A.V.S
//Event Photography management system
//Appointment.cpp

#include "Appointment.h"
#include <iostream>
#include <cstring>
using namespace std;


Appointment::Appointment()
{
	strcpy(appointment_id, "");
	strcpy(appointment_date, "");
	strcpy(appointment_time, "");
	strcpy(user_id, "");
	strcpy(status, "");

}

Appointment::Appointment(const char aId[], const char aDate[], const char aTime[], const char uId[], const char sta[])
{
	strcpy(appointment_id, aId);
	strcpy(appointment_date, aDate);
	strcpy(appointment_time, aTime);
	strcpy(user_id, uId);
	strcpy(status,sta );
	
}

void Appointment::placeAppointment(const char uId[])
{
	cout << "User is : " << uId <<endl;
}
void Appointment::displayStatus()
{
	cout << "status " << status << endl;
}

Appointment::~Appointment()
{
		cout << "Destructor running" << endl;
}


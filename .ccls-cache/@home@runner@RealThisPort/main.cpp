#include <iostream>
#include<cstring>
#include "RegisterdUser.h"
#include "Admin.h"
#include "Appointment.h"
#include "Package.h"
#include "Payments.h"
#include "Feedback.h"

#include <cstring>
#include <iostream>
using namespace std;

int main() {
  
	//create appointment object
	Appointment* appointment[2];
	appointment[0] = new Appointment();
	appointment[1]= new Appointment("ap001", "2022-09-17", "22:18:09", "001", "pending");

	//acces method in appointment class
	appointment[0]->placeAppoinment();
	appointment[1]->displayStatus();
	return 0;
  
}
// including the seat.cpp which has definitiond of all member functions.
#include "seat_functions.cpp"

//definition of main function
int main()
{
	seat_planner seatplan;        // creating object of the seat_planner class
	seatplan.get_details();	      // call to get_deatils() member function of derived class
	seatplan.seat_plan();		  // call to seat_plan() member function of derived class

	return 0;
}

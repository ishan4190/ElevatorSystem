#pragma once
#include"IElevatorFactory.h"
#include<queue>

class Elevator : public IElevatorFactory {

public:

	Elevator(int currentFloor);
	void moveUp();
	void moveDown();
	void addNewDestination(int destination);
	ELEVATOR_DIRECTION direction();
	ELEVATOR_STATUS status();
	void setCurrentFloor(int currentFloor);
	int getCurrentFloor();
	int nextDestination();
	void popDestination();
	
	
	
	
private :
	int currentFloor;
	std::queue<int> destinationFloors;

};

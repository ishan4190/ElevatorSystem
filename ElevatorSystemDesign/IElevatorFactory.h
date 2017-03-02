#pragma once

 enum ELEVATOR_DIRECTION{UP, DOWN, ON_HOLD};
 enum ELEVATOR_STATUS{OCCUPIED, EMPTY};

class IElevatorFactory {

	virtual void moveUp() = 0;
	virtual void moveDown() = 0;
	virtual void addNewDestination(int destinationFloor) = 0;
	virtual ELEVATOR_DIRECTION direction()=0;
	virtual ELEVATOR_STATUS status()=0;
};

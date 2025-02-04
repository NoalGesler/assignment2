#ifndef DRIVINGSIMULATOR_SCOOTER_H
#define DRIVINGSIMULATOR_SCOOTER_H

#include "Vehicle.h"

class Scooter : public Vehicle {

public:
	explicit Scooter(string brand, string model);

	virtual ~Scooter();
	virtual double mileageEstimate(double time);

	virtual string toString();
};


#endif //DRIVINGSIMULATOR_SCOOTER_H
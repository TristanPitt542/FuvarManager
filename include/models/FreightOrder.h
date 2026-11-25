#pragma once
#include <string>

enum class FreightStatus {
	available,
	dispatched,
	delivered
};

enum class OrderType {
	priority,
	home,
	optimised,
};

struct Dimensions
{
	double length;
	double width;
	double height;
};

class FreightOrder {
private:
	double weight;
	Dimensions dimensions;

	std::string pickupLocation;
	std::string destinationLocation;

	int orderID;
	float ADR;

	OrderType orderType;
	FreightStatus status;

public:
	// Constructors
	FreightOrder(int id,
		const std::string& pickupLocation,
		const std::string& deliveryLocation,
		double weight,
		Dimensions dimensions,
		OrderType orderType,
		FreightStatus status,
		float ADR
	);

	// Destructor - maybe need it later
	//~FreightOrder();

	// Getters
	int getID() const { return orderID; };
	const std::string& getPickupLocation() const { return pickupLocation; };
	const std::string& getDestinationLocation() const { return destinationLocation; };
	double getWeight() const { return weight; };
	double getVolume() const { return (dimensions.length * dimensions.width * dimensions.height) / 1000.0; };
	OrderType getOrderType() const { return orderType; };
	FreightStatus getStatus() const { return status; };
	float getADR() const { return ADR; };

	// Setters
	void setStatus(FreightStatus newStatus) { status = newStatus; };
	void setOrderType(OrderType newOrderType) { orderType = newOrderType; };
	void setADR(float newADR) { ADR = newADR; };
	void setPickupLocation(const std::string& newPickupLocation) { pickupLocation = newPickupLocation; };
	void setDestinationLocation(const std::string& newDestinationLocation) { destinationLocation = newDestinationLocation; };
	void setWeight(double newWeight) { weight = newWeight; };
	void setDimensions(Dimensions newDimensions) { dimensions = newDimensions; };
};


//Jacob Nguyen
//CPSC-120L-04
//4/18/25
//jacobb.nguyen@csu.fullerton.edu
//jacobbn15

#include "LeftoverRecord.h"

LeftoverRecord::LeftoverRecord(std::string date, std::string meal, std::string foodName, double quantity,
                               std::string reason, std::string disposal, double cost)
    : date(date), meal(meal), foodName(foodName), quantity(quantity),
      leftoverReason(reason), disposalMechanism(disposal), cost(cost) {}

std::string LeftoverRecord::getDate() const { return date; }
std::string LeftoverRecord::getMeal() const { return meal; }
std::string LeftoverRecord::getFoodName() const { return foodName; }
double LeftoverRecord::getQuantity() const { return quantity; }
std::string LeftoverRecord::getLeftoverReason() const { return leftoverReason; }
std::string LeftoverRecord::getDisposalMechanism() const { return disposalMechanism; }
double LeftoverRecord::getCost() const { return cost; }

void LeftoverRecord::setDate(const std::string& d) { date = d; }
void LeftoverRecord::setMeal(const std::string& m) { meal = m; }
void LeftoverRecord::setFoodName(const std::string& f) { foodName = f; }
void LeftoverRecord::setQuantity(double q) { quantity = q; }
void LeftoverRecord::setLeftoverReason(const std::string& r) { leftoverReason = r; }
void LeftoverRecord::setDisposalMechanism(const std::string& d) { disposalMechanism = d; }
void LeftoverRecord::setCost(double c) { cost = c; }

bool LeftoverRecord::operator==(const LeftoverRecord& other) const {
    return date == other.date &&
           meal == other.meal &&
           foodName == other.foodName &&
           quantity == other.quantity &&
           leftoverReason == other.leftoverReason &&
           disposalMechanism == other.disposalMechanism &&
           cost == other.cost;
}


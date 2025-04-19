//Jacob Nguyen
//CPSC-120L-04
//4/18/25
//jacobb.nguyen@csu.fullerton.edu
//jacobbn15

#ifndef LEFTOVER_RECORD_H
#define LEFTOVER_RECORD_H

#include <string>

class LeftoverRecord {
private:
    std::string date;
    std::string meal;
    std::string foodName;
    double quantity;
    std::string leftoverReason;
    std::string disposalMechanism;
    double cost;

public:
    LeftoverRecord(std::string date, std::string meal, std::string foodName, double quantity,
                   std::string reason, std::string disposal, double cost);

    std::string getDate() const;
    std::string getMeal() const;
    std::string getFoodName() const;
    double getQuantity() const;
    std::string getLeftoverReason() const;
    std::string getDisposalMechanism() const;
    double getCost() const;

    void setDate(const std::string& date);
    void setMeal(const std::string& meal);
    void setFoodName(const std::string& foodName);
    void setQuantity(double quantity);
    void setLeftoverReason(const std::string& reason);
    void setDisposalMechanism(const std::string& disposal);
    void setCost(double cost);

    bool operator==(const LeftoverRecord& other) const;
};

#endif
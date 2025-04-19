//Jacob Nguyen
//CPSC-120L-04
//4/18/25
//jacobb.nguyen@csu.fullerton.edu
//jacobbn15


#ifndef LEFTOVER_REPORT_H
#define LEFTOVER_REPORT_H

#include "LeftoverRecord.h"
#include <vector>
#include <string>

class LeftoverReport {
private:
    std::vector<LeftoverRecord> records;

public:
    LeftoverReport(const std::vector<LeftoverRecord>& records);

    double getTotalFoodWasteCost() const;
    std::string getMostCommonWasteFood() const;
    std::string getMostWasteProducingMeal() const;
    std::string getMostCommonLeftoverReason() const;
    std::string getMostCommonDisposalMechanism() const;
    std::string getBestLeftoverReductionStrategy() const;
};

#endif

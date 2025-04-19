//Jacob Nguyen
//CPSC-120L-04
//4/18/25
//jacobb.nguyen@csu.fullerton.edu
//jacobbn15


#include "LeftoverReport.h"

LeftOverReport::LeftoverReport(const std::vector<LeftoverRecord>& records)
    : records(records) {}

double LeftOverReport::getTotalFoodWasteCost() const { return 0.0; }
std::string LeftoverReport::getMostCommonWasteFood() const { return ""; }
std::string LeftoverReport::getMostWasteProducingMeal() const { return ""; }
std::string LeftoverReport::getMostCommonLeftoverReason() const { return ""; }
std::string LeftoverReport::getMostCommonDisposalMechanism() const { return ""; }
std::string LeftoverReport::getBestLeftoverReductionStrategy() const { return ""; }
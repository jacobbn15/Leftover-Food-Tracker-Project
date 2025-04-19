//Jacob Nguyen
//CPSC-120L-04
//4/18/25
//jacobb.nguyen@csu.fullerton.edu
//jacobbn15


#include "LeftOverReport.h"

LeftOverReport::LeftOverReport(const std::vector<LeftoverRecord>& records)
    : records(records) {}

double LeftOverReport::getTotalFoodWasteCost() const { return 0.0; }
std::string LeftOverReport::getMostCommonWasteFood() const { return ""; }
std::string LeftOverReport::getMostWasteProducingMeal() const { return ""; }
std::string LeftOverReport::getMostCommonLeftoverReason() const { return ""; }
std::string LeftOverReport::getMostCommonDisposalMechanism() const { return ""; }
std::string LeftOverReport::getBestLeftoverReductionStrategy() const { return ""; }
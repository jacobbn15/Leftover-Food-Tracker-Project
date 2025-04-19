//Jacob Nguyen
//CPSC-120L-04
//4/18/25
//jacobb.nguyen@csu.fullerton.edu
//jacobbn15


#include "LeftoverTracker.h"
#include "LeftoverRecord.h"
#include "LeftoverReport.h"
#include <iostream>

#include "LeftoverTracker.h"
#include "LeftoverRecord.h"
#include "LeftoverReport.h"
#include <iostream>

int main() {
    LeftoverTracker tracker;

    // Add a sample record
    LeftoverRecord record("2025-04-17", "Dinner", "Pizza", 2.0, "slices", "Fridge", 285.0);
    tracker.addRecord(record);

    // Generate a report from the record(s)
    LeftoverReport report = tracker.generateReport();

    // Output some report details
    std::cout << "Total Food Waste Cost: $" << report.getTotalFoodWasteCost() << "\n";
    std::cout << "Most Common Waste Food: " << report.getMostCommonWasteFood() << "\n";
    std::cout << "Most Waste Producing Meal: " << report.getMostWasteProducingMeal() << "\n";
    std::cout << "Most Common Leftover Reason: " << report.getMostCommonLeftoverReason() << "\n";
    std::cout << "Most Common Disposal Mechanism: " << report.getMostCommonDisposalMechanism() << "\n";
    std::cout << "Best Leftover Reduction Strategy: " << report.getBestLeftoverReductionStrategy() << "\n";

    return 0;
}
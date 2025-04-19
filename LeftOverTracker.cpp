//Jacob Nguyen
//CPSC-120L-04
//4/18/25
//jacobb.nguyen@csu.fullerton.edu
//jacobbn15


#include "LeftoverTracker.h"

bool LeftoverTracker::addRecord(const LeftoverRecord& record) {
    for (const auto& r : records) {
        if (r == record) {
            return false; // Duplicate found
        }
    }
    records.push_back(record);
    return true;
}

std::vector<LeftoverRecord> LeftoverTracker::getRecords() const {
    return records;
}

LeftoverReport LeftoverTracker::generateReport() const {
    return LeftoverReport(records);
}
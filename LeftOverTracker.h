//Jacob Nguyen
//CPSC-120L-04
//4/18/25
//jacobb.nguyen@csu.fullerton.edu
//jacobbn15

#ifndef LEFTOVER_TRACKER_H
#define LEFTOVER_TRACKER_H

#include "LeftoverRecord.h"
#include "LeftoverReport.h"
#include <vector>

class LeftoverTracker {
private:
    std::vector<LeftoverRecord> records;

public:
    bool addRecord(const LeftoverRecord& record);
    std::vector<LeftoverRecord> getRecords() const;
    LeftoverReport generateReport() const;
};

#endif
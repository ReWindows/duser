#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 3 member(s).
namespace CManipulationProcessorCore {
class LimitedQueue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dequeue@LimitedQueue@CManipulationProcessorCore@@QEAAXH@Z
    void Dequeue(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enqueue@LimitedQueue@CManipulationProcessorCore@@QEAAXUMANIPULATION_STATE@@@Z
    void Enqueue(MANIPULATION_STATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PruneOldDupItems@LimitedQueue@CManipulationProcessorCore@@QEAAXK@Z
    void PruneOldDupItems(unsigned long);
};
} // namespace CManipulationProcessorCore

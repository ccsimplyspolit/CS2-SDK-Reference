#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/CNetworkedCycle.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x38
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class SequenceData
        {
        public:
            source2sdk::animationsystem::HSequence m_hSequence; // 0x0            
            source2sdk::animgraphlib::CNetworkedCycle m_cycle; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::SequenceData, m_hSequence) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::SequenceData, m_cycle) == 0x4);
        
        static_assert(sizeof(source2sdk::animgraphlib::SequenceData) == 0x38);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/PairedSequence_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x100
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class PairedSequenceData
        {
        public:
            source2sdk::animgraphlib::PairedSequence_t m_vecPairedSequences[8]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::PairedSequenceData, m_vecPairedSequences) == 0x0);
        
        static_assert(sizeof(source2sdk::animgraphlib::PairedSequenceData) == 0x100);
    };
};

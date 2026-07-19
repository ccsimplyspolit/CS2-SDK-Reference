#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // Has VTable
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNetworkedSequenceOperation
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::animationsystem::HSequence m_hSequence; // 0x8            
            float m_flPrevCycle; // 0xc            
            float m_flCycle; // 0x10            
            CNetworkedQuantizedFloat m_flWeight; // 0x14            
            bool m_bSequenceChangeNetworked; // 0x1c            
            bool m_bDiscontinuity; // 0x1d            
            uint8_t _pad001e[0x2]; // 0x1e
            float m_flPrevCycleFromDiscontinuity; // 0x20            
            float m_flPrevCycleForAnimEventDetection; // 0x24            
            
            // Datamap fields:
            // CUtlString sequenceName; // 0x7fffffff
            // int32_t sequence; // 0x7fffffff
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CNetworkedSequenceOperation, m_hSequence) == 0x8);
        static_assert(offsetof(source2sdk::server::CNetworkedSequenceOperation, m_flPrevCycle) == 0xc);
        static_assert(offsetof(source2sdk::server::CNetworkedSequenceOperation, m_flCycle) == 0x10);
        static_assert(offsetof(source2sdk::server::CNetworkedSequenceOperation, m_flWeight) == 0x14);
        static_assert(offsetof(source2sdk::server::CNetworkedSequenceOperation, m_bSequenceChangeNetworked) == 0x1c);
        static_assert(offsetof(source2sdk::server::CNetworkedSequenceOperation, m_bDiscontinuity) == 0x1d);
        static_assert(offsetof(source2sdk::server::CNetworkedSequenceOperation, m_flPrevCycleFromDiscontinuity) == 0x20);
        static_assert(offsetof(source2sdk::server::CNetworkedSequenceOperation, m_flPrevCycleForAnimEventDetection) == 0x24);
        
        static_assert(sizeof(source2sdk::server::CNetworkedSequenceOperation) == 0x28);
    };
};

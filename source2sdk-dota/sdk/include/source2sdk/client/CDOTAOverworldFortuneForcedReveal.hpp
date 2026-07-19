#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/OverworldTarotCardID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldFortuneForcedReveal
        {
        public:
            // metadata: MPropertyDescription
            source2sdk::client::OverworldTarotCardID_t m_unID; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            // metadata: MPropertyDescription
            std::int32_t m_nForcedRevealCount; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldFortuneForcedReveal, m_unID) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldFortuneForcedReveal, m_nForcedRevealCount) == 0x4);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldFortuneForcedReveal) == 0x8);
    };
};

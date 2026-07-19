#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"

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
        // Standard-layout class: false
        // Size: 0x4b0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicActivityEvent : public source2sdk::server::CLogicalEntity
        {
        public:
            std::int32_t m_nEventType; // 0x498            
            float m_flDuration; // 0x49c            
            CUtlSymbolLarge m_iszSourceEntityName; // 0x4a0            
            CEntityHandle m_hSource; // 0x4a8            
            uint8_t _pad04ac[0x4];
            
            // Datamap fields:
            // void InputFireEvent; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicActivityEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicActivityEvent) == 0x4b0);
    };
};

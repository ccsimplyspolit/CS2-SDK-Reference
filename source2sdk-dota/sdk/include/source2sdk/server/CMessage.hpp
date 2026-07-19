#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x4d0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CMessage : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_iszMessage; // 0x498            
            float m_MessageVolume; // 0x4a0            
            std::int32_t m_MessageAttenuation; // 0x4a4            
            float m_Radius; // 0x4a8            
            uint8_t _pad04ac[0x4]; // 0x4ac
            CGameSoundEventName m_sNoise; // 0x4b0            
            source2sdk::entity2::CEntityIOOutput m_OnShowMessage; // 0x4b8            
            
            // Datamap fields:
            // void InputShowMessage; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMessage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMessage) == 0x4d0);
    };
};

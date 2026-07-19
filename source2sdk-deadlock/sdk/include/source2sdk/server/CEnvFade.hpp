#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
        // Size: 0x4c8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Color m_fadeColor"
        #pragma pack(push, 1)
        class CEnvFade : public source2sdk::server::CLogicalEntity
        {
        public:
            // metadata: MNetworkEnable
            Color m_fadeColor; // 0x4a0            
            float m_Duration; // 0x4a4            
            float m_HoldDuration; // 0x4a8            
            uint8_t _pad04ac[0x4]; // 0x4ac
            source2sdk::entity2::CEntityIOOutput m_OnBeginFade; // 0x4b0            
            
            // Datamap fields:
            // void InputFade; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvFade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvFade) == 0x4c8);
    };
};

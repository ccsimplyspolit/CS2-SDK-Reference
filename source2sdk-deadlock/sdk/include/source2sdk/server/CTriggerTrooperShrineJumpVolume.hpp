#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0x8e8
        // Has VTable
        #pragma pack(push, 1)
        class CTriggerTrooperShrineJumpVolume : public source2sdk::server::CBaseTrigger
        {
        public:
            float m_flOuterRadius; // 0x8e0            
            float m_flInnerRadius; // 0x8e4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerTrooperShrineJumpVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerTrooperShrineJumpVolume) == 0x8e8);
    };
};

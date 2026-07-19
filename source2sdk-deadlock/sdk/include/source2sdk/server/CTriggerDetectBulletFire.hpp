#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
        // Size: 0x900
        // Has VTable
        #pragma pack(push, 1)
        class CTriggerDetectBulletFire : public source2sdk::server::CBaseTrigger
        {
        public:
            bool m_bPlayerFireOnly; // 0x8e0            
            uint8_t _pad08e1[0x7]; // 0x8e1
            source2sdk::entity2::CEntityIOOutput m_OnDetectedBulletFire; // 0x8e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerDetectBulletFire because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerDetectBulletFire) == 0x900);
    };
};

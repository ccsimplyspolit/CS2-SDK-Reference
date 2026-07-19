#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_Stunned.hpp"
#include "source2sdk/client/EKnockDownTypes.hpp"
#include "source2sdk/client/SatVolumeIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Knockdown : public source2sdk::client::CCitadel_Modifier_Stunned
        {
        public:
            QAngle m_angStunAngles; // 0xc8            
            source2sdk::client::EKnockDownTypes m_ePreferredKnockdownType; // 0xd4            
            bool m_bForceTakePreferred; // 0xd8            
            uint8_t _pad00d9[0x3]; // 0xd9
            source2sdk::entity2::GameTime_t m_flGetUpAnimTime; // 0xdc            
            bool m_bGetUpCamSeqStarted; // 0xe0            
            uint8_t _pad00e1[0x3]; // 0xe1
            float m_flOnGroundDuration; // 0xe4            
            source2sdk::client::SatVolumeIndex_t m_satIndex; // 0xe8            
            uint8_t _pad00ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Knockdown because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Knockdown) == 0xf0);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EKnockDownTypes.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_Stunned.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Knockdown : public source2sdk::server::CCitadel_Modifier_Stunned
        {
        public:
            QAngle m_angStunAngles; // 0xd8            
            source2sdk::client::EKnockDownTypes m_ePreferredKnockdownType; // 0xe4            
            bool m_bForceTakePreferred; // 0xe8            
            uint8_t _pad00e9[0x3]; // 0xe9
            source2sdk::entity2::GameTime_t m_flGetUpAnimTime; // 0xec            
            bool m_bGetUpCamSeqStarted; // 0xf0            
            uint8_t _pad00f1[0x3]; // 0xf1
            float m_flOnGroundDuration; // 0xf4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Knockdown because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Knockdown) == 0xf8);
    };
};

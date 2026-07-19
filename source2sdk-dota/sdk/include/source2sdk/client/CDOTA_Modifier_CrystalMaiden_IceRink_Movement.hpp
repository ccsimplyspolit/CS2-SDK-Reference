#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_CrystalMaiden_IceRink_Movement : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bHitFirstUpdate; // 0x1a58            
            uint8_t _pad1a59[0x3]; // 0x1a59
            float flMovementSpeed; // 0x1a5c            
            float m_flTurnBoostProgress; // 0x1a60            
            float m_flFacingTarget; // 0x1a64            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a68            
            source2sdk::entity2::GameTime_t m_flHitEndTime; // 0x1a6c            
            float hit_recover_time; // 0x1a70            
            Vector m_vDirection; // 0x1a74            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_CrystalMaiden_IceRink_Movement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_CrystalMaiden_IceRink_Movement) == 0x1a80);
    };
};

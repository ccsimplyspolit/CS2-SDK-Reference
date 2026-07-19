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
        // Size: 0x1ac0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_KeeperOfTheLight_Illuminate : public source2sdk::client::CDOTA_Buff
        {
        public:
            float range; // 0x1a58            
            float total_damage; // 0x1a5c            
            float radius; // 0x1a60            
            float max_channel_time; // 0x1a64            
            float speed; // 0x1a68            
            float channel_vision_radius; // 0x1a6c            
            float channel_vision_interval; // 0x1a70            
            float channel_vision_duration; // 0x1a74            
            float channel_vision_step; // 0x1a78            
            source2sdk::entity2::GameTime_t m_flLastChantTime; // 0x1a7c            
            VectorWS m_vNextVisionLocation; // 0x1a80            
            Vector m_vCastDirection; // 0x1a8c            
            VectorWS m_vCastLoc; // 0x1a98            
            QAngle m_qCastAngle; // 0x1aa4            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1ab0            
            bool m_bIsSpiritForm; // 0x1ab4            
            uint8_t _pad1ab5[0x3]; // 0x1ab5
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1ab8            
            uint8_t _pad1abc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Illuminate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_KeeperOfTheLight_Illuminate) == 0x1ac0);
    };
};

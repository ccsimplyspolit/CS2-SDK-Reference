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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_StormSpirit_StaticRemnantThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float static_remnant_radius; // 0x1a58            
            float static_remnant_damage_radius; // 0x1a5c            
            float static_remnant_damage; // 0x1a60            
            float static_remnant_delay; // 0x1a64            
            float static_remnant_travel_speed; // 0x1a68            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a6c            
            std::int32_t m_iSearchRadius; // 0x1a70            
            std::int32_t m_iDamageRadius; // 0x1a74            
            bool m_bDoesMove; // 0x1a78            
            bool m_bReachedTargetLocation; // 0x1a79            
            uint8_t _pad1a7a[0x2]; // 0x1a7a
            VectorWS m_vTargetLocation; // 0x1a7c            
            source2sdk::entity2::GameTime_t m_flCreateTime; // 0x1a88            
            source2sdk::entity2::GameTime_t m_flLastMoveTime; // 0x1a8c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_StormSpirit_StaticRemnantThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_StormSpirit_StaticRemnantThinker) == 0x1a90);
    };
};

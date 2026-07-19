#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_LootDrop_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bAutoPickup; // 0x1a58            
            bool m_bOnlyPlayerHeroPickup; // 0x1a59            
            bool m_bCreepHeroPickup; // 0x1a5a            
            bool m_bAutoUse; // 0x1a5b            
            bool m_bFlying; // 0x1a5c            
            bool m_bUseSpawnAnim; // 0x1a5d            
            bool m_bAutoTeleport; // 0x1a5e            
            uint8_t _pad1a5f[0x1]; // 0x1a5f
            source2sdk::entity2::GameTime_t m_flKnockbackStartTime; // 0x1a60            
            source2sdk::entity2::GameTime_t m_flKnockbackEndTime; // 0x1a64            
            float m_flKnockbackHeight; // 0x1a68            
            float m_flInitialHeight; // 0x1a6c            
            float m_flKnockbackDuration; // 0x1a70            
            float m_flEndHeight; // 0x1a74            
            VectorWS m_vStartPos; // 0x1a78            
            VectorWS m_vEndPos; // 0x1a84            
            float m_fPickupRadius; // 0x1a90            
            uint8_t _pad1a94[0x4]; // 0x1a94
            CUtlString m_strTransitionEffect; // 0x1a98            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_LootDrop_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_LootDrop_Thinker) == 0x1aa0);
    };
};

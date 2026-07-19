#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DragonKnight_DragonForm : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_movement_speed; // 0x1a58            
            std::int32_t bonus_attack_damage; // 0x1a5c            
            std::int32_t bonus_attack_range; // 0x1a60            
            std::int32_t magic_resistance; // 0x1a64            
            std::int32_t model_scale; // 0x1a68            
            std::int32_t iLevel; // 0x1a6c            
            std::int32_t m_iOriginalAttackCapabilities; // 0x1a70            
            std::int32_t attack_projectile_speed_bonus; // 0x1a74            
            std::int32_t flying_movement; // 0x1a78            
            uint8_t _pad1a7c[0x4]; // 0x1a7c
            CUtlSymbolLarge m_iszRangedAttackEffect; // 0x1a80            
            std::int32_t bonus_slow_resistance; // 0x1a88            
            std::int32_t bonus_ability_cast_range; // 0x1a8c            
            std::int32_t m_nAssetIndex; // 0x1a90            
            float ranged_splash_radius; // 0x1a94            
            float ranged_splash_damage_pct; // 0x1a98            
            float corrosive_duration; // 0x1a9c            
            float frost_duration; // 0x1aa0            
            source2sdk::client::ParticleIndex_t m_nAmbientParticleFX; // 0x1aa4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DragonKnight_DragonForm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DragonKnight_DragonForm) == 0x1aa8);
    };
};

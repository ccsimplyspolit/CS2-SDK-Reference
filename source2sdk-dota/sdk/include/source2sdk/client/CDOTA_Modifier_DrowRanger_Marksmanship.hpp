#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DrowRanger_Marksmanship : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t chance; // 0x1a58            
            source2sdk::client::ParticleIndex_t m_nFxIndex; // 0x1a5c            
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a60            
            // m_GlacialInFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_GlacialInFlightAttackRecords;
            char m_GlacialInFlightAttackRecords[0x18]; // 0x1a78            
            std::int32_t bonus_factor; // 0x1a90            
            std::int32_t disable_range; // 0x1a94            
            std::int32_t agility_range; // 0x1a98            
            std::int32_t bonus_damage; // 0x1a9c            
            std::int32_t split_count; // 0x1aa0            
            std::int32_t split_range; // 0x1aa4            
            bool m_bGlacialAttack; // 0x1aa8            
            uint8_t _pad1aa9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DrowRanger_Marksmanship because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DrowRanger_Marksmanship) == 0x1ab0);
    };
};

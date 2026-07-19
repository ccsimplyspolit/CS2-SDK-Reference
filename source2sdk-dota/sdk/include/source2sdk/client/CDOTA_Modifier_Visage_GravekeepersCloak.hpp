#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CDOTA_Modifier_Visage_GravekeepersCloak_Stack;
    };
};

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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Visage_GravekeepersCloak : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_reduction; // 0x1a58            
            std::int32_t max_layers; // 0x1a5c            
            float minimum_damage; // 0x1a60            
            float minimum_damage_familiars; // 0x1a64            
            std::int32_t recovery_time; // 0x1a68            
            float radius; // 0x1a6c            
            float max_damage_reduction; // 0x1a70            
            std::int32_t armor; // 0x1a74            
            source2sdk::client::ParticleIndex_t m_nFXIndex[4]; // 0x1a78            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x1a88            
            uint8_t _pad1a8c[0x4]; // 0x1a8c
            // m_vecStacks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTA_Modifier_Visage_GravekeepersCloak_Stack*> m_vecStacks;
            char m_vecStacks[0x18]; // 0x1a90            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_GravekeepersCloak because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Visage_GravekeepersCloak) == 0x1aa8);
    };
};

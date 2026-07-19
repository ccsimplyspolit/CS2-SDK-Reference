#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        class CDOTA_Modifier_Oracle_FalsePromise : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a58[0x30]; // 0x1a58
            bool m_bWaitingForInvulnerability; // 0x1a88            
            bool m_bDisableHealing; // 0x1a89            
            uint8_t _pad1a8a[0x2]; // 0x1a8a
            float m_flHealthOnCreated; // 0x1a8c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a90            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x1a94            
            float m_flRunningDmg; // 0x1a98            
            float m_flRunningHealth; // 0x1a9c            
            float m_flExpectedFinalHeal; // 0x1aa0            
            std::int32_t bonus_armor; // 0x1aa4            
            float heal_amp_pct; // 0x1aa8            
            uint8_t _pad1aac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Oracle_FalsePromise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Oracle_FalsePromise) == 0x1ab0);
    };
};

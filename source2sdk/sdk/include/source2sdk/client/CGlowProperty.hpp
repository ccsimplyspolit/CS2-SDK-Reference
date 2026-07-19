#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x58
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CGlowProperty
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNotSaved
            Vector m_fGlowColor; // 0x8            
            uint8_t _pad0014[0x1c]; // 0x14
            std::int32_t m_iGlowType; // 0x30            
            // metadata: MNotSaved
            std::int32_t m_iGlowTeam; // 0x34            
            // metadata: MNotSaved
            std::int32_t m_nGlowRange; // 0x38            
            // metadata: MNotSaved
            std::int32_t m_nGlowRangeMin; // 0x3c            
            // metadata: MNotSaved
            Color m_glowColorOverride; // 0x40            
            // metadata: MNotSaved
            bool m_bFlashing; // 0x44            
            uint8_t _pad0045[0x3]; // 0x45
            // metadata: MNotSaved
            float m_flGlowTime; // 0x48            
            // metadata: MNotSaved
            float m_flGlowStartTime; // 0x4c            
            bool m_bEligibleForScreenHighlight; // 0x50            
            // metadata: MNotSaved
            bool m_bGlowing; // 0x51            
            uint8_t _pad0052[0x6];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_fGlowColor) == 0x8);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_iGlowType) == 0x30);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_iGlowTeam) == 0x34);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_nGlowRange) == 0x38);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_nGlowRangeMin) == 0x3c);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_glowColorOverride) == 0x40);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_bFlashing) == 0x44);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_flGlowTime) == 0x48);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_flGlowStartTime) == 0x4c);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_bEligibleForScreenHighlight) == 0x50);
        static_assert(offsetof(source2sdk::client::CGlowProperty, m_bGlowing) == 0x51);
        
        static_assert(sizeof(source2sdk::client::CGlowProperty) == 0x58);
    };
};

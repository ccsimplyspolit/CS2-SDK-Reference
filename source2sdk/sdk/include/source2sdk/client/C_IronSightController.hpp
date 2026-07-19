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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xb0
        // Has VTable
        #pragma pack(push, 1)
        class C_IronSightController
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            bool m_bIronSightAvailable; // 0x10            
            uint8_t _pad0011[0x3]; // 0x11
            float m_flIronSightAmount; // 0x14            
            float m_flIronSightAmountGained; // 0x18            
            float m_flIronSightAmountBiased; // 0x1c            
            float m_flIronSightAmount_Interpolated; // 0x20            
            float m_flIronSightAmountGained_Interpolated; // 0x24            
            float m_flIronSightAmountBiased_Interpolated; // 0x28            
            float m_flInterpolationLastUpdated; // 0x2c            
            QAngle m_angDeltaAverage[8]; // 0x30            
            QAngle m_angViewLast; // 0x90            
            Vector2D m_vecDotCoords; // 0x9c            
            float m_flFiringInaccuracyExtraWidthMultiplier; // 0xa4            
            float m_flSpeedRatio; // 0xa8            
            uint8_t _pad00ac[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_IronSightController, m_bIronSightAvailable) == 0x10);
        static_assert(offsetof(source2sdk::client::C_IronSightController, m_flIronSightAmount) == 0x14);
        static_assert(offsetof(source2sdk::client::C_IronSightController, m_flIronSightAmountGained) == 0x18);
        static_assert(offsetof(source2sdk::client::C_IronSightController, m_flIronSightAmountBiased) == 0x1c);
        static_assert(offsetof(source2sdk::client::C_IronSightController, m_flIronSightAmount_Interpolated) == 0x20);
        static_assert(offsetof(source2sdk::client::C_IronSightController, m_flIronSightAmountGained_Interpolated) == 0x24);
        static_assert(offsetof(source2sdk::client::C_IronSightController, m_flIronSightAmountBiased_Interpolated) == 0x28);
        static_assert(offsetof(source2sdk::client::C_IronSightController, m_flInterpolationLastUpdated) == 0x2c);
        static_assert(offsetof(source2sdk::client::C_IronSightController, m_angDeltaAverage) == 0x30);
        static_assert(offsetof(source2sdk::client::C_IronSightController, m_angViewLast) == 0x90);
        static_assert(offsetof(source2sdk::client::C_IronSightController, m_vecDotCoords) == 0x9c);
        static_assert(offsetof(source2sdk::client::C_IronSightController, m_flFiringInaccuracyExtraWidthMultiplier) == 0xa4);
        static_assert(offsetof(source2sdk::client::C_IronSightController, m_flSpeedRatio) == 0xa8);
        
        static_assert(sizeof(source2sdk::client::C_IronSightController) == 0xb0);
    };
};

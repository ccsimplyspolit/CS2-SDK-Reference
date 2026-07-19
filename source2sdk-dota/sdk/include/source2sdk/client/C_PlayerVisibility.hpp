#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Standard-layout class: false
        // Size: 0x620
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_PlayerVisibility : public source2sdk::client::C_BaseEntity
        {
        public:
            float m_flVisibilityStrength; // 0x5f0            
            float m_flFogDistanceMultiplier; // 0x5f4            
            float m_flFogMaxDensityMultiplier; // 0x5f8            
            float m_flFadeTime; // 0x5fc            
            bool m_bStartDisabled; // 0x600            
            bool m_bIsEnabled; // 0x601            
            uint8_t _pad0602[0x1e];
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
            // float InputSetPlayerVisibilityStrength; // 0x0
            // float InputSetPlayerFogDistanceMultiplier; // 0x0
            // float InputSetPlayerFogMaxDensityMultiplier; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PlayerVisibility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PlayerVisibility) == 0x620);
    };
};

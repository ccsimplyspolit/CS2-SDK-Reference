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
        // Size: 0x630
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_PlayerVisibility : public source2sdk::client::C_BaseEntity
        {
        public:
            float m_flVisibilityStrength; // 0x600            
            float m_flFogDistanceMultiplier; // 0x604            
            float m_flFogMaxDensityMultiplier; // 0x608            
            float m_flFadeTime; // 0x60c            
            bool m_bStartDisabled; // 0x610            
            bool m_bIsEnabled; // 0x611            
            uint8_t _pad0612[0x1e];
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
            // float InputSetPlayerVisibilityStrength; // 0x0
            // float InputSetPlayerFogDistanceMultiplier; // 0x0
            // float InputSetPlayerFogMaxDensityMultiplier; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PlayerVisibility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PlayerVisibility) == 0x630);
    };
};

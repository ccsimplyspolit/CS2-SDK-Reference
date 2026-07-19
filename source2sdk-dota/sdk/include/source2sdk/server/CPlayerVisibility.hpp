#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4b0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPlayerVisibility : public source2sdk::server::CBaseEntity
        {
        public:
            float m_flVisibilityStrength; // 0x498            
            float m_flFogDistanceMultiplier; // 0x49c            
            float m_flFogMaxDensityMultiplier; // 0x4a0            
            float m_flFadeTime; // 0x4a4            
            bool m_bStartDisabled; // 0x4a8            
            bool m_bIsEnabled; // 0x4a9            
            uint8_t _pad04aa[0x6];
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
            // float InputSetPlayerVisibilityStrength; // 0x0
            // float InputSetPlayerFogDistanceMultiplier; // 0x0
            // float InputSetPlayerFogMaxDensityMultiplier; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayerVisibility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlayerVisibility) == 0x4b0);
    };
};

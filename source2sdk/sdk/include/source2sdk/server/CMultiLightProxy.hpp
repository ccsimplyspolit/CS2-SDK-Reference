#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CLightEntity;
    };
};

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
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CMultiLightProxy : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_iszLightNameFilter; // 0x4a8            
            CUtlSymbolLarge m_iszLightClassFilter; // 0x4b0            
            float m_flLightRadiusFilter; // 0x4b8            
            float m_flBrightnessDelta; // 0x4bc            
            bool m_bPerformScreenFade; // 0x4c0            
            uint8_t _pad04c1[0x3]; // 0x4c1
            float m_flTargetBrightnessMultiplier; // 0x4c4            
            float m_flCurrentBrightnessMultiplier; // 0x4c8            
            uint8_t _pad04cc[0x4]; // 0x4cc
            // m_vecLights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CLightEntity>> m_vecLights;
            char m_vecLights[0x18]; // 0x4d0            
            
            // Datamap fields:
            // float InputFlickerLights; // 0x0
            // float InputDisableLights; // 0x0
            // float InputSetLightsBrightnessMultiplier; // 0x0
            // float InputSetBrightnessDelta; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMultiLightProxy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMultiLightProxy) == 0x4e8);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x7d8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CEnvSky : public source2sdk::server::CBaseModelEntity
        {
        public:
            // m_hSkyMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial;
            char m_hSkyMaterial[0x8]; // 0x778            
            // m_hSkyMaterialLightingOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterialLightingOnly;
            char m_hSkyMaterialLightingOnly[0x8]; // 0x780            
            bool m_bStartDisabled; // 0x788            
            Color m_vTintColor; // 0x789            
            Color m_vTintColorLightingOnly; // 0x78d            
            uint8_t _pad0791[0x3]; // 0x791
            float m_flBrightnessScale; // 0x794            
            std::int32_t m_nFogType; // 0x798            
            float m_flFogMinStart; // 0x79c            
            float m_flFogMinEnd; // 0x7a0            
            float m_flFogMaxStart; // 0x7a4            
            float m_flFogMaxEnd; // 0x7a8            
            bool m_bEnabled; // 0x7ac            
            uint8_t _pad07ad[0x2b];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvSky because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvSky) == 0x7d8);
    };
};

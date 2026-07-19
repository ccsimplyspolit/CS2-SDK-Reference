#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

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
        // Size: 0x1010
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_EnvSky : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // m_hSkyMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial;
            char m_hSkyMaterial[0x8]; // 0xfb0            
            // m_hSkyMaterialLightingOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterialLightingOnly;
            char m_hSkyMaterialLightingOnly[0x8]; // 0xfb8            
            bool m_bStartDisabled; // 0xfc0            
            Color m_vTintColor; // 0xfc1            
            Color m_vTintColorLightingOnly; // 0xfc5            
            uint8_t _pad0fc9[0x3]; // 0xfc9
            float m_flBrightnessScale; // 0xfcc            
            std::int32_t m_nFogType; // 0xfd0            
            float m_flFogMinStart; // 0xfd4            
            float m_flFogMinEnd; // 0xfd8            
            float m_flFogMaxStart; // 0xfdc            
            float m_flFogMaxEnd; // 0xfe0            
            bool m_bEnabled; // 0xfe4            
            uint8_t _pad0fe5[0x2b];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvSky because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvSky) == 0x1010);
    };
};

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
        // Size: 0x638
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_EnvWindVolume : public source2sdk::client::C_BaseEntity
        {
        public:
            bool m_bActive; // 0x600            
            uint8_t _pad0601[0x3]; // 0x601
            Vector m_vBoxMins; // 0x604            
            Vector m_vBoxMaxs; // 0x610            
            bool m_bStartDisabled; // 0x61c            
            uint8_t _pad061d[0x3]; // 0x61d
            std::int32_t m_nShape; // 0x620            
            float m_fWindSpeedMultiplier; // 0x624            
            float m_fWindTurbulenceMultiplier; // 0x628            
            float m_fWindSpeedVariationMultiplier; // 0x62c            
            float m_fWindDirectionVariationMultiplier; // 0x630            
            uint8_t _pad0634[0x4];
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvWindVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvWindVolume) == 0x638);
    };
};

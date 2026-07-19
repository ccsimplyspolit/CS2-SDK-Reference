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
        // Size: 0x4d0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CEnvWindVolume : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bActive; // 0x498            
            uint8_t _pad0499[0x3]; // 0x499
            Vector m_vBoxMins; // 0x49c            
            Vector m_vBoxMaxs; // 0x4a8            
            bool m_bStartDisabled; // 0x4b4            
            uint8_t _pad04b5[0x3]; // 0x4b5
            std::int32_t m_nShape; // 0x4b8            
            float m_fWindSpeedMultiplier; // 0x4bc            
            float m_fWindTurbulenceMultiplier; // 0x4c0            
            float m_fWindSpeedVariationMultiplier; // 0x4c4            
            float m_fWindDirectionVariationMultiplier; // 0x4c8            
            uint8_t _pad04cc[0x4];
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvWindVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvWindVolume) == 0x4d0);
    };
};

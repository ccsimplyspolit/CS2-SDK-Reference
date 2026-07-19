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
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CTonemapController2 : public source2sdk::server::CBaseEntity
        {
        public:
            float m_flAutoExposureMin; // 0x498            
            float m_flAutoExposureMax; // 0x49c            
            float m_flExposureAdaptationSpeedUp; // 0x4a0            
            float m_flExposureAdaptationSpeedDown; // 0x4a4            
            float m_flTonemapEVSmoothingRange; // 0x4a8            
            uint8_t _pad04ac[0x4];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // float InputSetMinExposure; // 0x0
            // float InputSetMaxExposure; // 0x0
            // float InputSetExposureAdaptationSpeedUp; // 0x0
            // float InputSetExposureAdaptationSpeedDown; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTonemapController2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTonemapController2) == 0x4b0);
    };
};

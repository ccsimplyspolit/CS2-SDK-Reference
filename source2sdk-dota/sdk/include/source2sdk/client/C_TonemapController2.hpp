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
        // Size: 0x608
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_TonemapController2 : public source2sdk::client::C_BaseEntity
        {
        public:
            float m_flAutoExposureMin; // 0x5f0            
            float m_flAutoExposureMax; // 0x5f4            
            float m_flExposureAdaptationSpeedUp; // 0x5f8            
            float m_flExposureAdaptationSpeedDown; // 0x5fc            
            float m_flTonemapEVSmoothingRange; // 0x600            
            uint8_t _pad0604[0x4];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // float InputSetMinExposure; // 0x0
            // float InputSetMaxExposure; // 0x0
            // float InputSetExposureAdaptationSpeedUp; // 0x0
            // float InputSetExposureAdaptationSpeedDown; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_TonemapController2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_TonemapController2) == 0x608);
    };
};

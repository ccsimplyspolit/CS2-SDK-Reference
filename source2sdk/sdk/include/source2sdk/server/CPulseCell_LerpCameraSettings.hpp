#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PointCameraSettings_t.hpp"
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseLerp.hpp"

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
        // Size: 0x148
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulseCell_LerpCameraSettings : public source2sdk::pulse_runtime_lib::CPulseCell_BaseLerp
        {
        public:
            float m_flSeconds; // 0x120            
            source2sdk::client::PointCameraSettings_t m_Start; // 0x124            
            source2sdk::client::PointCameraSettings_t m_End; // 0x134            
            uint8_t _pad0144[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_LerpCameraSettings because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPulseCell_LerpCameraSettings) == 0x148);
    };
};

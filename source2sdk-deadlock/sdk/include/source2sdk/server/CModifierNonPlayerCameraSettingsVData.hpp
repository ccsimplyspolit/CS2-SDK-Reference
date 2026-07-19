#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x760
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierNonPlayerCameraSettingsVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            float m_flCameraSideOffset; // 0x750            
            float m_flCameraBackOffset; // 0x754            
            float m_flCameraHeightStanding; // 0x758            
            uint8_t _pad075c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierNonPlayerCameraSettingsVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifierNonPlayerCameraSettingsVData) == 0x760);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
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
        // Size: 0x7e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_ZiplineBoostVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flRampUpTime; // 0x750            
            float m_flPercentageSpeedIncreaseRampFrom; // 0x754            
            float m_flPercentageSpeedIncreaseRampTo; // 0x758            
            uint8_t _pad075c[0x4]; // 0x75c
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceStartBoost; // 0x760            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ZiplineBoostVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ZiplineBoostVData) == 0x7e8);
    };
};

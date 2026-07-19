#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/CSosGroupActionSchema.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x20
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Occlusion Info"
        #pragma pack(push, 1)
        class CSosGroupActionOcclusionSchema : public source2sdk::soundsystem::CSosGroupActionSchema
        {
        public:
            // metadata: MPropertyFriendlyName "Calculation interval ( seconds )."
            float m_flCalculationInterval; // 0x8            
            // metadata: MPropertyFriendlyName "Occlusion radius."
            float m_flRadius; // 0xc            
            // metadata: MPropertyFriendlyName "Occlusion scale."
            float m_flOcclusionScale; // 0x10            
            // metadata: MPropertyFriendlyName "Occlusion min."
            float m_flOcclusionMin; // 0x14            
            // metadata: MPropertyFriendlyName "Occlusion max."
            float m_flOcclusionMax; // 0x18            
            // metadata: MPropertyFriendlyName "Test depth."
            float m_flTestDepth; // 0x1c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSosGroupActionOcclusionSchema because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupActionOcclusionSchema) == 0x20);
    };
};

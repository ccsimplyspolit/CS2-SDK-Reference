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
        // Size: 0x18
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Soundevent Count"
        #pragma pack(push, 1)
        class CSosGroupActionSoundeventCountSchema : public source2sdk::soundsystem::CSosGroupActionSchema
        {
        public:
            // metadata: MPropertyFriendlyName "Exclude Stopped Sounds from Count"
            bool m_bExcludeStoppedSounds; // 0x8            
            uint8_t _pad0009[0x7]; // 0x9
            // metadata: MPropertyFriendlyName "Result Current Count"
            CUtlString m_strCountKeyName; // 0x10            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSosGroupActionSoundeventCountSchema because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupActionSoundeventCountSchema) == 0x18);
    };
};

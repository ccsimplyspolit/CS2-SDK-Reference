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
        // Size: 0x40
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Soundevent Min/Max Values"
        #pragma pack(push, 1)
        class CSosGroupActionSoundeventMinMaxValuesSchema : public source2sdk::soundsystem::CSosGroupActionSchema
        {
        public:
            // metadata: MPropertyFriendlyName "Public field name to query."
            CUtlString m_strQueryPublicFieldName; // 0x8            
            // metadata: MPropertyFriendlyName "Public field 'delay' name."
            CUtlString m_strDelayPublicFieldName; // 0x10            
            // metadata: MPropertyFriendlyName "Exclude stopped sounds from evaluation"
            bool m_bExcludeStoppedSounds; // 0x18            
            // metadata: MPropertyFriendlyName "Exclude delayed sounds from evaluation"
            bool m_bExcludeDelayedSounds; // 0x19            
            // metadata: MPropertyFriendlyName "Exclude sounds from evaluation less than or equal to a min value threshold."
            bool m_bExcludeSoundsBelowThreshold; // 0x1a            
            uint8_t _pad001b[0x1]; // 0x1b
            // metadata: MPropertyFriendlyName "The minimum threshold value to exclude sounds."
            float m_flExcludeSoundsMinThresholdValue; // 0x1c            
            // metadata: MPropertyFriendlyName "Exclude sounds from evaluation greater than or equal to a max value threshold."
            bool m_bExcludSoundsAboveThreshold; // 0x20            
            uint8_t _pad0021[0x3]; // 0x21
            // metadata: MPropertyFriendlyName "The maximum threshold value to exclude sounds."
            float m_flExcludeSoundsMaxThresholdValue; // 0x24            
            // metadata: MPropertyFriendlyName "Min value property name"
            CUtlString m_strMinValueName; // 0x28            
            // metadata: MPropertyFriendlyName "Max value property name"
            CUtlString m_strMaxValueName; // 0x30            
            uint8_t _pad0038[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSosGroupActionSoundeventMinMaxValuesSchema because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupActionSoundeventMinMaxValuesSchema) == 0x40);
    };
};

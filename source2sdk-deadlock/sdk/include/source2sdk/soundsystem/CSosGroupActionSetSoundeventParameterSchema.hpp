#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/CSosGroupActionSchema.hpp"
#include "source2sdk/soundsystem/SosActionSetParamSortType_t.hpp"

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
        // Size: 0x28
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Set Sound Event Parameter"
        #pragma pack(push, 1)
        class CSosGroupActionSetSoundeventParameterSchema : public source2sdk::soundsystem::CSosGroupActionSchema
        {
        public:
            std::int32_t m_nMaxCount; // 0x8            
            float m_flMinValue; // 0xc            
            float m_flMaxValue; // 0x10            
            uint8_t _pad0014[0x4]; // 0x14
            // metadata: MPropertyFriendlyName "Parameter Name"
            CUtlString m_opvarName; // 0x18            
            source2sdk::soundsystem::SosActionSetParamSortType_t m_nSortType; // 0x20            
            uint8_t _pad0024[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSosGroupActionSetSoundeventParameterSchema because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupActionSetSoundeventParameterSchema) == 0x28);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/CSndSeqInstBaseSchema.hpp"

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
        // static metadata: MPropertyFriendlyName "SoundEvent on Start"
        #pragma pack(push, 1)
        class CSndSeqInstSndEvtSchema : public source2sdk::soundsystem::CSndSeqInstBaseSchema
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::soundsystem::CSndSeqInstSndEvtSchema) == 0x20);
    };
};

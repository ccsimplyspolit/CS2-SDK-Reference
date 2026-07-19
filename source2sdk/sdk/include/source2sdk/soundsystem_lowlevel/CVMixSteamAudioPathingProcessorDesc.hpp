#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/CVMixBaseProcessorDesc.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_lowlevel
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x20
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVMixSteamAudioPathingProcessorDesc : public source2sdk::soundsystem_lowlevel::CVMixBaseProcessorDesc
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixSteamAudioPathingProcessorDesc) == 0x20);
    };
};

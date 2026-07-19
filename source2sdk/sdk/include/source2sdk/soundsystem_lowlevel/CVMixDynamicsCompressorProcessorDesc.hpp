#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/CVMixBaseProcessorDesc.hpp"
#include "source2sdk/soundsystem_lowlevel/VMixDynamicsCompressorDesc_t.hpp"

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
        // Size: 0x48
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVMixDynamicsCompressorProcessorDesc : public source2sdk::soundsystem_lowlevel::CVMixBaseProcessorDesc
        {
        public:
            source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t m_desc; // 0x20            
            uint8_t _pad0044[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVMixDynamicsCompressorProcessorDesc because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixDynamicsCompressorProcessorDesc) == 0x48);
    };
};

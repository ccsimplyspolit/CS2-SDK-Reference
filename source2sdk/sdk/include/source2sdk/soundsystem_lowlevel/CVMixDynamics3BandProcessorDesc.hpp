#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/CVMixBaseProcessorDesc.hpp"
#include "source2sdk/soundsystem_lowlevel/VMixDynamics3BandDesc_t.hpp"

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
        // Size: 0xb0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVMixDynamics3BandProcessorDesc : public source2sdk::soundsystem_lowlevel::CVMixBaseProcessorDesc
        {
        public:
            source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t m_desc; // 0x20            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVMixDynamics3BandProcessorDesc because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixDynamics3BandProcessorDesc) == 0xb0);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/CVMixBaseProcessorDesc.hpp"
#include "source2sdk/soundsystem_lowlevel/VMixAutoFilterDesc_t.hpp"

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
        // Size: 0x50
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVMixAutoFilterProcessorDesc : public source2sdk::soundsystem_lowlevel::CVMixBaseProcessorDesc
        {
        public:
            source2sdk::soundsystem_lowlevel::VMixAutoFilterDesc_t m_desc; // 0x20            
            uint8_t _pad004c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVMixAutoFilterProcessorDesc because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixAutoFilterProcessorDesc) == 0x50);
    };
};

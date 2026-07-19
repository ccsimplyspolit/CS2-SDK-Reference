#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/CVMixInputBase.hpp"

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
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVMixNameInputMeter : public source2sdk::soundsystem_lowlevel::CVMixInputBase
        {
        public:
            std::int32_t m_nValueIndex; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVMixNameInputMeter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixNameInputMeter) == 0x18);
    };
};

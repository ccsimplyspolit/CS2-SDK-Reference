#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x10
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVMixAutomaticControlInput
        {
        public:
            CUtlString m_name; // 0x0            
            std::int32_t m_nControlInputIndex; // 0x8            
            bool m_bIsTrackSend; // 0xc            
            bool m_bIsStackVar; // 0xd            
            uint8_t _pad000e[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixAutomaticControlInput, m_name) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixAutomaticControlInput, m_nControlInputIndex) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixAutomaticControlInput, m_bIsTrackSend) == 0xc);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixAutomaticControlInput, m_bIsStackVar) == 0xd);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixAutomaticControlInput) == 0x10);
    };
};

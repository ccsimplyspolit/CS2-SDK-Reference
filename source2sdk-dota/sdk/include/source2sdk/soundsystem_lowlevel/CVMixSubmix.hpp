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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x40
        #pragma pack(push, 1)
        class CVMixSubmix
        {
        public:
            CUtlString m_name; // 0x0            
            CUtlString m_sendOperator; // 0x8            
            CUtlString m_SendNames[4]; // 0x10            
            std::uint32_t m_nSoloNameHash; // 0x30            
            std::int32_t m_nChannels; // 0x34            
            std::int32_t m_nMixDownRule; // 0x38            
            uint8_t _pad003c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixSubmix, m_name) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixSubmix, m_sendOperator) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixSubmix, m_SendNames) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixSubmix, m_nSoloNameHash) == 0x30);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixSubmix, m_nChannels) == 0x34);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixSubmix, m_nMixDownRule) == 0x38);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixSubmix) == 0x40);
    };
};

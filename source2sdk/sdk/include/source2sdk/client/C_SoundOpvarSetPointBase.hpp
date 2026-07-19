#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x620
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_SoundOpvarSetPointBase : public source2sdk::client::C_BaseEntity
        {
        public:
            CUtlSymbolLarge m_iszStackName; // 0x600            
            CUtlSymbolLarge m_iszOperatorName; // 0x608            
            CUtlSymbolLarge m_iszOpvarName; // 0x610            
            std::int32_t m_iOpvarIndex; // 0x618            
            bool m_bUseAutoCompare; // 0x61c            
            bool m_bFastRefresh; // 0x61d            
            uint8_t _pad061e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SoundOpvarSetPointBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SoundOpvarSetPointBase) == 0x620);
    };
};

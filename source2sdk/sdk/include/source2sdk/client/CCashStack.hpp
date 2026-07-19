#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"

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
        // Size: 0xfb8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CCashStack : public source2sdk::client::C_BaseModelEntity
        {
        public:
            std::int32_t m_nCashStackValue; // 0xfb0            
            uint8_t _pad0fb4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCashStack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCashStack) == 0xfb8);
    };
};

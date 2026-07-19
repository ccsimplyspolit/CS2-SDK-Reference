#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x778
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CCashStack : public source2sdk::server::CBaseModelEntity
        {
        public:
            std::int32_t m_nCashStackValue; // 0x770            
            uint8_t _pad0774[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCashStack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCashStack) == 0x778);
    };
};

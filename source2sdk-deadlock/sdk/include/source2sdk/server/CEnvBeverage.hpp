#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x4a8
        // Has VTable
        #pragma pack(push, 1)
        class CEnvBeverage : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_CanInDispenser; // 0x4a0            
            uint8_t _pad04a1[0x3]; // 0x4a1
            std::int32_t m_nBeverageType; // 0x4a4            
            
            // Datamap fields:
            // void InputActivate; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvBeverage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvBeverage) == 0x4a8);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_RespawnCredit : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bActivated; // 0xd0            
            bool m_bSpokeAboutToExpire; // 0xd1            
            uint8_t _pad00d2[0x2]; // 0xd2
            std::int32_t m_iMessageCount; // 0xd4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_RespawnCredit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_RespawnCredit) == 0xd8);
    };
};

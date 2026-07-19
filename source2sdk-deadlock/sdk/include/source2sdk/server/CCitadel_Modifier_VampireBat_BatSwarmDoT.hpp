#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x258
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_VampireBat_BatSwarmDoT : public source2sdk::server::CCitadelModifier
        {
        public:
            source2sdk::entity2::GameTime_t m_flLastTickTime; // 0xd0            
            uint8_t _pad00d4[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_VampireBat_BatSwarmDoT because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_VampireBat_BatSwarmDoT) == 0x258);
    };
};

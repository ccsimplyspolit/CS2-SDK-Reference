#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ModelChange_t.hpp"
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
        // Size: 0x288
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Familiar_Clone : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0xc8]; // 0xd0
            std::int32_t m_nCopiedHeroID; // 0x198            
            uint8_t _pad019c[0x4]; // 0x19c
            source2sdk::client::ModelChange_t m_ModelChange; // 0x1a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Familiar_Clone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Familiar_Clone) == 0x288);
    };
};

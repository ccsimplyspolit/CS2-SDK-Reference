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
        // Size: 0x1c0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_CopyUlt : public source2sdk::server::CCitadelModifier
        {
        public:
            std::int32_t m_nCopiedHeroID; // 0xd0            
            uint8_t _pad00d4[0x4]; // 0xd4
            source2sdk::client::ModelChange_t m_ModelChange; // 0xd8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_CopyUlt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_CopyUlt) == 0x1c0);
    };
};

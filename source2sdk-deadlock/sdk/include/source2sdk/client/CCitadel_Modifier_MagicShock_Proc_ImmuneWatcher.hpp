#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x148
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_MagicShock_Proc_ImmuneWatcher : public source2sdk::client::CCitadelModifier
        {
        public:
            std::uint64_t m_iAbilityID; // 0xc0            
            uint8_t _pad00c8[0x80];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_MagicShock_Proc_ImmuneWatcher because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_MagicShock_Proc_ImmuneWatcher) == 0x148);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x12f0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_ThrowSand : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x100]; // 0x11d8
            // m_vHitEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vHitEnts;
            char m_vHitEnts[0x18]; // 0x12d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ThrowSand because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_ThrowSand) == 0x12f0);
    };
};

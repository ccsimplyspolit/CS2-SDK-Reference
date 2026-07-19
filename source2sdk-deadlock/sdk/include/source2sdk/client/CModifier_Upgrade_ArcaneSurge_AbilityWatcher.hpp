#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelBaseAbility;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x2c8
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_Upgrade_ArcaneSurge_AbilityWatcher : public source2sdk::client::CCitadelModifier
        {
        public:
            // m_hBuffedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelBaseAbility> m_hBuffedAbility;
            char m_hBuffedAbility[0x4]; // 0xc0            
            bool m_bEnabled; // 0xc4            
            uint8_t _pad00c5[0x203];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Upgrade_ArcaneSurge_AbilityWatcher because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifier_Upgrade_ArcaneSurge_AbilityWatcher) == 0x2c8);
    };
};

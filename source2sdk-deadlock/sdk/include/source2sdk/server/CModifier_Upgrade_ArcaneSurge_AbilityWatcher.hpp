#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelBaseAbility;
    };
};

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
        // Size: 0x2d8
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_Upgrade_ArcaneSurge_AbilityWatcher : public source2sdk::server::CCitadelModifier
        {
        public:
            // m_hBuffedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hBuffedAbility;
            char m_hBuffedAbility[0x4]; // 0xd0            
            bool m_bEnabled; // 0xd4            
            uint8_t _pad00d5[0x203];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Upgrade_ArcaneSurge_AbilityWatcher because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_Upgrade_ArcaneSurge_AbilityWatcher) == 0x2d8);
    };
};

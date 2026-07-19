#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        class CModifier_Upgrade_ArcaneSurge : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x200]; // 0xd0
            // m_hExecutedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hExecutedAbility;
            char m_hExecutedAbility[0x4]; // 0x2d0            
            source2sdk::entity2::GameTime_t m_tNextAbilityTriggerWindow; // 0x2d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Upgrade_ArcaneSurge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_Upgrade_ArcaneSurge) == 0x2d8);
    };
};

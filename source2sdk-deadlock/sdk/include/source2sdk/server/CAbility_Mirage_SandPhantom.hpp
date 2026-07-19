#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x1090
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bHasVictims"
        #pragma pack(push, 1)
        class CAbility_Mirage_SandPhantom : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bHasVictims; // 0xf70            
            uint8_t _pad0f71[0x7]; // 0xf71
            // m_vecVictimModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CModifierHandleTyped<source2sdk::server::CCitadelModifier>> m_vecVictimModifiers;
            char m_vecVictimModifiers[0x18]; // 0xf78            
            uint8_t _pad0f90[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Mirage_SandPhantom because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Mirage_SandPhantom) == 0x1090);
    };
};

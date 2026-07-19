#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"

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
        // Size: 0x12f8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bHasVictims"
        #pragma pack(push, 1)
        class CAbility_Mirage_SandPhantom : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bHasVictims; // 0x11d8            
            uint8_t _pad11d9[0x7]; // 0x11d9
            // m_vecVictimModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CModifierHandleTyped<source2sdk::client::CCitadelModifier>> m_vecVictimModifiers;
            char m_vecVictimModifiers[0x18]; // 0x11e0            
            uint8_t _pad11f8[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Mirage_SandPhantom because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Mirage_SandPhantom) == 0x12f8);
    };
};

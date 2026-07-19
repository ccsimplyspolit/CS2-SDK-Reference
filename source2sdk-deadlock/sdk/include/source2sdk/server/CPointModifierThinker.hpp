#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
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
        // Size: 0x4c0
        // Has VTable
        #pragma pack(push, 1)
        class CPointModifierThinker : public source2sdk::server::CBaseEntity
        {
        public:
            // m_hModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_hModifier;
            char m_hModifier[0x18]; // 0x4a0            
            bool m_bSendToClients; // 0x4b8            
            uint8_t _pad04b9[0x7];
            
            // Datamap fields:
            // void CPointModifierThinkerOnModifierLost; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointModifierThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointModifierThinker) == 0x4c0);
    };
};

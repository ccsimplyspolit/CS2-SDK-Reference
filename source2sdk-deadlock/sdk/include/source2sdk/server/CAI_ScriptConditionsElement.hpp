#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSimTimer.hpp"
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
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x1c
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CAI_ScriptConditionsElement
        {
        public:
            // m_hActor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActor;
            char m_hActor[0x4]; // 0x0            
            source2sdk::client::CSimTimer m_Timer; // 0x4            
            source2sdk::client::CSimTimer m_Timeout; // 0x10            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_ScriptConditionsElement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_ScriptConditionsElement) == 0x1c);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CModifierHandleBase.hpp"

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
        // Standard-layout class: true
        // Size: 0x18
        #pragma pack(push, 1)
        struct CBaseAnimGraph_ModifierHandleVector_t
        {
        public:
            // m_ModifierHandles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CModifierHandleBase> m_ModifierHandles;
            char m_ModifierHandles[0x18]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CBaseAnimGraph_ModifierHandleVector_t, m_ModifierHandles) == 0x0);
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraph_ModifierHandleVector_t) == 0x18);
    };
};

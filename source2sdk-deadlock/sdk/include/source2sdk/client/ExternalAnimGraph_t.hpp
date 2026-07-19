#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ExternalAnimGraphHandle_t.hpp"
#include "source2sdk/client/ExternalAnimGraphInactiveBehavior_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBaseAnimGraph;
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
        // Standard-layout class: true
        // Size: 0x38
        #pragma pack(push, 1)
        struct ExternalAnimGraph_t
        {
        public:
            source2sdk::client::ExternalAnimGraphHandle_t m_hExtGraphHandle; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            CGlobalSymbol m_sExternalGraphSlotID; // 0x8            
            // m_hGraphDefinition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandleCopyable<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_hGraphDefinition;
            char m_hGraphDefinition[0x8]; // 0x10            
            // m_hExternalGraphOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBaseAnimGraph> m_hExternalGraphOwner;
            char m_hExternalGraphOwner[0x4]; // 0x18            
            uint8_t _pad001c[0x14]; // 0x1c
            source2sdk::client::ExternalAnimGraphInactiveBehavior_t m_nInactiveBehavior; // 0x30            
            uint8_t _pad0031[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ExternalAnimGraph_t, m_hExtGraphHandle) == 0x0);
        static_assert(offsetof(source2sdk::client::ExternalAnimGraph_t, m_sExternalGraphSlotID) == 0x8);
        static_assert(offsetof(source2sdk::client::ExternalAnimGraph_t, m_hGraphDefinition) == 0x10);
        static_assert(offsetof(source2sdk::client::ExternalAnimGraph_t, m_hExternalGraphOwner) == 0x18);
        static_assert(offsetof(source2sdk::client::ExternalAnimGraph_t, m_nInactiveBehavior) == 0x30);
        
        static_assert(sizeof(source2sdk::client::ExternalAnimGraph_t) == 0x38);
    };
};

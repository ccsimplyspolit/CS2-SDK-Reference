#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x390
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ChronoSwap_BubbleMove : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bOtherIsInFrontAtStart; // 0xd0            
            uint8_t _pad00d1[0x3]; // 0xd1
            Vector m_vOtherToDest; // 0xd4            
            VectorWS m_vStart; // 0xe0            
            VectorWS m_vDest; // 0xec            
            // m_hOther has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOther;
            char m_hOther[0x4]; // 0xf8            
            VectorWS m_vLastSafePos; // 0xfc            
            bool m_bDoFinalTeleport; // 0x108            
            uint8_t _pad0109[0x3]; // 0x109
            source2sdk::client::ParticleIndex_t m_nBeamIndex; // 0x10c            
            uint8_t _pad0110[0x280];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ChronoSwap_BubbleMove because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ChronoSwap_BubbleMove) == 0x390);
    };
};

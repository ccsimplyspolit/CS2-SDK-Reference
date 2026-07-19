#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0x380
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ChronoSwap_BubbleMove : public source2sdk::client::CCitadelModifier
        {
        public:
            bool m_bOtherIsInFrontAtStart; // 0xc0            
            uint8_t _pad00c1[0x3]; // 0xc1
            Vector m_vOtherToDest; // 0xc4            
            VectorWS m_vStart; // 0xd0            
            VectorWS m_vDest; // 0xdc            
            // m_hOther has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOther;
            char m_hOther[0x4]; // 0xe8            
            VectorWS m_vLastSafePos; // 0xec            
            bool m_bDoFinalTeleport; // 0xf8            
            uint8_t _pad00f9[0x3]; // 0xf9
            source2sdk::client::ParticleIndex_t m_nBeamIndex; // 0xfc            
            uint8_t _pad0100[0x280];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ChronoSwap_BubbleMove because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_ChronoSwap_BubbleMove) == 0x380);
    };
};

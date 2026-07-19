#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x3b0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ChainLightningEffect : public source2sdk::server::CCitadelModifier
        {
        public:
            std::int32_t m_nChainCount; // 0xd0            
            uint8_t _pad00d4[0x4]; // 0xd4
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0xd8            
            // m_hUnhitEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hUnhitEnts;
            char m_hUnhitEnts[0x18]; // 0xf0            
            Vector m_vLastSource; // 0x108            
            uint8_t _pad0114[0x29c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ChainLightningEffect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ChainLightningEffect) == 0x3b0);
    };
};

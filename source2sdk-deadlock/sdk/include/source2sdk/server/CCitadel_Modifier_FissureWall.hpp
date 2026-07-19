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
        // Size: 0x760
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_FissureWall : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x600]; // 0xd0
            // m_vecFissureWallEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecFissureWallEntities;
            char m_vecFissureWallEntities[0x18]; // 0x6d0            
            // m_vecFisureEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecFisureEntitiesHit;
            char m_vecFisureEntitiesHit[0x18]; // 0x6e8            
            std::int32_t m_nSegment; // 0x700            
            Vector m_vPosition; // 0x704            
            Vector m_vDirection; // 0x710            
            Vector m_vLeft; // 0x71c            
            float m_Length; // 0x728            
            Vector m_vBiasDirLeft; // 0x72c            
            Vector m_vBiasPosLeft; // 0x738            
            Vector m_vBiasDirRight; // 0x744            
            Vector m_vBiasPosRight; // 0x750            
            uint8_t _pad075c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_FissureWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_FissureWall) == 0x760);
    };
};

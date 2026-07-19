#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_Tier3Boss_Base.hpp"
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
        // Size: 0x250
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Tier3Boss_LaserBeam : public source2sdk::server::CCitadel_Modifier_Tier3Boss_Base
        {
        public:
            uint8_t _pad00d0[0x4]; // 0xd0
            Vector m_vStart; // 0xd4            
            Vector m_vEnd; // 0xe0            
            Vector m_vPrevEnd; // 0xec            
            float m_flAngleBetweenTrace; // 0xf8            
            source2sdk::entity2::GameTime_t m_flNextDamageTick; // 0xfc            
            source2sdk::entity2::GameTime_t m_flNextAuraDropTick; // 0x100            
            uint8_t _pad0104[0x4]; // 0x104
            // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecEntitiesHit;
            char m_vecEntitiesHit[0x18]; // 0x108            
            source2sdk::entity2::GameTime_t m_flLastShakeTime; // 0x120            
            Vector m_vecBeamTarget; // 0x124            
            source2sdk::entity2::GameTime_t m_flLastBeamUpdateTime; // 0x130            
            Vector m_vecEnemyPosition; // 0x134            
            bool m_bPreviewMode; // 0x140            
            uint8_t _pad0141[0x3]; // 0x141
            std::int32_t m_iAttachmentIndex; // 0x144            
            source2sdk::modellib::AttachmentHandle_t m_hAttachment; // 0x148            
            uint8_t _pad0149[0x107];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Tier3Boss_LaserBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Tier3Boss_LaserBeam) == 0x250);
    };
};

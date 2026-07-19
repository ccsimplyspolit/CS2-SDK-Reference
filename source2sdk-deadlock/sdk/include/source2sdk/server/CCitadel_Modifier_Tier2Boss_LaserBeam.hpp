#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
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
        // Size: 0x520
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Tier2Boss_LaserBeam : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x180]; // 0xd0
            bool m_bPreview; // 0x250            
            uint8_t _pad0251[0x3]; // 0x251
            float m_flYaw; // 0x254            
            std::int32_t m_iEnemy; // 0x258            
            // m_hCurrentEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentEnemy;
            char m_hCurrentEnemy[0x4]; // 0x25c            
            source2sdk::modellib::AttachmentHandle_t m_hLaserAttachPoint; // 0x260            
            source2sdk::modellib::AttachmentHandle_t m_hLaserAttachPoint02; // 0x261            
            source2sdk::modellib::AttachmentHandle_t m_hLaserSearchStartPos; // 0x262            
            uint8_t _pad0263[0x15]; // 0x263
            source2sdk::entity2::GameTime_t m_flSoundStartTime; // 0x278            
            uint8_t _pad027c[0xc]; // 0x27c
            VectorWS m_vStart; // 0x288            
            VectorWS m_vEnd; // 0x294            
            VectorWS m_vPrevEnd; // 0x2a0            
            float m_flAngleBetweenTrace; // 0x2ac            
            float m_flDamagePerTick; // 0x2b0            
            float m_flCreepDamagePerTick; // 0x2b4            
            source2sdk::entity2::GameTime_t m_flNextDamageTick; // 0x2b8            
            uint8_t _pad02bc[0x4]; // 0x2bc
            // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecEntitiesHit;
            char m_vecEntitiesHit[0x18]; // 0x2c0            
            float m_flDamageTickRate; // 0x2d8            
            source2sdk::entity2::GameTime_t m_flLastShakeTime; // 0x2dc            
            bool m_bSweepRightFirst; // 0x2e0            
            uint8_t _pad02e1[0x3]; // 0x2e1
            QAngle m_angBeamAim; // 0x2e4            
            VectorWS m_vecBeamTarget; // 0x2f0            
            source2sdk::entity2::GameTime_t m_flLastBeamUpdateTime; // 0x2fc            
            uint8_t _pad0300[0x18]; // 0x300
            source2sdk::entity2::GameTime_t m_flTargetingTaskStartTime; // 0x318            
            float m_flTrackVel; // 0x31c            
            uint8_t _pad0320[0x200];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Tier2Boss_LaserBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Tier2Boss_LaserBeam) == 0x520);
    };
};

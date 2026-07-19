#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
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
        // Size: 0x510
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Tier2Boss_LaserBeam : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x180]; // 0xc0
            bool m_bPreview; // 0x240            
            uint8_t _pad0241[0x3]; // 0x241
            float m_flYaw; // 0x244            
            std::int32_t m_iEnemy; // 0x248            
            // m_hCurrentEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCurrentEnemy;
            char m_hCurrentEnemy[0x4]; // 0x24c            
            source2sdk::modellib::AttachmentHandle_t m_hLaserAttachPoint; // 0x250            
            source2sdk::modellib::AttachmentHandle_t m_hLaserAttachPoint02; // 0x251            
            source2sdk::modellib::AttachmentHandle_t m_hLaserSearchStartPos; // 0x252            
            uint8_t _pad0253[0x15]; // 0x253
            source2sdk::entity2::GameTime_t m_flSoundStartTime; // 0x268            
            uint8_t _pad026c[0xc]; // 0x26c
            VectorWS m_vStart; // 0x278            
            VectorWS m_vEnd; // 0x284            
            VectorWS m_vPrevEnd; // 0x290            
            float m_flAngleBetweenTrace; // 0x29c            
            float m_flDamagePerTick; // 0x2a0            
            float m_flCreepDamagePerTick; // 0x2a4            
            source2sdk::entity2::GameTime_t m_flNextDamageTick; // 0x2a8            
            uint8_t _pad02ac[0x4]; // 0x2ac
            // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecEntitiesHit;
            char m_vecEntitiesHit[0x18]; // 0x2b0            
            float m_flDamageTickRate; // 0x2c8            
            source2sdk::entity2::GameTime_t m_flLastShakeTime; // 0x2cc            
            bool m_bSweepRightFirst; // 0x2d0            
            uint8_t _pad02d1[0x3]; // 0x2d1
            QAngle m_angBeamAim; // 0x2d4            
            VectorWS m_vecBeamTarget; // 0x2e0            
            source2sdk::entity2::GameTime_t m_flLastBeamUpdateTime; // 0x2ec            
            uint8_t _pad02f0[0x18]; // 0x2f0
            source2sdk::entity2::GameTime_t m_flTargetingTaskStartTime; // 0x308            
            float m_flTrackVel; // 0x30c            
            uint8_t _pad0310[0x200];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Tier2Boss_LaserBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Tier2Boss_LaserBeam) == 0x510);
    };
};

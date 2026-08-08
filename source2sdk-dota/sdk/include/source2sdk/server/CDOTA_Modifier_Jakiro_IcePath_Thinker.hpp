#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1ae0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Jakiro_IcePath_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float path_delay; // 0x1a78
            float path_radius; // 0x1a7c
            std::int32_t m_nDamage; // 0x1a80
            float m_flRadius; // 0x1a84
            float stun_duration; // 0x1a88
            std::int32_t detonate_projectile_speed; // 0x1a8c
            // m_hUnitsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hUnitsHit;
            char m_hUnitsHit[0x18]; // 0x1a90
            VectorWS m_vPathStart; // 0x1aa8
            VectorWS m_vPathEnd; // 0x1ab4
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1ac0
            source2sdk::client::ParticleIndex_t m_nPathEffectIndexa; // 0x1ac4
            source2sdk::client::ParticleIndex_t m_nPathEffectIndexb; // 0x1ac8
            uint8_t _pad1acc[0x14];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Jakiro_IcePath_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Jakiro_IcePath_Thinker) == 0x1ae0);
    };
};

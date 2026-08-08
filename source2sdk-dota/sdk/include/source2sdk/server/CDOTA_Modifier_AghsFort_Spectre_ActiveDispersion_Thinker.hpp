#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
        // Size: 0x1ad0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fDamage; // 0x1a78
            float m_fLastRadius; // 0x1a7c
            float m_fCurRadius; // 0x1a80
            source2sdk::entity2::GameTime_t m_fLastThink; // 0x1a84
            bool m_bContracting; // 0x1a88
            uint8_t _pad1a89[0x7]; // 0x1a89
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x1a90
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1aa8
            uint8_t _pad1aac[0x4]; // 0x1aac
            // m_EntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_EntitiesHit;
            char m_EntitiesHit[0x18]; // 0x1ab0
            std::int32_t speed; // 0x1ac8
            std::int32_t radius; // 0x1acc
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker) == 0x1ad0);
    };
};

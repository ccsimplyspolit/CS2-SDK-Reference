#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1ac0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Hoodwink_Sharpshooter_Windup : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bReachedMax; // 0x1a78
            uint8_t _pad1a79[0x3]; // 0x1a79
            float m_flLastOverheadTime; // 0x1a7c
            float m_flFacingTarget; // 0x1a80
            VectorWS m_vAimTarget; // 0x1a84
            source2sdk::client::ParticleIndex_t m_nCrosshairFX; // 0x1a90
            uint8_t _pad1a94[0x4]; // 0x1a94
            // m_vecVisionThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecVisionThinkers;
            char m_vecVisionThinkers[0x18]; // 0x1a98
            float arrow_vision; // 0x1ab0
            float max_charge_time; // 0x1ab4
            float turn_rate; // 0x1ab8
            float base_power; // 0x1abc
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Sharpshooter_Windup because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Hoodwink_Sharpshooter_Windup) == 0x1ac0);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        class CDOTA_Modifier_Rattletrap_Hookshot : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hDamaged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hDamaged;
            char m_hDamaged[0x18]; // 0x1a78
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a90
            VectorWS m_vStartPosition; // 0x1a94
            uint8_t _pad1aa0[0x14]; // 0x1aa0
            std::int32_t speed; // 0x1ab4
            float stun_radius; // 0x1ab8
            float radius_ally; // 0x1abc
            float cooldown_refund_ally; // 0x1ac0
            float damage; // 0x1ac4
            float duration; // 0x1ac8
            float ally_shield_duration; // 0x1acc
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_Hookshot because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Rattletrap_Hookshot) == 0x1ad0);
    };
};

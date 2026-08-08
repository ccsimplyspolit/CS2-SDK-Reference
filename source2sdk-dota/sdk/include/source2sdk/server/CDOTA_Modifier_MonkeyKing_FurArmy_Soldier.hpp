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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_FurArmy_Soldier : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vTargetPos; // 0x1a78
            Vector m_vDirection; // 0x1a84
            std::int32_t move_speed; // 0x1a90
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x1a94
            bool m_bIsInPosition; // 0x1a98
            uint8_t _pad1a99[0x3]; // 0x1a99
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a9c
            bool m_bAutoSpawn; // 0x1aa0
            uint8_t _pad1aa1[0x7];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_FurArmy_Soldier because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MonkeyKing_FurArmy_Soldier) == 0x1aa8);
    };
};

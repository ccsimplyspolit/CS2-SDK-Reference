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
        // Size: 0x1ab8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Medusa_StoneGaze : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a78
            float vision_cone; // 0x1a7c
            float duration; // 0x1a80
            std::int32_t speed_boost; // 0x1a84
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x1a88
            uint8_t _pad1aa0[0x18];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Medusa_StoneGaze because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Medusa_StoneGaze) == 0x1ab8);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rattletrap_CogPush : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x1a78
            Vector m_vDirection; // 0x1a7c
            float m_flEndTime; // 0x1a88
            float m_flCurTime; // 0x1a8c
            float push_length; // 0x1a90
            float push_duration; // 0x1a94
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_CogPush because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Rattletrap_CogPush) == 0x1a98);
    };
};

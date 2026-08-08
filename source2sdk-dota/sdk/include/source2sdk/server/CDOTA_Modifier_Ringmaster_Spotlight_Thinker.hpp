#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ringmaster_Spotlight_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool self_spotlight; // 0x1a78
            uint8_t _pad1a79[0x3]; // 0x1a79
            float radius; // 0x1a7c
            float initial_speed; // 0x1a80
            float sweep_speed; // 0x1a84
            float sweep_radius; // 0x1a88
            float linger_duration; // 0x1a8c
            std::int32_t spotlight_index; // 0x1a90
            VectorWS m_vStartLocation; // 0x1a94
            VectorWS m_vTargetLocation; // 0x1aa0
            float m_flTargetReachedTime; // 0x1aac
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Spotlight_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Ringmaster_Spotlight_Thinker) == 0x1ab0);
    };
};

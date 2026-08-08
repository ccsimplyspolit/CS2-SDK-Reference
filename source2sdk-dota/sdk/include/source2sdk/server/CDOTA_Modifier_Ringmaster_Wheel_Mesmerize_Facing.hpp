#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Facing : public source2sdk::client::CDOTA_Buff
        {
        public:
            float face_duration; // 0x1a78
            float duration; // 0x1a7c
            float vision_cone; // 0x1a80
            float m_flAccumulatedTime; // 0x1a84
            float mesmerize_radius; // 0x1a88
            uint8_t _pad1a8c[0x4]; // 0x1a8c
            source2sdk::server::CountdownTimer ctFacing; // 0x1a90
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1aa8
            // m_hPullTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hPullTarget;
            char m_hPullTarget[0x4]; // 0x1aac
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Facing because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Facing) == 0x1ab0);
    };
};

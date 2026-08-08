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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_TrapRoom_Hookshot : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a78
            VectorWS m_vStartPosition; // 0x1a7c
            uint8_t _pad1a88[0x14]; // 0x1a88
            std::int32_t speed; // 0x1a9c
            float duration; // 0x1aa0
            uint8_t _pad1aa4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_TrapRoom_Hookshot because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_TrapRoom_Hookshot) == 0x1aa8);
    };
};

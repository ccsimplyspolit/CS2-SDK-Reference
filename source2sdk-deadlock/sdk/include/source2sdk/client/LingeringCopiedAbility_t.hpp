#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelBaseAbility;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        #pragma pack(push, 1)
        struct LingeringCopiedAbility_t
        {
        public:
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelBaseAbility> m_hAbility;
            char m_hAbility[0x4]; // 0x0            
            std::int32_t m_nBulletsStillLive; // 0x4            
            // m_vecModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CModifierHandleTyped<source2sdk::client::CCitadelModifier>> m_vecModifiers;
            char m_vecModifiers[0x18]; // 0x8            
            source2sdk::entity2::GameTime_t m_flLastTimeShouldKeepTrained; // 0x20            
            uint8_t _pad0024[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::LingeringCopiedAbility_t, m_hAbility) == 0x0);
        static_assert(offsetof(source2sdk::client::LingeringCopiedAbility_t, m_nBulletsStillLive) == 0x4);
        static_assert(offsetof(source2sdk::client::LingeringCopiedAbility_t, m_vecModifiers) == 0x8);
        static_assert(offsetof(source2sdk::client::LingeringCopiedAbility_t, m_flLastTimeShouldKeepTrained) == 0x20);
        
        static_assert(sizeof(source2sdk::client::LingeringCopiedAbility_t) == 0x28);
    };
};

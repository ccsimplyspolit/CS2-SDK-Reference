#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0xe0
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CitadelAbilityProjectileHitInfo_t
        {
        public:
            uint8_t _pad0000[0xc8]; // 0x0
            source2sdk::client::C_BaseEntity* m_pOther; // 0xc8            
            uint8_t _pad00d0[0xc]; // 0xd0
            bool m_bIsTriggerTouch; // 0xdc            
            uint8_t _pad00dd[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelAbilityProjectileHitInfo_t, m_pOther) == 0xc8);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProjectileHitInfo_t, m_bIsTriggerTouch) == 0xdc);
        
        static_assert(sizeof(source2sdk::client::CitadelAbilityProjectileHitInfo_t) == 0xe0);
    };
};

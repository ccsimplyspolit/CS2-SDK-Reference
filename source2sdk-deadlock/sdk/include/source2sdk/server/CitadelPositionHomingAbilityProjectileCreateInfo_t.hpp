#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CitadelAbilityProjectileCreateInfo_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x70
        #pragma pack(push, 1)
        struct CitadelPositionHomingAbilityProjectileCreateInfo_t : public source2sdk::server::CitadelAbilityProjectileCreateInfo_t
        {
        public:
            Vector m_vecHomingPosition; // 0x60            
            uint8_t _pad006c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CitadelPositionHomingAbilityProjectileCreateInfo_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CitadelPositionHomingAbilityProjectileCreateInfo_t) == 0x70);
    };
};

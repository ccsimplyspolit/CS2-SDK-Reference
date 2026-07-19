#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelBaseAbility;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7a0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelProjectileTouchVolume : public source2sdk::server::CBaseModelEntity
        {
        public:
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hAbility;
            char m_hAbility[0x4]; // 0x780            
            uint8_t _pad0784[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelProjectileTouchVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelProjectileTouchVolume) == 0x7a0);
    };
};

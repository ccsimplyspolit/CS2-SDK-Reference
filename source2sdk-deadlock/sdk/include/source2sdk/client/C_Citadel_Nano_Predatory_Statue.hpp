#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAnimatingModelEntity.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xcd0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
        #pragma pack(push, 1)
        class C_Citadel_Nano_Predatory_Statue : public source2sdk::client::CCitadelAnimatingModelEntity
        {
        public:
            uint8_t _pad0cb0[0x18]; // 0xcb0
            // metadata: MNetworkEnable
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelBaseAbility> m_hAbility;
            char m_hAbility[0x4]; // 0xcc8            
            float m_flLifetime; // 0xccc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_Nano_Predatory_Statue because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_Nano_Predatory_Statue) == 0xcd0);
    };
};

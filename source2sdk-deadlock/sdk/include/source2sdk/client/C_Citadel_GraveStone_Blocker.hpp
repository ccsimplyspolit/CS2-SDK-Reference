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
        // Size: 0xcc0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
        // static metadata: MNetworkVarNames "int m_iGravestoneState"
        #pragma pack(push, 1)
        class C_Citadel_GraveStone_Blocker : public source2sdk::client::CCitadelAnimatingModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelBaseAbility> m_hAbility;
            char m_hAbility[0x4]; // 0xcb0            
            // metadata: MNetworkEnable
            std::int32_t m_iGravestoneState; // 0xcb4            
            float m_flLifetime; // 0xcb8            
            uint8_t _pad0cbc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_GraveStone_Blocker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_GraveStone_Blocker) == 0xcc0);
    };
};

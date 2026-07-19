#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AirheartLockOnTarget_t.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"

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
        // Size: 0x13c8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint8 m_nState"
        // static metadata: MNetworkVarNames "AirheartLockOnTarget_t m_vecMarks"
        #pragma pack(push, 1)
        class CCitadel_Ability_Airheart_ChargeBlast : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x4]; // 0x11d8
            // metadata: MNetworkEnable
            std::uint8_t m_nState; // 0x11dc            
            uint8_t _pad11dd[0x3]; // 0x11dd
            // metadata: MNetworkEnable
            // m_vecMarks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::AirheartLockOnTarget_t> m_vecMarks;
            char m_vecMarks[0x68]; // 0x11e0            
            uint8_t _pad1248[0x180];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Airheart_ChargeBlast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Airheart_ChargeBlast) == 0x13c8);
    };
};

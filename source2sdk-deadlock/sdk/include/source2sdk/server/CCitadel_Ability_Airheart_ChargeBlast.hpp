#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/AirheartLockOnTarget_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0x1160
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint8 m_nState"
        // static metadata: MNetworkVarNames "AirheartLockOnTarget_t m_vecMarks"
        #pragma pack(push, 1)
        class CCitadel_Ability_Airheart_ChargeBlast : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x4]; // 0xf70
            // metadata: MNetworkEnable
            std::uint8_t m_nState; // 0xf74            
            uint8_t _pad0f75[0x3]; // 0xf75
            // metadata: MNetworkEnable
            // m_vecMarks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::AirheartLockOnTarget_t> m_vecMarks;
            char m_vecMarks[0x68]; // 0xf78            
            uint8_t _pad0fe0[0x180];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Airheart_ChargeBlast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Airheart_ChargeBlast) == 0x1160);
    };
};

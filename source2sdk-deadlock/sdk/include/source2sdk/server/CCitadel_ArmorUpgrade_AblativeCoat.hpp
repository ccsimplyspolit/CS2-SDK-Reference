#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Item.hpp"

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
        // Size: 0x1100
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iCurrentResistValue"
        #pragma pack(push, 1)
        class CCitadel_ArmorUpgrade_AblativeCoat : public source2sdk::server::CCitadel_Item
        {
        public:
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0xf78            
            // metadata: MNetworkEnable
            std::int32_t m_iCurrentResistValue; // 0xf7c            
            uint8_t _pad0f80[0x180];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_ArmorUpgrade_AblativeCoat because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_ArmorUpgrade_AblativeCoat) == 0x1100);
    };
};

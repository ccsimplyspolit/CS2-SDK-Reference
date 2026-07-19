#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1430
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vLookTarget"
        #pragma pack(push, 1)
        class CCitadel_Ability_Doorman_Hotel : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x28]; // 0xf70
            // m_hHotelStart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hHotelStart;
            char m_hHotelStart[0x4]; // 0xf98            
            // m_hStartRelay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hStartRelay;
            char m_hStartRelay[0x4]; // 0xf9c            
            bool m_bSpendCooldown; // 0xfa0            
            uint8_t _pad0fa1[0x3]; // 0xfa1
            // metadata: MNetworkEnable
            Vector m_vLookTarget; // 0xfa4            
            uint8_t _pad0fb0[0x480];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Doorman_Hotel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Doorman_Hotel) == 0x1430);
    };
};

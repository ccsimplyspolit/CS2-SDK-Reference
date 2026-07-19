#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1270
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hWasAttachedTo"
        // static metadata: MNetworkVarNames "VectorWS m_vAuraPosition"
        #pragma pack(push, 1)
        class CCitadel_Ability_Familiar_Spotlight : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x88]; // 0x11d8
            // metadata: MNetworkEnable
            // m_hWasAttachedTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hWasAttachedTo;
            char m_hWasAttachedTo[0x4]; // 0x1260            
            // metadata: MNetworkEnable
            VectorWS m_vAuraPosition; // 0x1264            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Familiar_Spotlight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Familiar_Spotlight) == 0x1270);
    };
};

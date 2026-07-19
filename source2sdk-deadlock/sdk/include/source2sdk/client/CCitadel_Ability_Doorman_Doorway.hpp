#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/SatVolumeIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCitadel_DoorwayPortal;
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
        // Size: 0x1428
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CCitadel_DoorwayPortal> m_hDoor1"
        #pragma pack(push, 1)
        class CCitadel_Ability_Doorman_Doorway : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x30]; // 0x11d8
            // metadata: MNetworkEnable
            // m_hDoor1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCitadel_DoorwayPortal> m_hDoor1;
            char m_hDoor1[0x4]; // 0x1208            
            uint8_t _pad120c[0x4]; // 0x120c
            double m_flLastRangeFailCast; // 0x1210            
            uint8_t _pad1218[0x200]; // 0x1218
            float m_flDoorBreakableRadius; // 0x1418            
            uint8_t _pad141c[0x4]; // 0x141c
            source2sdk::client::SatVolumeIndex_t m_nDoorPlacementSphere; // 0x1420            
            uint8_t _pad1424[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Doorman_Doorway because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Doorman_Doorway) == 0x1428);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelPlayerPawn.hpp"
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x2220
        // Has VTable
        // 
        // static metadata: MNetworkVarTypeOverride "CCitadelFamiliarClone_MovementServices m_pMovementServices"
        // static metadata: MNetworkIncludeByName "m_pMovementServices"
        #pragma pack(push, 1)
        class CCitadelFamiliarClonePlayerPawn : public source2sdk::server::CCitadelPlayerPawn
        {
        public:
            uint8_t _pad2210[0x8]; // 0x2210
            // m_hFamiliar has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFamiliar;
            char m_hFamiliar[0x4]; // 0x2218            
            uint8_t _pad221c[0x4];
            
            // Datamap fields:
            // CCitadelFamiliarClone_MovementServices m_pMovementServices; // 0xbe0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelFamiliarClonePlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelFamiliarClonePlayerPawn) == 0x2220);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelPlayerPawn.hpp"
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
        // Size: 0x19a0
        // Has VTable
        // 
        // static metadata: MNetworkVarTypeOverride "CCitadelFamiliarClone_MovementServices m_pMovementServices"
        // static metadata: MNetworkIncludeByName "m_pMovementServices"
        #pragma pack(push, 1)
        class CCitadelFamiliarClonePlayerPawn : public source2sdk::client::C_CitadelPlayerPawn
        {
        public:
            // m_hFamiliar has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hFamiliar;
            char m_hFamiliar[0x4]; // 0x1998            
            uint8_t _pad199c[0x4];
            
            // Datamap fields:
            // CCitadelFamiliarClone_MovementServices m_pMovementServices; // 0xf28
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelFamiliarClonePlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelFamiliarClonePlayerPawn) == 0x19a0);
    };
};

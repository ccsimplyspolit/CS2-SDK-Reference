#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_AI_CitadelNPC.hpp"
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
        // Size: 0x1c00
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flForwardSpeed"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerPawn"
        #pragma pack(push, 1)
        class C_NPC_NanoRollermine : public source2sdk::client::C_AI_CitadelNPC
        {
        public:
            uint8_t _pad1bd0[0x28]; // 0x1bd0
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flForwardSpeed; // 0x1bf8            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hOwnerPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwnerPawn;
            char m_hOwnerPawn[0x4]; // 0x1bfc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NPC_NanoRollermine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NPC_NanoRollermine) == 0x1c00);
    };
};

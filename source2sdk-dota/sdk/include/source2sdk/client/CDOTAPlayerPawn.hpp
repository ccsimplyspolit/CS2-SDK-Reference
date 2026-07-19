#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BasePlayerPawn.hpp"
#include "source2sdk/client/PlayerID_t.hpp"

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
        // Size: 0xcd8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTAPlayerPawn : public source2sdk::client::C_BasePlayerPawn
        {
        public:
            source2sdk::client::PlayerID_t m_nPlayerID; // 0xcd0            
            uint8_t _pad0cd4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAPlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTAPlayerPawn) == 0xcd8);
    };
};

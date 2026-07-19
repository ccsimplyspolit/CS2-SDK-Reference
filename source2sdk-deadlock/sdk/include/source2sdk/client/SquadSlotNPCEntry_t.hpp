#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SquadSlotId_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct SquadSlotNPCEntry_t
        {
        public:
            source2sdk::client::SquadSlotId_t nId; // 0x0            
            // hEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hEnemy;
            char hEnemy[0x4]; // 0x4            
            bool bHoldForManualRelease; // 0x8            
            uint8_t _pad0009[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::SquadSlotNPCEntry_t, nId) == 0x0);
        static_assert(offsetof(source2sdk::client::SquadSlotNPCEntry_t, hEnemy) == 0x4);
        static_assert(offsetof(source2sdk::client::SquadSlotNPCEntry_t, bHoldForManualRelease) == 0x8);
        
        static_assert(sizeof(source2sdk::client::SquadSlotNPCEntry_t) == 0xc);
    };
};

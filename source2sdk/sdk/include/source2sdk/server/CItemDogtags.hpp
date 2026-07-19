#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CItem.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerPawn;
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
        // Size: 0xa10
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CItemDogtags : public source2sdk::server::CItem
        {
        public:
            // m_OwningPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_OwningPlayer;
            char m_OwningPlayer[0x4]; // 0xa00            
            // m_KillingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_KillingPlayer;
            char m_KillingPlayer[0x4]; // 0xa04            
            uint8_t _pad0a08[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemDogtags because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemDogtags) == 0xa10);
    };
};

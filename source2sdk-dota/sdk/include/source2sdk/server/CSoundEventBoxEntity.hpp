#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SoundeventBoxHelperNetworked_t.hpp"
#include "source2sdk/server/CSoundEventMultiPointEntity.hpp"

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
        // Size: 0x610
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundEventBoxEntity : public source2sdk::server::CSoundEventMultiPointEntity
        {
        public:
            CUtlSymbolLarge m_iszBoxEntityName; // 0x590            
            uint8_t _pad0598[0x18]; // 0x598
            // metadata: MNotSaved
            // m_vecBoxHelpersNetworked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::SoundeventBoxHelperNetworked_t> m_vecBoxHelpersNetworked;
            char m_vecBoxHelpersNetworked[0x60]; // 0x5b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEventBoxEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEventBoxEntity) == 0x610);
    };
};

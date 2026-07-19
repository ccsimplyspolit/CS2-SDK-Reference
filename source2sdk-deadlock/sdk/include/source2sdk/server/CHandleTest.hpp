#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
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
        // Size: 0x4a8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_Handle"
        // static metadata: MNetworkVarNames "bool m_bSendHandle"
        #pragma pack(push, 1)
        class CHandleTest : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_Handle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_Handle;
            char m_Handle[0x4]; // 0x4a0            
            // metadata: MNetworkEnable
            bool m_bSendHandle; // 0x4a4            
            uint8_t _pad04a5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CHandleTest because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CHandleTest) == 0x4a8);
    };
};

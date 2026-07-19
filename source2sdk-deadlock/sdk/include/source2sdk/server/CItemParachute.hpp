#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EObjectivePositions_t.hpp"
#include "source2sdk/server/CPhysicsProp.hpp"
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
        // Size: 0xd80
        // Has VTable
        #pragma pack(push, 1)
        class CItemParachute : public source2sdk::server::CPhysicsProp
        {
        public:
            // m_hAttachedEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttachedEntity;
            char m_hAttachedEntity[0x4]; // 0xd60            
            uint8_t _pad0d64[0x10]; // 0xd64
            source2sdk::client::EObjectivePositions_t m_eObjectivePosition; // 0xd74            
            uint8_t _pad0d78[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemParachute because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemParachute) == 0xd80);
    };
};

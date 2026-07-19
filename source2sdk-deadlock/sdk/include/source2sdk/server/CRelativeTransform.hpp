#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Standard-layout class: true
        // Size: 0x30
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRelativeTransform
        {
        public:
            CTransform m_transform; // 0x0            
            // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntity;
            char m_hEntity[0x4]; // 0x20            
            uint8_t _pad0024[0xc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CRelativeTransform, m_transform) == 0x0);
        static_assert(offsetof(source2sdk::server::CRelativeTransform, m_hEntity) == 0x20);
        
        static_assert(sizeof(source2sdk::server::CRelativeTransform) == 0x30);
    };
};

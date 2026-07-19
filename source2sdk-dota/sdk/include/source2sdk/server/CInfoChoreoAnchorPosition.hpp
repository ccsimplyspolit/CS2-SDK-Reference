#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CInfoChoreoLocatorShapeType_t.hpp"
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
        // Size: 0x50
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CInfoChoreoAnchorPosition
        {
        public:
            Vector m_vOriginLS; // 0x0            
            uint8_t _pad000c[0x4]; // 0xc
            Quaternion m_qAnglesLS; // 0x10            
            Vector m_vExtentsMin; // 0x20            
            Vector m_vExtentsMax; // 0x2c            
            float m_flRadius; // 0x38            
            bool m_bOnlyWarpPosition; // 0x3c            
            uint8_t _pad003d[0x3]; // 0x3d
            // m_hParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hParent;
            char m_hParent[0x4]; // 0x40            
            source2sdk::server::CInfoChoreoLocatorShapeType_t m_nShapeType; // 0x44            
            uint8_t _pad0048[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CInfoChoreoAnchorPosition, m_vOriginLS) == 0x0);
        static_assert(offsetof(source2sdk::server::CInfoChoreoAnchorPosition, m_qAnglesLS) == 0x10);
        static_assert(offsetof(source2sdk::server::CInfoChoreoAnchorPosition, m_vExtentsMin) == 0x20);
        static_assert(offsetof(source2sdk::server::CInfoChoreoAnchorPosition, m_vExtentsMax) == 0x2c);
        static_assert(offsetof(source2sdk::server::CInfoChoreoAnchorPosition, m_flRadius) == 0x38);
        static_assert(offsetof(source2sdk::server::CInfoChoreoAnchorPosition, m_bOnlyWarpPosition) == 0x3c);
        static_assert(offsetof(source2sdk::server::CInfoChoreoAnchorPosition, m_hParent) == 0x40);
        static_assert(offsetof(source2sdk::server::CInfoChoreoAnchorPosition, m_nShapeType) == 0x44);
        
        static_assert(sizeof(source2sdk::server::CInfoChoreoAnchorPosition) == 0x50);
    };
};

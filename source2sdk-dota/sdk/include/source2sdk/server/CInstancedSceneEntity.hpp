#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSceneEntity.hpp"
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
        // Size: 0x7f8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInstancedSceneEntity : public source2sdk::server::CSceneEntity
        {
        public:
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x7e0            
            bool m_bHadOwner; // 0x7e4            
            uint8_t _pad07e5[0x3]; // 0x7e5
            float m_flPostSpeakDelay; // 0x7e8            
            float m_flPreDelay; // 0x7ec            
            bool m_bIsBackground; // 0x7f0            
            bool m_bRemoveOnCompletion; // 0x7f1            
            uint8_t _pad07f2[0x2]; // 0x7f2
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x7f4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInstancedSceneEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInstancedSceneEntity) == 0x7f8);
    };
};

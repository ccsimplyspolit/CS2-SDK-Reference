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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class AI_CustomMantleRequest
        {
        public:
            // m_hMantleTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hMantleTarget;
            char m_hMantleTarget[0x4]; // 0x0            
            Vector m_vStartPositionOffsetLS; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::AI_CustomMantleRequest, m_hMantleTarget) == 0x0);
        static_assert(offsetof(source2sdk::server::AI_CustomMantleRequest, m_vStartPositionOffsetLS) == 0x4);
        
        static_assert(sizeof(source2sdk::server::AI_CustomMantleRequest) == 0x10);
    };
};

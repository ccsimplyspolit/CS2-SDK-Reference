#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct CBaseAnimGraph;
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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x4
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CPulseCell_PlaySequence_CursorState_t
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseAnimGraph> m_hTarget;
            char m_hTarget[0x4]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CPulseCell_PlaySequence_CursorState_t, m_hTarget) == 0x0);
        
        static_assert(sizeof(source2sdk::server::CPulseCell_PlaySequence_CursorState_t) == 0x4);
    };
};
